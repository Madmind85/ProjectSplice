// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense.h"
#include "Perception/AISense_Sight.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AIPerceptionSystem.h"
#include "Kismet/GameplayStatics.h"


void AMostriciattoloAIController::BeginPlay()
{
	Super::BeginPlay();


	APawn* CurrentPawn = GetPawn();
	RunAI_BehaviorTree();
	
	SetNPCSatateAsTranquillo();
	/*
	APawn* MPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	GetBlackboardComponent()->SetValueAsObject(FName("Mostriciattolo"), MPlayerPawn);
	*/

	bool bIsPatroller = IInt_MCharacter::Execute_Int_IsPatroller(CurrentPawn);
	if (bIsPatroller)
	{
		GetBlackboardComponent()->SetValueAsBool(FName("IsPatroller"), true);
	}
	else
	{
		
		if (CurrentPawn)
		{
			GetBlackboardComponent()->SetValueAsBool(FName("IsPatroller"), false);
			GetBlackboardComponent()->SetValueAsVector(FName("GuardPosition"), CurrentPawn->GetActorLocation());
			GetBlackboardComponent()->SetValueAsRotator(FName("InitialRotation"), CurrentPawn->GetActorRotation());
		}
	}
}


void AMostriciattoloAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld()->GetTimeSeconds() > QuitChaseTime + LastSeenTime)
	{
		SensedActor = nullptr;

		Int_SetNPCSatateAsTranquillo();
		CanAlertGuards = true;
	}
}

NPCStatus AMostriciattoloAIController::GetNpcAIStatus()
{
	UBlackboardComponent* BB1 = GetBlackboardComponent();
	if (BB1)
	{
		uint8 CurrentStatus = BB1->GetValueAsEnum(FName("CurrentStatus"));
		return static_cast<NPCStatus>(CurrentStatus);
	}
	else
	{
		return NPCStatus::Tranquillo;
	}
}

