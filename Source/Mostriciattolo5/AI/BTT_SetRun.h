// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetRun.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API UBTT_SetRun : public UBTTaskNode
{
	GENERATED_BODY()
public:

	UBTT_SetRun();

	UPROPERTY(EditAnywhere)
	bool Runs = false;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
