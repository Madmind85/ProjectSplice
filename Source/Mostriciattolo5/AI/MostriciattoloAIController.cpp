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

void AMostriciattoloAIController::OnPawnSeen(TArray<APawn*> SeenPawns)
{
	if (!AIPerceptionComp) {SetAIPerceprionComponent();}
	//dati relativi al pawn percepito
	FActorPerceptionBlueprintInfo PercInfo;

	if (AIPerceptionComp)
	{//loop tra i pawn percepiti
		for (APawn* SPawn : SeenPawns)
		{
			AIPerceptionComp->GetActorsPerception(SPawn, PercInfo);
			//salva l'attore percepito
			SensedActor = PercInfo.Target;
			//neested loop attraverso gli stimoli raccolti da questo pawn
			TArray<FAIStimulus> CurrentStimuli = PercInfo.LastSensedStimuli;
			for (const FAIStimulus CStim : CurrentStimuli)
			{
				CurrentStimulus = CStim;
				FAISenseID sightid = UAISense::GetSenseID<UAISense_Sight>();
				FAISenseID hearid = UAISense::GetSenseID<UAISense_Hearing>();

				if (CurrentStimulus.Type == sightid)
				{
					UE_LOG(LogTemp, Warning, TEXT("I SAW YOU!"));
				}
				else if (CurrentStimulus.Type == hearid)
				{
					UE_LOG(LogTemp, Warning, TEXT("I HEARD YOU!"));
				}
					
			}

		}
	}
}

void AMostriciattoloAIController::SetAIPerceprionComponent()
{
	AIPerceptionComp = GetOwner()->GetComponentByClass<UAIPerceptionComponent>();
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

void AMostriciattoloAIController::BeginPlay()
{
	Super::BeginPlay();

	SetAIPerceprionComponent();
	
	if (AI_Behavior)
	{
		RunBehaviorTree(AI_Behavior);
	}
	/*
	APawn* MPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	GetBlackboardComponent()->SetValueAsObject(FName("Mostriciattolo"), MPlayerPawn);
	*/
}
