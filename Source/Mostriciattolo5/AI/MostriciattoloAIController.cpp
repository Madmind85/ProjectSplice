// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense.h"
#include "Perception/AISense_Sight.h"
#include "NavigationSystem.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AIPerceptionSystem.h"
#include "Kismet/GameplayStatics.h"


void AMostriciattoloAIController::BeginPlay()
{
	Super::BeginPlay();


	if (AI_Behavior)
	{
		RunBehaviorTree(AI_Behavior);
	}

	SetNPCSatateAsTranquillo();
	/*
	APawn* MPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	GetBlackboardComponent()->SetValueAsObject(FName("Mostriciattolo"), MPlayerPawn);
	*/
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
			for (const FAIStimulus CStim : CurrentStimuli)
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



		if (bDead == false)
		{	//se lo sta  attualmente vedendo
			if (CurrentStimulus.WasSuccessfullySensed())
			{
				AActor* Killer = IInt_MCharacter::Execute_Int_GetKillerActor(SensedActor);
				if (Killer)
				{
					//setta il suspect actor(cadavere)
					GetBlackboardComponent()->SetValueAsObject(FName("SuspectActor"), SensedActor);
					//e setta lo stato su attennto
					SetNPCSatateAsAttento(SensedActor->GetActorLocation(), SensedActor->GetActorLocation(), SensedActor);


					//TODO reazione al cadavere
					//chiama altre guardie vicine
					//scansiona il cadavere
					//tramite Int_MCharacter si accede all'identita dell'assassino (get guardkiller che si potrebbe settare dall'instigator del receive damage)
					//settare variavbile sempre tramite interfaccia come gia scansonato senno lo fanno in eterno
					//setta l'assassino come compromesso
					//spawn del raccoglitore di cadaveri
				}

				//se la guardia vista è compromessa e questo npc non sta gia attacando qualcuno
				if (Faction == ActorFaction::Compromesso && (CurrentStatus != NPCStatus::Aggressivo))
				{  //attacca
					CurrentNPCTarget = SensedActor;
					SetNPCSatateAsAggressivo(CurrentNPCTarget);
				}
				//se invece è stato visto il mostriciattolo anche se questo npc sta gia attaccando qualcuno
				else if (Faction == ActorFaction::Nemico)
				{	//attacca
					CurrentNPCTarget = SensedActor;
					SetNPCSatateAsAggressivo(CurrentNPCTarget);

					//TODO event dispatcher per far sapere alle guardie che il mostriciattolo è stato visto  quindi non ci sono più guardie compromesse
				}
				//se ivece lo perde

			}
			//se ti sta sparando e ti perde
			else if (GetNpcAIStatus() == NPCStatus::Aggressivo && !CurrentStimulus.WasSuccessfullySensed())
			{
				//corre verso l'ultimo punto in cui ti ha visto
				SetNPCSatateAsInseguendo(CurrentStimulus.StimulusLocation);
			}
			//se c'è un cadavere
		}
		/*
		if (bDead == true)
		{
			 
			//che non è stato scanzsionato(ovvero ha ancora il killer settato)
		
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

void AMostriciattoloAIController::SetNPCSatateAsInseguendo(FVector LastSeenTarget)
{
	if (IsPawnPossessed()) { return; }	
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 7);
	GetBlackboardComponent()->SetValueAsVector(FName("MoveToLocation"), LastSeenTarget);
	//TODO aggiungere nell Int_MChar uno switch definito in bp perla velocita jog  e walk
}
