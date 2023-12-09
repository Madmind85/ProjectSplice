// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SetAiming.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API UBTT_SetAiming : public UBTTaskNode
{
	GENERATED_BODY()
	
public:

	UBTT_SetAiming();

	UPROPERTY(EditAnywhere)
	bool Aims = false;

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
