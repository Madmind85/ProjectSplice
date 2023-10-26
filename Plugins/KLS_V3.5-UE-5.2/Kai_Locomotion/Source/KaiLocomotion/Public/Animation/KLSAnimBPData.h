//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.

#pragma once


#include "GameplayTagContainer.h"
#include "Data/KLSCharacterData.h"
#include "Data/KLSCustomJumps.h"

#include "KLSAnimBPData.generated.h"

USTRUCT(BlueprintType)
struct FKLSAnimCurvesValues
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float RightArmMeshSpaceWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float RightArmLocalSpaceWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float LeftArmMeshSpaceWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float LeftArmLocalSpaceWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float RightHandWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float LeftHandWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	float SpeedGaitAlpha = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	bool bUnlockRightFoot = false;

	UPROPERTY(BlueprintReadOnly,Category = "StatesSnaps", meta = (HideDefault))
	bool bUnlockLeftFoot = false;

	float EnableFootLockTransition = 0.0f;
	
};

