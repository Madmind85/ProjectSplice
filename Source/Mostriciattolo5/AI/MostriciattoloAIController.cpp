// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense.h"
#include "Perception/AISense_Sight.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AIPerceptionSystem.h"
#include "Kismet/GameplayStatics.h"


void AMostriciattoloAIController::BeginPlay()
{
	Super::BeginPlay();

	GetBlackboardComponent()->SetValueAsFloat(FName("ReactionTime"), ReactionTime);

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

	MostriciattoloGM = Cast<AMostriciattolo5GameMode>(GetWorld()->GetAuthGameMode());
}


void AMostriciattoloAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
		//se il tempo attuale è maggiore del tempo in cui lo ha visto l'ultima volta + quitchasetime
	if (GetWorld()->GetTimeSeconds() >= QuitChaseTime + LastSeenT)
	{
		SensedActor = nullptr;
		GetBlackboardComponent()->SetValueAsBool(FName("TargetVisible"), false);
		uint8 CurrentState = GetBlackboardComponent()->GetValueAsEnum((FName("CurrentStatus")));

		//se sta inseguendo o attaccando
		if (CurrentState == 6 || CurrentState == 7)
		{
			Int_SetNPCSatateAsTranquillo();
			CanAlertGuards = true;
		}
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
			if (Cast<APawn>(SPawn))
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
}

void AMostriciattoloAIController::ProcessLastVisionStimulus()
{
	bool bIsDead = IInt_MCharacter::Execute_Int_IsActorDead(SensedActor);
	ActorFaction Faction = IInt_MCharacter::Execute_Int_GetIsTarget(SensedActor);
	NPCStatus CurrentStatus = GetNpcAIStatus();
	AActor* Killer = IInt_MCharacter::Execute_Int_GetKillerActor(SensedActor);

	

	if (!bIsDead)
	{
		if (Faction == ActorFaction::Nemico)
		{		
			//senon è nel cono interno 
			if (!CheckInnerSightAngle(SensedActor, 1500.f))
			{	//Mentre sta inseguendo il mostro se lo vede con la coda dell' occhio non lo perde 
				if (GetNpcAIStatus() != NPCStatus::Aggressivo) { return; }
				if (GetNpcAIStatus() != NPCStatus::Inseguendo) { UpdateLastSeenT(); return; }
				UE_LOG(LogTemp, Warning, TEXT("Attento da Outer  sight angle nemico"))
				VoiceNamesCheck(FName("PeripheralSight"));
				//suspect actor si setta solo quando è il cadavere
				SetNPCSatateAsAttento(SensedActor->GetActorLocation(), CurrentStimulus.StimulusLocation, nullptr,ReactionTime);
			}
			else
			{
				//momento in cui lo ha visto perl'ultima volta
				UpdateLastSeenT();
				VoiceNamesCheck(FName("MonsterSight"));
				AlertClosestGuards(ActorFaction::Nemico, SensedActor);
				SetNPCSatateAsInseguendo(SensedActor);
			}
		}
		else if (Faction == ActorFaction::Compromesso )
		{		
			//senon è nel cono interno 
			if (!CheckInnerSightAngle(SensedActor, 1500.f))
			{
				//mentre sta sparando a un npc se lo vede con lacoda dell'occhio non lo perde (updatelast seen)mentre se vede il mostro lo ignora(non è sicuro di cosa sia)
				if (GetNpcAIStatus() != NPCStatus::Aggressivo) { UpdateLastSeenT(); return; }
				if (GetNpcAIStatus() != NPCStatus::Inseguendo) { return; }
				VoiceNamesCheck(FName("PeripheralSight"));
				 UE_LOG(LogTemp, Warning, TEXT("Attento da Outer  sight angle")) 
				SetNPCSatateAsAttento(SensedActor->GetActorLocation(), CurrentStimulus.StimulusLocation, nullptr, ReactionTime);
			}
			else
			{
				VoiceNamesCheck(FName("GuardSight"));
				//momento in cui lo ha visto perl'ultima volta
				UpdateLastSeenT();
				AlertClosestGuards(ActorFaction::Compromesso, SensedActor);
				SetNPCSatateAsAggressivo(SensedActor);
			}
			
		}	
	
		
	}

	else if (Killer)//non scansionato(dopo killer si resetta)
	{	
		//se sta inseguendo qualcuno non si caca il cadavere
		if (GetNpcAIStatus() == NPCStatus::Inseguendo || GetNpcAIStatus() == NPCStatus::Aggressivo)
		{
			return;
		}
		VoiceNamesCheck(FName("CorpseSight"));

		ACharacter* MChar = Cast<ACharacter>(SensedActor);
		if (MChar)
		{
			USkeletalMeshComponent* MMesh = MChar->GetMesh();
			SetNPCSatateAsAttento(MMesh->GetComponentLocation(), MMesh->GetComponentLocation(), SensedActor,0.2f);
			UE_LOG(LogTemp, Warning, TEXT("Attento da Outer  vista cadavere con killer"))
		}
		else
		{
			SetNPCSatateAsAttento(SensedActor->GetActorLocation(), SensedActor->GetActorLocation(), SensedActor, 0.2f);
		}
	}
}