bool AMostriciattoloAIController::IsMCharacterDead(AActor* ActorToTest)
{
	if (ActorToTest)
	{
		if (ActorToTest->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
		{
			return IInt_MCharacter::Execute_Int_IsActorDead(ActorToTest);
		}
		else return true;
	}
	else return true;
}

void AMostriciattoloAIController::OnActorSeen(TArray<AActor*> SeenActors)
{
	
	UAIPerceptionComponent* AIPerceptionComp = GetAIPerceptionComponent();
	FAISenseID sightid = UAISense::GetSenseID<UAISense_Sight>();
	FAISenseID hearid = UAISense::GetSenseID<UAISense_Hearing>();

	//dati relativi al pawn percepito
	FActorPerceptionBlueprintInfo PercInfo;

	if (AIPerceptionComp)
	{	//loop tra i pawn percepiti
		for (AActor* SPawn : SeenActors)
		{
			AIPerceptionComp->GetActorsPerception(SPawn, PercInfo);
			//salva l'attore percepito
			SensedActor = PercInfo.Target;
			//nested loop attraverso gli stimoli raccolti da questo pawn
			TArray<FAIStimulus> CurrentStimuli = PercInfo.LastSensedStimuli;
			for (const FAIStimulus& CStim : CurrentStimuli)
			{
				//Salva Lo Stimolo percepito
				CurrentStimulus = CStim;
				
				if (CStim.Type == sightid)
				{
		
					ProcessLastVisionStimulus();
				}
				else if (CStim.Type == hearid && CStim.IsActive())
				{
					ProcessLastHearingStimulus();
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Stimulus not active or not recognized"));
				}
					
			}

		}
	}
}

void AMostriciattoloAIController::ProcessLastVisionStimulus()
{
	if (SensedActor->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
	{
		bool bDead = IInt_MCharacter::Execute_Int_IsActorDead(SensedActor);
		ActorFaction Faction = IInt_MCharacter::Execute_Int_GetIsTarget(SensedActor);
		NPCStatus CurrentStatus = GetNpcAIStatus();
		//se c'è un cadavere
		AActor* Killer = IInt_MCharacter::Execute_Int_GetKillerActor(SensedActor);

		//{	//se lo sta  attualmente vedendo
		if (CurrentStimulus.WasSuccessfullySensed())
		{
			
			if (bDead == false)
			{
				if (Faction == ActorFaction::Neutrale) { SetNPCSatateAsTranquillo(); return; }

				LastSeenTime = GetWorld()->GetTimeSeconds();
				//se la guardia vista è compromessa e questo npc non sta gia attacando qualcuno
				if (Faction == ActorFaction::Compromesso && (CurrentStatus != NPCStatus::Aggressivo) && (CurrentStatus != NPCStatus::Inseguendo))
				{  //attacca
					CurrentNPCTarget = SensedActor;
					SetNPCSatateAsAggressivo(CurrentNPCTarget);
					if (CanAlertGuards)
					{
						AlertClosestGuards(Faction);
						CanAlertGuards = false;
					}
				}
				//se invece è stato visto il mostriciattolo anche se questo npc sta gia attaccando qualcuno
				else if (Faction == ActorFaction::Nemico)
				{	//attacca
					CurrentNPCTarget = SensedActor;
					SetNPCSatateAsInseguendo(CurrentNPCTarget);

					if (CanAlertGuards)
					{
						AlertClosestGuards(Faction);
						CanAlertGuards = false;
					}
				}
			}
			else if (Killer)//non scansionato(dopo killer si resetta)
			{	//se non è in mezzo ad unarissa
				if (GetNpcAIStatus() == NPCStatus::Tranquillo || GetNpcAIStatus() == NPCStatus::Attento)
				{
					if (GetBlackboardComponent()->GetValueAsObject(FName("CurrentEnemy"))) {return;}
					//setta il suspect actor(cadavere)
					GetBlackboardComponent()->SetValueAsObject(FName("SuspectActor"), SensedActor);
					//e setta lo stato su attennto
					ACharacter* SensedChar = Cast<ACharacter>(SensedActor);
					if (SensedChar)
					{
						USkeletalMeshComponent* SMesh = SensedChar->GetMesh();
						if (SMesh)
						{
							SetNPCSatateAsAttento(SMesh->GetComponentLocation(), SMesh->GetComponentLocation(), SensedActor);
						}
					}
				}

			}
		}
			//se ti sta sparando e ti perde
		/*
		else if (!CurrentStimulus.WasSuccessfullySensed())
		{
			
		}
		*/
	}
}

void AMostriciattoloAIController::ProcessLastHearingStimulus()
{
	//Sesta attaccando, inseguendo o minacciando qualcuno, o è minacciato o fermo  non si caca il rumore
	if (GetNpcAIStatus() == NPCStatus::Tranquillo || GetNpcAIStatus() == NPCStatus::Attento)
	{
		if (CurrentStimulus.WasSuccessfullySensed())
		{
			FVector GoToPoint = ProjPointToNavigation(CurrentStimulus.StimulusLocation);

			if (CurrentStimulus.Tag == FName("Pericolo"))
			{
				//TODO Se vede anche chi ha  generato il suono pericoloso diventa minaccioso
				//Altrimneti corre verso lo sparo 
			}
			//se il rumore non è minaccioso lo caca solo se è tranquillo
			else if (GetNpcAIStatus() == NPCStatus::Tranquillo)
			{
				SetNPCSatateAsAttento(GoToPoint, CurrentStimulus.StimulusLocation,nullptr);
			}
		}
	}
}

void AMostriciattoloAIController::SetPawnAim(bool bPawnAiming)
{
	APawn* MPawn = GetPawn();
	if (MPawn)
	{
		if (MPawn->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
		{
			//mira
			IInt_MCharacter::Execute_SetIsAiming(MPawn, bPawnAiming);
		}
	}
}

bool AMostriciattoloAIController::IsPawnPossessed()
{
	APawn* MPawn = GetPawn();
	if (MPawn)
	{
		if (MPawn->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
		{
			return IInt_MCharacter::Execute_Int_IsActorPossessed(MPawn);
		}
		else return false;
	}
	else return false;
}

FVector AMostriciattoloAIController::ProjPointToNavigation(FVector Point)
{
	// Ottieni l'istanza del sistema di navigazione
	const UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());

	// Punto nel mondo che vuoi proiettare
	FVector WorldPoint = Point;

	// Variabile per memorizzare il risultato della proiezione
	FNavLocation ProjectedPoint;

	// Proietta il punto sulla superficie navigabile
	bool bSuccess = NavSys->ProjectPointToNavigation(WorldPoint, ProjectedPoint);
	
	if (bSuccess)
	{
		return ProjectedPoint;
	}
	return WorldPoint;
	
}

void AMostriciattoloAIController::AlertClosestGuards(ActorFaction Faction)
{
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);
	APawn* OwnerPawn = GetPawn();

	FCollisionShape MyColSphere = FCollisionShape::MakeSphere(4000.f); 

	TArray<FHitResult> OutHits;
	if (OwnerPawn)
	{
		// Call the function
		GetWorld()->SweepMultiByObjectType
		(
			OutHits,
			OwnerPawn->GetActorLocation(),
			OwnerPawn->GetActorLocation() +1.f,
			FQuat::Identity,
			ObjectQueryParams,
			MyColSphere
		);
		
		for (auto& Hit : OutHits)
		{
			AActor* OtherActor = Hit.GetActor();
			
			AMostriciattoloAIController* AIControl = IInt_MCharacter::Execute_Int_GetAIController(OtherActor);

			if (AIControl)
			{
				NPCStatus CurrentStatus = AIControl->GetNpcAIStatus();

				if (Faction == ActorFaction::Compromesso && (CurrentStatus != NPCStatus::Aggressivo) && (CurrentStatus != NPCStatus::Inseguendo))
				{  //attacca
					AIControl->CurrentNPCTarget = SensedActor;
					AIControl->SetNPCSatateAsAggressivo(CurrentNPCTarget);
				}
				//se invece è stato visto il mostriciattolo anche se questo npc sta gia attaccando qualcuno
				else if (Faction == ActorFaction::Nemico)
				{	//cattura il mostriciattolo
					AIControl->CurrentNPCTarget = SensedActor;
					AIControl->SetNPCSatateAsInseguendo(CurrentNPCTarget);
				}
			}
		}
	}
}



AActor* AMostriciattoloAIController::Int_GetCurrentNPCTarget_Implementation()
{
	return CurrentNPCTarget;
}

void AMostriciattoloAIController::Int_SetCurrentNPCTarget_Implementation(AActor* NewTarget)
{
	CurrentNPCTarget = NewTarget;
	
}

void AMostriciattoloAIController::Int_SetNPCSatateAsTranquillo_Implementation()
{
	SetNPCSatateAsTranquillo();
}

void AMostriciattoloAIController::Int_SetNPCSatateAsFermo_Implementation()
{
	SetNPCSatateAsFermo();
}

void AMostriciattoloAIController::Int_SetNPCDead_Implementation()
{
	
	SetNPCSatateAsFermo();
	BrainComponent->StopLogic(TEXT("Dead"));
}

void AMostriciattoloAIController::Int_SetNPCSatateAsAggressivo_Implementation(AActor* CurrentEnemy)
{
	SetNPCSatateAsAggressivo(CurrentEnemy);
}

void AMostriciattoloAIController::OnDeathController()
{
		SetNPCSatateAsFermo();
		StopMovement();
		BrainComponent->StopLogic(TEXT("Dead"));
}

void AMostriciattoloAIController::RunAI_BehaviorTree()
{
	if (AI_Behavior)
	{
		RunBehaviorTree(AI_Behavior);
	}

}

bool AMostriciattoloAIController::CheckInnerSightAngle(APawn* CharacterInSight, float PS_SightRadius)
{
	if (!CharacterInSight)
	{
		UE_LOG(LogTemp, Warning, TEXT("mostriciattolo character 5 check inner sight angle BADA no character in sight"))
			return false;
	}
	AActor* OwnerA = GetOwner();
	if (!OwnerA)
	{
		return false;
	}
	//vede se CharacterInSight è all'interno dell'anmgolo InnerConeDegrees
	FVector DirectionVector = GetOwner()->GetActorLocation() - CharacterInSight->GetActorLocation();
	DirectionVector.Normalize();
	double DProduct = FVector::DotProduct(OwnerA->GetActorForwardVector(), DirectionVector);
	double AngleInRadians = FMath::Acos(FMath::Abs(DProduct));
	double AngleInDegrees = AngleInRadians * (180.0 / UE_PI);
	//calcola la lunghezza del cono interno in  base alla percentuaòe(innerConeLength) della lunghezza di vista totale(GetPS_SightRadius())
	float InnerConeStraightLength = (InnerConeLength / 100) * PS_SightRadius;
	float DistanceFromActor = FVector::Distance(OwnerA->GetActorLocation(), CharacterInSight->GetActorLocation());

	UE_LOG(LogTemp, Warning, TEXT("Mostriciattolo Character 5 - Check Inner Sight Angle: DProduct = %f, AngleInRadians = %f"), DProduct, AngleInRadians)

		if (AngleInDegrees <= InnerConeDegrees && DistanceFromActor < InnerConeStraightLength)
		{
			return true;
		}
		else
		{
			return false;
		}
}



void AMostriciattoloAIController::SetNPCSatateAsMorto()
{
	//Morto = 0 /Fermo = 1 /Tranquillo = 2 /Minacciato = 3 /Attento = 4 /Minaccioso = 5 /Aggressivo = 6 /Inseguendo = 7

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 0);
	SetPawnAim(false);
}

void AMostriciattoloAIController::SetNPCSatateAsFermo()
{

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 1);
	SetPawnAim(false);
	//GetBrainComponent()->StopLogic(TEXT("Dead"));
}

