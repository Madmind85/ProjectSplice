// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/BTT_SetAiming.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "AIController.h"

UBTT_SetAiming::UBTT_SetAiming()
{
	NodeName = TEXT("SetAiming");

}

EBTNodeResult::Type UBTT_SetAiming::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	APawn* MPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (MPawn)
	{
		if (MPawn->GetClass()->ImplementsInterface(UInt_MCharacter::StaticClass()))
		{
			IInt_MCharacter::Execute_SetIsAiming(MPawn, Aims);
			return EBTNodeResult::Succeeded;
		}
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Succeeded;
}