void AMostriciattoloAIController::ProcessLastHearingStimulus()
{
	//Sesta attaccando, inseguendo o minacciando qualcuno, o è minacciato o fermo  non si caca il rumore
	if (GetNpcAIStatus() == NPCStatus::Tranquillo || GetNpcAIStatus() == NPCStatus::Attento )
	{
		if (CurrentStimulus.WasSuccessfullySensed())
		{
			
			FVector GoToPoint = ProjPointToNavigation(CurrentStimulus.StimulusLocation);

			if (CurrentStimulus.Tag == FName("Pericolo"))
			{
				if (GetNpcAIStatus() == NPCStatus::Minaccioso)
				{
					SetNPCSatateAsAggressivo(SensedActor);
				}
				else
				{
					// diventa minaccioso
					SetNPCSatateAsMinaccioso(SensedActor);
					VoiceNamesCheck(FName("ShootHearing"));
				}		
			}
			//se il rumore non è minaccioso lo caca solo se è tranquillo
			else if (GetNpcAIStatus() == NPCStatus::Tranquillo)
			{
				VoiceNamesCheck(FName("Hearing"));
				 UE_LOG(LogTemp, Warning, TEXT("bada Attento rumore")) 
				SetNPCSatateAsAttento(GoToPoint, CurrentStimulus.StimulusLocation,nullptr, ReactionTime);
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

void AMostriciattoloAIController::AlertClosestGuards(ActorFaction Faction, AActor* EnemyToSet)
{
	//Da Rivedere completamente
	// non trova tutte le guardie e  viene chiamato troppo spessonon 
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
		DrawDebugSphere(GetWorld(), OwnerPawn->GetActorLocation(), 4000.f, 30, FColor::Magenta, false, 0.5f);
		for (FHitResult Hit : OutHits)
		{
			FString actorName = GetName();
			UE_LOG(LogTemp, Warning, TEXT("GUARD ALERTED %s"), *actorName)

			AActor* OtherActor = Hit.GetActor();
			
			AMostriciattoloAIController* AIControl = IInt_MCharacter::Execute_Int_GetAIController(OtherActor);

			if (AIControl)
			{
				NPCStatus CurrentStatus = AIControl->GetNpcAIStatus();

				if (Faction == ActorFaction::Compromesso && (CurrentStatus != NPCStatus::Aggressivo) && (CurrentStatus != NPCStatus::Inseguendo))
				{  //attacca
					AIControl->CurrentNPCTarget = EnemyToSet;
					AIControl->SetNPCSatateAsAggressivo(CurrentNPCTarget);
				}
				//se invece è stato visto il mostriciattolo anche se questo npc sta gia attaccando qualcuno
				else if (Faction == ActorFaction::Nemico)	 
				{
					
					//cattura il mostriciattolo
					AIControl->CurrentNPCTarget = EnemyToSet;
					AIControl->SetNPCSatateAsInseguendo(CurrentNPCTarget);
				}
			}
		}
	}
}

void AMostriciattoloAIController::SetNPCStateAsAttivo()
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 2);
	GetBlackboardComponent()->SetValueAsBool(FName("IsPossessing"), false);
}

void AMostriciattoloAIController::VoiceNamesCheck(FName VoiceName)
{
	float AlertT = 5.f;
	if (SensedActor)
	{
		AlertT = IInt_MCharacter::Execute_Int_GetAlertTime(SensedActor);
	}
	FVector SoundLoc = FVector::ZeroVector;
	if (GetPawn())
	{
		SoundLoc = GetPawn()->GetActorLocation();
	}
	//se sta inseguendo il mostriciattolo non dice altri suoni
	if ((AlertT <= 0.f) && MostriciattoloGM)
	{
		MostriciattoloGM->BP_VoiceFXSelect(VoiceName,SoundLoc);
	}
	 //se non quello della vista del mostriciattolo( comunque limitato in bp sul game mode) 
	else if(VoiceName == FName("MonsterSight"))
	{
		MostriciattoloGM->BP_VoiceFXSelect(VoiceName, SoundLoc);
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

void AMostriciattoloAIController::Int_SetNPCSatateAsFermo_Implementation(bool IsFermo)
{
	if (IsFermo)
	{
		SetNPCSatateAsFermo();
	}
	else
	{
		SetNPCStateAsAttivo();
	}
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
		//SetNPCSatateAsFermo();
		StopMovement();
		if (GetPawn())
		{
			GetPawn()->DetachFromControllerPendingDestroy();
		}
		

		//BrainComponent->StopLogic(TEXT("Dead"));
		Destroy();
}

void AMostriciattoloAIController::RunAI_BehaviorTree()
{
	if (AI_Behavior)
	{
		RunBehaviorTree(AI_Behavior);
	}

}

bool AMostriciattoloAIController::SelfDestruct()
{
	return Destroy();
}

void AMostriciattoloAIController::UpdateLastSeenT()
{
	LastSeenT = GetWorld()->GetTimeSeconds();
	GetBlackboardComponent()->SetValueAsBool(FName("TargetVisible"),true);
	UE_LOG(LogTemp, Warning, TEXT("LastSeenT updated to %f"), LastSeenT);
}

bool AMostriciattoloAIController::CheckInnerSightAngle(AActor* CharacterInSight, float PS_SightRadius)
{
	if (!CharacterInSight)
	{
		UE_LOG(LogTemp, Warning, TEXT("mostriciattolo ai check inner sight angle BADA no character in sight"))
			return false;
	}
	AActor* OwnerA = GetPawn();
	if (!OwnerA)
	{
		 UE_LOG(LogTemp, Warning, TEXT(" mostriciattolo ai check inner sight no owner")) 
		return false;
	}
	//vede se CharacterInSight è all'interno dell'anmgolo InnerConeDegrees
	FVector DirectionVector = OwnerA->GetActorLocation() - CharacterInSight->GetActorLocation();
	DirectionVector.Normalize();
	double DProduct = FVector::DotProduct(OwnerA->GetActorForwardVector(), DirectionVector);
	double AngleInRadians = FMath::Acos(FMath::Abs(DProduct));
	double AngleInDegrees = AngleInRadians * (180.0 / UE_PI);
	//calcola la lunghezza del cono interno in  base alla percentuaòe(innerConeLength) della lunghezza di vista totale(GetPS_SightRadius())
	float InnerConeStraightLength = (InnerConeLength / 100) * PS_SightRadius;
	float DistanceFromActor = FVector::Distance(OwnerA->GetActorLocation(), CharacterInSight->GetActorLocation());

	UE_LOG(LogTemp, Warning, TEXT("Mostriciattolo AIController- Check Inner Sight Angle: DProduct = %f, AngleInRadians = %f"), DProduct, AngleInRadians)
		 UE_LOG(LogTemp, Warning, TEXT("Mostriciattolo AIController Check Inner Sight Angle InnerConeStraightLength = %f "), InnerConeStraightLength)
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
	GetBlackboardComponent()->SetValueAsBool(FName("IsPossessing"), true);

	//GetBrainComponent()->StopLogic(TEXT("Dead"));
}

void AMostriciattoloAIController::SetNPCSatateAsTranquillo()
{
	if (IsPawnPossessed()) { UE_LOG(LogTemp, Warning, TEXT("bada tranquillo possessed"))return; }
	 UE_LOG(LogTemp, Warning, TEXT("DioCan Tranquillo")) 
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 2);
	GetBlackboardComponent()->SetValueAsObject(FName("SuspectActor"), nullptr);
	GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), nullptr);
	GetBlackboardComponent()->SetValueAsObject(FName("AimTarget"), nullptr);
	GetBlackboardComponent()->SetValueAsVector(FName("SuspectPoint"), FVector::ZeroVector);
	GetBlackboardComponent()->SetValueAsVector(FName("MoveToLocation"), FVector::ZeroVector);
	
}
void AMostriciattoloAIController::SetNPCSatateAsMinacciato()
{
	if (IsPawnPossessed()) { return; }
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 3);
}


