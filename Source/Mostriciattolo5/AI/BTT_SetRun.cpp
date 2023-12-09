// Fill out your copyright notice in the Description page of Project Settings.



#include "Mostriciattolo5/AI/BTT_SetRun.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "AIController.h"

UBTT_SetRun::UBTT_SetRun()
{
	NodeName = TEXT("SetRun");
}

EBTNodeResult::Type UBTT_SetRun::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APawn* MPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (MPawn)
	{
		if (MPawn->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
		{
			IInt_MCharacter::Execute_SetRunning(MPawn, Runs);
			return EBTNodeResult::Succeeded;
		}
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Succeeded;

}
