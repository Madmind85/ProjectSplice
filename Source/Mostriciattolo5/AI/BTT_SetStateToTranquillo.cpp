// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/BTT_SetStateToTranquillo.h"
#include "AIController.h"
#include "Mostriciattolo5/Interfaces/Int_Guardie.h"

UBTT_SetStateToTranquillo::UBTT_SetStateToTranquillo()
{
	NodeName = TEXT("Set State To Tranquillo");
}

EBTNodeResult::Type UBTT_SetStateToTranquillo::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* MCont = OwnerComp.GetAIOwner();

	if (MCont)
	{
		if (MCont->GetClass()->ImplementsInterface(UInt_Guardie::StaticClass()))
		{
			IInt_Guardie::Execute_Int_SetNPCSatateAsTranquillo(MCont);
			return EBTNodeResult::Succeeded;
		}
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Succeeded;
}