void AMostriciattoloAIController::SetNPCSatateAsAttento(FVector MoveToLoc, FVector Suspect_Point, AActor* SuspectActor, float reactionTime)
{
	
	if (IsPawnPossessed()) { return; }
	UE_LOG(LogTemp, Warning, TEXT("DioCan Attento"))

	GetBlackboardComponent()->SetValueAsFloat(FName("ReactionTime"), reactionTime);

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 4);

	GetBlackboardComponent()->SetValueAsVector(FName("SuspectPoint"), Suspect_Point);
	GetBlackboardComponent()->SetValueAsVector(FName("MoveToLocation"), MoveToLoc);
	GetBlackboardComponent()->SetValueAsObject(FName("SuspectActor"), SuspectActor);

}


void AMostriciattoloAIController::SetNPCSatateAsMinaccioso(AActor* ThreatenedActor)
{
	if (IsPawnPossessed()) { return; }

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 5);
	if (ThreatenedActor)
	{
		GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), ThreatenedActor);
	}

}

void AMostriciattoloAIController::SetNPCSatateAsAggressivo(AActor* Target)
{
	//if (IsPawnPossessed()) { return; } //crash
	
	if (Target)
	{
		
		UE_LOG(LogTemp, Warning, TEXT("DioCan Aggressivo"))
		GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 6);
		GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), Target);
		//TODO creare funzione su interface per prendere aimtarget da Target
		GetBlackboardComponent()->SetValueAsObject(FName("AimTarget"), Target);

	}
}

void AMostriciattoloAIController::SetNPCSatateAsInseguendo(AActor* Target)
{
	
	if (IsPawnPossessed()) {  UE_LOG(LogTemp, Warning, TEXT("bada possessed")) return; }
	if (Target)
	{
		UE_LOG(LogTemp, Warning, TEXT("inseguendo porcoddio"))
			MostriciattoloGM->BP_StartStopChaseSound(true);
		
		IInt_MCharacter::Execute_Int_UpdateAlertTime(Target);
		GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 7);
		GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), Target);
	}
}
