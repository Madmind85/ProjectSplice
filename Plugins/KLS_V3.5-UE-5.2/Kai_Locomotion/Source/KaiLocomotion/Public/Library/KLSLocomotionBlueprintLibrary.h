// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SequenceEvaluatorLibrary.h"
#include "SequencePlayerLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Data/KLSAnimationData.h"
#include "Data/KLSDataAssets.h"
#include "GameFramework/Character.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "KLSLocomotionBlueprintLibrary.generated.h"


/**
 * 
 */
UCLASS()
class KAILOCOMOTION_API UKLSLocomotionBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static void UpdateCharacterData(const float DeltaTime,const UCharacterMovementComponent* MovementComponent, UAnimInstance* LinkedLayer,UAnimInstance* MaskLinkedLayer,const float TurnInPlaceWeight,const int32 RotationDirection, const bool IsPivoting,const bool bIsAiming ,const float MinLandingDistance,const FRotator ControlRotation,const float StrafeAlpha , UPARAM(ref) FKLSCharacterData& CharacterData);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static void UpdateCustomRotation(const float DeltaTime, const float CustomRotationWeight,const float InterpSpeed,const bool IsStrafing,const UCharacterMovementComponent* MovementComponent, UPARAM(ref) FKLSCustomRotationData& RotationData);
	
	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static EKLSCardinalDirection SelectCardinalDirectionFromAngle(const float Angle,const float DeadZone, const EKLSCardinalDirection CurrentDirection,const bool bUseCurrentDirection);

	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static EKLSCardinalDirection GetOppositeCardinalDirectional(const EKLSCardinalDirection CurrentDirection);


	//Functions Taken From Epic's Libraries With Some Modifications
	UFUNCTION()
	static float GetTimeAfterDistanceTraveled(float CurrentTime, float DistanceTraveled, const FKLSAnimData& AnimData, const bool bAllowLooping);

	UFUNCTION(BlueprintCallable, Category = "KLS|Function Library", meta=(BlueprintThreadSafe))
	static FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(float& DesiredPlayRate,const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator,const float DistanceTraveled,  const FKLSAnimData& AnimData,const FVector2D PlayRateClamp = FVector2D(0.75f, 1.25f));

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static FSequenceEvaluatorReference DistanceMatchToTarget(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator,const float DistanceToTarget, const FKLSAnimData& AnimData, const bool ShouldDistanceMatch,const float StopDistanceThreshHold, const float AnimEndTime);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static FSequencePlayerReference SetPlayRateToMatchSpeed(const FSequencePlayerReference& SequencePlayer, const float SpeedToMatch, const FVector2D PlayRateClamp = FVector2D(0.75f, 1.25f));

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static FVector PredictGroundMovementStopLocation(UCharacterMovementComponent* MovementComponent);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static FVector PredictGroundMovementPivotLocation(UCharacterMovementComponent* MovementComponent);
	
	//End Of Functions Taken From Epic Libraries

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library",meta=(BlueprintThreadSafe))
	static float RotationMatching(const float DeltaTime ,const float InterpSpeed,const float AnimRotAlpha,const FKLSCharacterData& CharacterData, UPARAM(ref) FKLSAnimationInfo& AnimInfo, UPARAM(ref) FKLSCustomRotationData& RotationData);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static void FindLandLocation(ACharacter* CharacterOwner, FVector& LandLocation);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static bool PredictProjectilePathCapsule(const UObject* WorldContextObject, const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult,const float CapsuleRadius,const float CapsuleHalfHeight);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static void PredictJumpPathDistance(UCharacterMovementComponent* MovementComponent,FVector& ApexLocation, FVector& LandLocation,FVector& JumpStartLoc,bool& bObstacleHit);

	UFUNCTION(BlueprintCallable,Category = "KLS|Function Library")
	static void TryLinkAnimLayer( USkeletalMeshComponent* Mesh,TSubclassOf<UAnimInstance> InClass, bool UnlinkGroupIfInvalid, FName GroupName);
	

	UFUNCTION(BlueprintCallable,BlueprintPure,Category = "KLS|Function Library")
	static FName GetMaskingGroupName();
	
};