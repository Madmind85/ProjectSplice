// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense.h"
#include "Perception/AISense_Sight.h"
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
					UE_LOG(LogTemp, Warning, TEXT("I HEARD YOU!"));
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
		bool bIsTarget = IInt_MCharacter::Execute_Int_GetIsTarget(SensedActor);

		if (bDead == false)
		{
			if (bIsTarget)
			{
				//setCurrentStatus to aggressivo (creare funzione si puo settare il valore sulla blackboars anche da c , esempio commentato in begin play)
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


AActor* AMostriciattoloAIController::Int_GetCurrentNPCTarget_Implementation()
{
	return CurrentNPCTarget;
}

void AMostriciattoloAIController::Int_SetCurrentNPCTarget_Implementation(AActor* NewTarget)
{
	CurrentNPCTarget = NewTarget;
	
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
	//vede se CharacterInSight � all'interno dell'anmgolo InnerConeDegrees
	FVector DirectionVector = GetOwner()->GetActorLocation() - CharacterInSight->GetActorLocation();
	DirectionVector.Normalize();
	double DProduct = FVector::DotProduct(OwnerA->GetActorForwardVector(), DirectionVector);
	double AngleInRadians = FMath::Acos(FMath::Abs(DProduct));
	double AngleInDegrees = AngleInRadians * (180.0 / UE_PI);
	//calcola la lunghezza del cono interno in  base alla percentua�e(innerConeLength) della lunghezza di vista totale(GetPS_SightRadius())
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
	//Morto = 0 /Fermo = 1 /Tranquillo = 2 /Minacciato = 3 /Attento = 4 /Minaccioso = 5 /Aggressivo = 6

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 0);
	SetPawnAim(false);
}

void AMostriciattoloAIController::SetNPCSatateAsFermo()
{

	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 1);
	SetPawnAim(false);
}

void AMostriciattoloAIController::SetNPCSatateAsTranquillo()
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 2);
	SetPawnAim(false);
}
void AMostriciattoloAIController::SetNPCSatateAsMinacciato()
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 3);
}


void AMostriciattoloAIController::SetNPCSatateAsAttento(FVector MoveToLoc, FVector Suspect_Point)
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 4);

	GetBlackboardComponent()->SetValueAsVector(FName("SuspectPoint"), Suspect_Point);
	GetBlackboardComponent()->SetValueAsVector(FName("MoveToLocation"), MoveToLoc);
	SetPawnAim(true);
}


void AMostriciattoloAIController::SetNPCSatateAsMinaccioso()
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 5);
}

void AMostriciattoloAIController::SetNPCSatateAsAggressivo(AActor* Target, AActor* Aim_Target)
{
	GetBlackboardComponent()->SetValueAsEnum(FName("CurrentStatus"), 6);

	GetBlackboardComponent()->SetValueAsObject(FName("CurrentEnemy"), Target);
	GetBlackboardComponent()->SetValueAsObject(FName("AimTarget"), Aim_Target);

	SetPawnAim(true);
}
