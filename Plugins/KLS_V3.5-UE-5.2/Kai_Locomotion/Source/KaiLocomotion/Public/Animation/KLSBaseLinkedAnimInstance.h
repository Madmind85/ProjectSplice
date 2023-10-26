// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SequenceEvaluatorLibrary.h"
#include "SequencePlayerLibrary.h"
#include "Animation/AnimInstance.h"

#include "Data/KLSDataAssets.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KLSBaseLinkedAnimInstance.generated.h"

/**
 * 
 */

class UKLSBaseAnimInstance;
UCLASS()
class KAILOCOMOTION_API UKLSBaseLinkedAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="KLS|MotionSet")
	TObjectPtr<UKLSLocomotionData> MotionSet;

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Anim Nodes Data")
	FAnimNodesBonesData AnimNodesBonesData;

	UPROPERTY(BlueprintReadOnly, Category="KLS|StatesData")
	FKLSGroundedAnimationSet StandingAnimsData;
	

	UPROPERTY(BlueprintReadOnly, Category="KLS|StatesData")
	FKLSGroundedAnimationSet CrouchingAnimsData;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	FKLSJumpSet CurrentJumpSet;

	
	UPROPERTY(BlueprintReadOnly, Category="KLS|StatesData",meta=(HideInDetailPanel))
	FVector2D AnimPlayRateClamp = FVector2D{0.75f,1.25};


	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	float GetCurrentInterpSpeed(const UKLSBaseAnimInstance* BaseAnimInstance) const;
	
	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	FKLSAnimData SelectStartAnimation( EKLSCardinalDirection CardinalDirection,const float Direction, const bool IsStrafing,const bool IsCrouching,  EKLSSpeedGait SpeedGait) const;

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	FKLSLoopAnim SelectStandingWalkAnimation( EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const;
	
	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	FKLSLoopAnim SelectStandingRunAnimation( EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const;

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	FKLSLoopAnim SelectStandingSprintAnimation( EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const;
	
	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	FKLSAnimData SelectStopAnimation( EKLSCardinalDirection CardinalDirection,  EKLSSpeedGait SpeedGait, const bool bIsLeftFootUp,const bool Crouch) const;

	UFUNCTION(BlueprintCallable, Category = "KLS|Character Data Updates", meta = (BlueprintThreadSafe))
	void UpdateLinkedLayersValues(UKLSBaseAnimInstance* BaseAnimInstance);

//--States Setup And Updates Triggered from animation node like Sequence Evaluators/players---//

#pragma region // Standing States
	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void SetStandingState(EKLSGroundAnimState StandingState,UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void SetupStandingIdleState(UKLSBaseAnimInstance* BaseAnimInstance);
	
	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupStandingTipState(const FSequencePlayerReference& SequencePlayer,  UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference UpdateStandingTipState(const FAnimUpdateContext& UpdateContext,const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupStandingTipRecoveryState(const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance);
	
	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupStandingStartState(const FSequenceEvaluatorReference& SequenceEvaluator,  UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateStandingStartState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupStandingStopState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void SetupStopState(UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateStandingStopState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,  UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupStandingPrePivotState(const FSequenceEvaluatorReference& SequenceEvaluator,  UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateStandingPrePivotState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,  UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupStandingPostPivotState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateStandingPostPivotState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UCharacterMovementComponent* MovementComponent,UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void SetupLoopState(UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void UpdateLoopState(const FAnimUpdateContext& UpdateContext, UCharacterMovementComponent* MovementComponent,UKLSBaseAnimInstance* BaseAnimInstance);

#pragma endregion 

#pragma region // Crouching States
	

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	void SetupCrouchingIdleState(UKLSBaseAnimInstance* BaseAnimInstance);
	
	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupCrouchingTipState(const FSequencePlayerReference& SequencePlayer,  UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference UpdateCrouchingTipState(const FAnimUpdateContext& UpdateContext,const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|Standing States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupCrouchingTipRecoveryState(const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance);
	
	UFUNCTION(BlueprintCallable, Category = "KLS|Crouching States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupCrouchingStopState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|Crouching States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateCrouchingStopState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,  UCharacterMovementComponent* MovementComponent);



#pragma endregion
	
#pragma region //In Air States

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	void SetupInAirState(UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* CharacterMovement);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	void UpdateInAirState(const FAnimUpdateContext& UpdateContext,UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupJumpingState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateJumpingState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupLandingPredictionState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateLandingPredictionState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference SetupJumpApexState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequenceEvaluatorReference UpdateJumpApexState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance);

	UFUNCTION(BlueprintCallable, Category = "KLS|In Air States Updates", meta = (BlueprintThreadSafe))
	FSequencePlayerReference SetupFallLoopState(const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance);

	

#pragma endregion

private:

	bool bTurnIPStandingRotation;
};










