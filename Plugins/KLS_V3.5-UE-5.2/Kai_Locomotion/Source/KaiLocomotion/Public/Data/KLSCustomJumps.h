//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.

#pragma once


#include <GameplayTagContainer.h>

#include "KLSCharacterData.h"
#include "GameFramework/Pawn.h"
#include "KLSCustomJumps.generated.h"


class UAnimSequence;
class APawn;


//structs
USTRUCT(BlueprintType)
struct FKLSJumpSelectorInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	APawn* Owner = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	bool IsStrafing = false;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	float JumpSpeed2D = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	bool bIsLeftFootUp = true;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	bool ObstacleOverHead = false;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	FVector PredictedJumpApexLoc = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	FVector JumpStartLoc = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	FVector PredictedJumpLandLoc = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	EKLSCardinalDirection JumpDirection = EKLSCardinalDirection::EFwd;

};

USTRUCT(BlueprintType)
struct FKLSLandSelectorInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	APawn* Owner = nullptr;
	
	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	bool IsStrafing = false;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	float LandFallSpeed = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	float LandFallDistance = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	EKLSCardinalDirection LandDirection = EKLSCardinalDirection::EFwd;

	UPROPERTY(BlueprintReadWrite, Category = "JumpInfo")
	FGameplayTag JumpAnimTag;
};


//classes
UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew)
class KAILOCOMOTION_API UKLSCustomJumps : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kai Animation Library")
	FGameplayTag SelectJumpAnimations(const FKLSJumpSelectorInfo& JumpInfo);

protected:

	virtual FGameplayTag SelectJumpAnimationsInternal(const FKLSJumpSelectorInfo& JumpInfo);
};

UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, EditInlineNew)
class KAILOCOMOTION_API UKLSCustomLand : public UObject
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kai Animation Library")
	FGameplayTag SelectLandAnimation(const FKLSLandSelectorInfo& LandInfo);
protected:
	
	virtual FGameplayTag SelectLandAnimationInternal(const FKLSLandSelectorInfo& JumpInfo);
};