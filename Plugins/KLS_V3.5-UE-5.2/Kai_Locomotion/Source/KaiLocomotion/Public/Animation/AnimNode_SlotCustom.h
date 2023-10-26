// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_Slot.h"
#include "UObject/Object.h"
#include "AnimNode_SlotCustom.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct KAILOCOMOTION_API FAnimNode_SlotCustom : public FAnimNode_Slot
{
	GENERATED_USTRUCT_BODY()
public:
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
};
