//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KLSAnimationData.h"
#include "KLSCustomJumps.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"
#include "KLSDataAssets.generated.h"



class UAnimSequence;
class UBlendSpace1D;

///Base Locomotion data Asset

UCLASS(BlueprintType)
class KAILOCOMOTION_API UKLSLocomotionData : public UDataAsset
{
	GENERATED_BODY()


public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FKLSDataSettings Settings;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Standing")
	FKLSStandingAnimations StandingAnimations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Jump")
	FKLSLocomotionJump JumpAnimations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouch")
    FKLSCrouchAnimSet CrouchAnimSet;
    
	//Helper Functions
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	 FVector2D GetPlayRateClamp(const bool Crouching);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	EKLSSpeedGait GetSpeedGaitFromSpeed(const float Speed);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	 EKLSSpeedGait GetSpeedGaitFromAlpha(const float SpeedAlpha);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	 float GetGaitAlphaFromSpeed(const float Speed);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
    FKLSAnimData GetRotatingAnim(const float Direction,const FKLSRotatingAnimSet& AnimSet);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData GetStrafingAnim(const EKLSCardinalDirection CardinalDirection , const FKLSDefaultAnimSet& AnimSet);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSPivotAnimSet GetRotatingPivotSet(const float Direction,const FKLSRotatingPivotAnimSet& AnimSet, const bool bIsLeftFootUp);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSPivotAnimSet GetStrafingPivotSet(const EKLSCardinalDirection CardinalDirection , const FKLSDefaultPivotAnimSet& AnimSet);

	//Animations Selectors
	

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectStartAnimation(const EKLSCardinalDirection& CardinalDirection,const float Direction,const bool IsStrafing, const EKLSSpeedGait& SpeedGait);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectCrouchStartAnimation(const EKLSCardinalDirection& CardinalDirection,const float Direction,const bool IsStrafing);
	
	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectStopAnimation(const EKLSCardinalDirection& CardinalDirection, const EKLSSpeedGait& SpeedGait, const bool bIsLeftFootUp);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectCrouchStopAnimation(const EKLSCardinalDirection& CardinalDirection,const bool bIsLeftFootUp);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSPivotAnimSet SelectPivotSet(const EKLSCardinalDirection& VelocityCardinalDirection,const EKLSCardinalDirection& InputCardinalDirection,const float Direction, const bool IsStrafing, const EKLSSpeedGait& SpeedGait, const bool bIsLeftFootUp, bool& SoftPivot);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSPivotAnimSet SelectCrouchPivotSet(const EKLSCardinalDirection& VelocityCardinalDirection,const EKLSCardinalDirection& InputCardinalDirection,const float Direction, const bool IsStrafing,const bool bIsLeftFootUp, bool& SoftPivot);
	

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectTurnInPlaceAnimation(const float TurnDirection);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSAnimData SelectCrouchTurnInPlaceAnimation(const float TurnDirection);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSJumpSet SelectJumpSet(const FKLSJumpSelectorInfo& JumpSelectInfo, FGameplayTag& JumpTag);

	UFUNCTION(BlueprintCallable,Category="KLS|AnimationSelection")
	FKLSInterpolationSpeeds GetInterpolationSpeeds() const;


#if WITH_EDITOR
	//UObject Override. Called when data asset is being saved and is used to extract and save the curves for each animation that requires one in the data asset
	virtual void PreSave(FObjectPreSaveContext ObjectSaveContext) override;
#endif
	
};


UCLASS(BlueprintType)
class KAILOCOMOTION_API UKLSMaskingData : public UDataAsset
{
	GENERATED_BODY()


public:

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Stand | Idle")
	FKLSMaskAnimation IdleMask;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Stand | Aim")
	FKLSMaskAnimation AimMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Stand | Aim")
	float AimBlendInTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Stand | Aim")
	float AimBlendOutTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Stand | Moving | Walk")
	FKLSGaitMask WalkMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Stand | Moving | Run ")
	FKLSGaitMask RunMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Stand | Moving | Sprint")
	FKLSGaitMask SprintMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Crouch | Idle")
	FKLSMaskAnimation CrouchIdleMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Crouch | Aim")
	FKLSMaskAnimation CrouchAimMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Crouch | Aim")
	float CrouchAimBlendInTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Crouch | Aim")
	float CrouchAimBlendOutTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Crouch | Moving ")
	FKLSGaitMask CrouchMovingMask;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="In Air")
	FKLSMaskAnimation JumpingMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="In Air")
	FKLSMaskAnimation FallingMask;

#if WITH_EDITOR
	virtual void PreSave(FObjectPreSaveContext ObjectSaveContext) override;
#endif
};