void AMostriciattoloAIController::SetNPCSatateAsTranquillo()
{
	if (IsPawnPossessed()) { return; }
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 2);
	
}
void AMostriciattoloAIController::SetNPCSatateAsMinacciato()
{
	if (IsPawnPossessed()) { return; }
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 3);
}


void AMostriciattoloAIController::SetNPCSatateAsAttento(FVector MoveToLoc, FVector Suspect_Point, AActor* SuspectActor)
{
	if (IsPawnPossessed()) { return; }


	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 4);

	GetBlackboardComponent()->SetValueAsVector(FName("SuspectPoint"), Suspect_Point);
	GetBlackboardComponent()->SetValueAsVector(FName("MoveToLocation"), MoveToLoc);

}


void AMostriciattoloAIController::SetNPCSatateAsMinaccioso(AActor* ThreatenedActor)
{
	if (IsPawnPossessed()) { return; }

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 5);
	if (ThreatenedActor)
	{
		//TODO comportamento miaccioso
	}

}

void AMostriciattoloAIController::SetNPCSatateAsAggressivo(AActor* Target)
{
	if (IsPawnPossessed()) { return; }
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 6);

	GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), Target);
	//TODO creare funzione su interface per prendere aimtarget da Target
	GetBlackboardComponent()->SetValueAsObject(FName("AimTarget"), Target);

}

void AMostriciattoloAIController::SetNPCSatateAsInseguendo(AActor* Target)
{
	if (IsPawnPossessed()) { return; }	
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 7);
	GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), Target);
	
}
