// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SequencePlayerLibrary.h"
#include "Animation/AnimInstance.h"
#include "Data/KLSAnimationData.h"
#include "Data/KLSCharacterData.h"
#include "KLSBaseAnimInstance.generated.h"

/**
 * 
 */

class UKLSCharacterMovementComponent;



USTRUCT(BlueprintType)
struct FKLSBaseAnimBPData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	float TurnInPlaceAngle = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	float StandingPivotTargetAngle = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool StandingStartBlendToLoop = false;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool StandingPostPivotBlendToLoop = false;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool StandingStopBlendToLoop = false;
	
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FKLSJumpSet CurrentJumpSet;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FGameplayTag JumpAnimTag;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FKLSPivotAnimSet CurrentStandingPivotSet;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FKLSLocomotionJump CurrentJumpAnims;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FKLSLandSet CurrentLandSet;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool IsInApex = false;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool IsLanding = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector JumpApexLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	float LandAdditiveAlpha = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	float MinLandingDistance = 300.0f;
};



UCLASS()
class KAILOCOMOTION_API UKLSBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data")
	FAnimNodesBonesData AnimNodesBonesData;
	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data")
    float LoopsBlendTime = 0.4;
    	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data")
	float CrouchingBlendInTime = 0.5;

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data")
	float CrouchingBlendOutTime = 0.5;
	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	FKLSCharacterData CharacterData;
	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	FKLSBaseAnimBPData BaseAnimBPData;

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	float RotationInterpSpeed;

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	FKLSCustomRotationData CustomRotationData;

	UPROPERTY(BlueprintReadOnly, Category="KLS|StatesData", meta = (HideDefault))
	EKLSGroundAnimState StandingAnimState;
	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	float RotationAlpha;
	
	UPROPERTY(BlueprintReadWrite,Category = "KLS|Animation BP Data", meta = (HideDefault))
	float CustomRotationYaw = 0.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "KLS|Animation BP Data", meta=(EditCondition = "false"));
	FKLSAnimCurveNames AnimationCurveNames;
	

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	void SetupLandingState();

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupLandingAnimation(const FSequencePlayerReference& SequencePlayer);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference UpdateLandingState(const FSequencePlayerReference& SequencePlayer);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	void UpdateLandAdditiveWeight(const FAnimUpdateContext UpdateContext);
	
	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	float GetCustomRotationWeight();
};
