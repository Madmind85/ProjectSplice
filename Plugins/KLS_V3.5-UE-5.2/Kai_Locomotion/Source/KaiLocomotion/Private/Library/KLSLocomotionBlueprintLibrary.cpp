// Fill out your copyright notice in the Description page of Project Settings.


#include "Library/KLSLocomotionBlueprintLibrary.h"



#include "KismetAnimationLibrary.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "AnimNodes/AnimNode_SequenceEvaluator.h"
#include "Character/KLSCharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/Controller.h"
#include "Animation/AnimSequence.h"
#include "Animation/KLSMaskAnimInstance.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"



DEFINE_LOG_CATEGORY_STATIC(LogKaiLocomotionLibrary, Verbose, All);

void UKLSLocomotionBlueprintLibrary::UpdateCharacterData(const float DeltaTime,
	const UCharacterMovementComponent* MovementComponent, UAnimInstance* LinkedLayer,UAnimInstance* MaskLinkedLayer, const float TurnInPlaceWeight,
	const int32 RotationDirection, const bool IsPivoting, const bool bIsAiming ,const float MinLandingDistance, const FRotator ControlRotation
	, const float StrafeAlpha , FKLSCharacterData& CharacterData)
{
	if(!MovementComponent || !MovementComponent->GetCharacterOwner())
	{
		return;
	}
	const bool Strafing = MovementComponent->bUseControllerDesiredRotation ||  MovementComponent->GetCharacterOwner()->bUseControllerRotationYaw;
	//Location Data Update
	
	CharacterData.Movement.FrameDisplacement = (MovementComponent->GetActorLocation() - CharacterData.Movement.Location).Size2D();
	CharacterData.Movement.DisplacementSpeed2D = UKismetMathLibrary::SafeDivide(CharacterData.Movement.FrameDisplacement,DeltaTime) ;
	CharacterData.Movement.Location = MovementComponent->GetActorLocation();
	
	if(CharacterData.FirstUpdate)
	{
		CharacterData.Movement.FrameDisplacement = 0.0f;
		CharacterData.Movement.DisplacementSpeed2D = 0.0f;
	}

	//Rotation Data Update
	const FRotator ActorRot = MovementComponent->UpdatedComponent->GetComponentRotation();
	const float ControlYawChange = FRotator::NormalizeAxis(ControlRotation.Yaw) - CharacterData.Rotations.ControlRotation.Yaw;
	CharacterData.Rotations.ControlRotationSpeed =FRotator::NormalizeAxis(ControlYawChange);// UKismetMathLibrary::SafeDivide(ControlYawChange,DeltaTime);
	CharacterData.Rotations.ControlRotation = ControlRotation.GetNormalized();
	CharacterData.Rotations.AimOffsetRotation = (CharacterData.Rotations.ControlRotation - ActorRot).GetNormalized();
	CharacterData.Rotations.FrameYawDelta = FRotator::NormalizeAxis(ActorRot.Yaw - CharacterData.Rotations.ActorRotation.Yaw);
	CharacterData.Rotations.YawDeltaSpeed = UKismetMathLibrary::SafeDivide(CharacterData.Rotations.FrameYawDelta,DeltaTime);
	CharacterData.Rotations.ActorRotation.Yaw = ActorRot.Yaw;
	FRotator DeltaRot = MovementComponent->GetDeltaRotation(DeltaTime);
	CharacterData.Rotations.DesiredRotation = Strafing ? CharacterData.Rotations.ControlRotation : MovementComponent->ComputeOrientToMovementRotation(CharacterData.Rotations.ActorRotation,DeltaTime,DeltaRot);
	CharacterData.Rotations.RotationOffset = FRotator::NormalizeAxis(CharacterData.Rotations.DesiredRotation.Yaw - CharacterData.Rotations.ActorRotation.Yaw);
	CharacterData.Rotations.RotationDirection = RotationDirection;
	if(CharacterData.FirstUpdate)
	{
		CharacterData.Rotations.FrameYawDelta = 0.0f;
		CharacterData.Rotations.YawDeltaSpeed = 0.0f;
		CharacterData.Rotations.RotationOffset = 0.0f;
	}

	CharacterData.State.bIsAiming = bIsAiming;
	
	//Velocity Data update
	
	CharacterData.State.bWasMoving = CharacterData.State.bIsMoving;
	CharacterData.Movement.Velocity = MovementComponent->Velocity;
	CharacterData.Movement.Velocity2D = CharacterData.Movement.Velocity * FVector{1.0,1.0,0.0};
	CharacterData.Movement.Speed2D = CharacterData.Movement.Velocity2D.Length();
	CharacterData.Movement.MaxSpeed2D = MovementComponent->GetMaxSpeed();
	CharacterData.Movement.LocalVelocity2D =CharacterData.Rotations.ActorRotation.UnrotateVector(CharacterData.Movement.Velocity2D);
	CharacterData.State.bIsMoving = CharacterData.Movement.Velocity2D.SizeSquared2D() > KINDA_SMALL_NUMBER && !MovementComponent->HasRootMotionSources();
	if(CharacterData.State.bIsMoving)
	{
		CharacterData.Rotations.LocalVelocityDirection = UKismetAnimationLibrary::CalculateDirection(CharacterData.Movement.Velocity2D.GetSafeNormal(),CharacterData.Rotations.ActorRotation);
		CharacterData.Rotations.VelocityCardinalDirection = SelectCardinalDirectionFromAngle(CharacterData.Rotations.LocalVelocityDirection,10.f,CharacterData.Rotations.VelocityCardinalDirection,CharacterData.State.bWasMoving);
		const float RightWarpingAngle = FRotator::NormalizeAxis(CharacterData.Rotations.LocalVelocityDirection - 90);
		const float LeftWarpingAngle = FRotator::NormalizeAxis(CharacterData.Rotations.LocalVelocityDirection + 90);
		const float BwdWarpingAngle = FRotator::NormalizeAxis(CharacterData.Rotations.LocalVelocityDirection + 180);

		float TargetWarpingAngle = 0.0f;
		switch (CharacterData.Rotations.VelocityCardinalDirection)
		{
		case EKLSCardinalDirection::EFwd :
			{
				TargetWarpingAngle = CharacterData.Rotations.LocalVelocityDirection;
				break;
			}
		case EKLSCardinalDirection::ERight :
			{
				TargetWarpingAngle = RightWarpingAngle;
				break;
			}
		case EKLSCardinalDirection::ELeft :
			{
				TargetWarpingAngle = LeftWarpingAngle;
				break;
			}
		case EKLSCardinalDirection::EBwd :
			{
				TargetWarpingAngle = BwdWarpingAngle;
				break;
			}
		}

		CharacterData.Rotations.OrientationWarpingAngle = FMath::FInterpTo(CharacterData.Rotations.OrientationWarpingAngle,TargetWarpingAngle,DeltaTime,10);

	}
	

	//Acceleration Data Update
	
	CharacterData.State.bWasAccelerating = CharacterData.State.bIsAccelerating;
	CharacterData.Movement.Acceleration = MovementComponent->GetCurrentAcceleration();
	CharacterData.State.bIsAccelerating =  CharacterData.Movement.Acceleration.SizeSquared2D() > KINDA_SMALL_NUMBER && !MovementComponent->HasRootMotionSources();
	if(CharacterData.State.bIsAccelerating && CharacterData.State.bIsMoving)
	{
		CharacterData.Movement.LocalPivotAcceleration = CharacterData.Movement.LocalAcceleration2D;
	}
	CharacterData.Movement.LocalAcceleration2D = CharacterData.Rotations.ActorRotation.UnrotateVector(CharacterData.Movement.Acceleration * FVector{1.0,1.0,0.0});
	
	if(CharacterData.State.bIsAccelerating)
	{
		CharacterData.Rotations.LocalAccelerationDirection =UKismetAnimationLibrary::CalculateDirection(CharacterData.Movement.Acceleration.GetSafeNormal(),CharacterData.Rotations.ActorRotation); ;
		CharacterData.Rotations.InputCardinalDirection = SelectCardinalDirectionFromAngle(CharacterData.Rotations.LocalAccelerationDirection,10.f,CharacterData.Rotations.InputCardinalDirection,false);
		CharacterData.Movement.EffectiveSpeedScaler = MovementComponent->GetAnalogInputModifier() * MovementComponent->GetMaxSpeed() ;
		
	}
	CharacterData.State.bWasCrouching = CharacterData.State.bIsCrouching;
	CharacterData.State.bIsCrouching = MovementComponent->IsCrouching();
	CharacterData.State.bChangedRotationMode = false;
	if(CharacterData.Rotations.bIsStrafing != Strafing)
	{
		CharacterData.State.bChangedRotationMode = true;
	}
	if(CharacterData.FirstUpdate == false && CharacterData.LastLinkedLayer.Get())
	{
		CharacterData.State.bChangedLinkedLayer = CharacterData.LastLinkedLayer.Get() != LinkedLayer;
	}

	if(CharacterData.FirstUpdate == false)
	{
		const UKLSMaskAnimInstance* MaskAnimBP = Cast<UKLSMaskAnimInstance>(MaskLinkedLayer);
		if(MaskAnimBP && MaskAnimBP->MaskingSet && MaskAnimBP->MaskingSet.Get()->AimMask.Animation)
		{
			CharacterData.UseMaskAim = true;
		}
		else
		{
			CharacterData.UseMaskAim = false;
		}
	}
	const bool CrouchStateChanged = CharacterData.State.bWasCrouching != CharacterData.State.bIsCrouching;
	CharacterData.State.bWasIsPivoting = CharacterData.State.bIsPivoting;
	if((CharacterData.State.bChangedRotationMode || CrouchStateChanged || CharacterData.State.bChangedLinkedLayer) && !CharacterData.FirstUpdate )
	{
		CharacterData.State.bIsPivoting = false;
		CharacterData.State.bCanPivot = false;
	}
	
	// Pivot Data
	
	if(IsPivoting && CharacterData.State.bCanPivot )
	{
		CharacterData.State.bIsPivoting = true;
	
	}
	else if(CharacterData.Movement.LocalVelocity2D.GetSafeNormal().Dot(CharacterData.Movement.LocalAcceleration2D.GetSafeNormal()) >= 0 && CharacterData.State.bIsMoving)
	{
		CharacterData.State.bIsPivoting = false;
		CharacterData.State.bCanPivot = true;
	}

	//Update Rotate In Place Data
	if(Strafing)
	{
		const float AbsOffset = FMath::Abs(CharacterData.Rotations.AimOffsetRotation.Yaw);

		if(TurnInPlaceWeight == 0)
		{
			CharacterData.State.bTurnInPlace = false;
			if(AbsOffset >= 60 || StrafeAlpha > 0)
			{
				CharacterData.State.bTurnInPlace = true;
			}
		}
		
	}
	else
	{
		CharacterData.State.bTurnInPlace = false;
	}

	if(CharacterData.State.bIsAccelerating)
	{
		CharacterData.State.bTurnInPlace = false;
	}
	//Grounded States data
	
	CharacterData.Rotations.bIsStrafing = Strafing;
	
	//In Air State Data
	
	const bool WasJumping = CharacterData.State.bIsJumping;
	CharacterData.State.bIsJumping = false;
	CharacterData.State.bIsFalling = false;
	if(MovementComponent->IsFalling())
	{
		if(CharacterData.Movement.Velocity.Z > 1)
		{
			CharacterData.State.bIsJumping = true;
			if(CharacterData.State.bIsGrounded)
			{
				CharacterData.Movement.TotalJumpTime = FMath::Abs(CharacterData.Movement.Velocity.Z / MovementComponent->GetGravityZ());
				CharacterData.Movement.CurrentJumpTime = CharacterData.Movement.TotalJumpTime;
				
			}
			CharacterData.Movement.CurrentJumpTime = FMath::Max(CharacterData.Movement.CurrentJumpTime - DeltaTime,0);
			CharacterData.Movement.JumpAlpha = FMath::GetMappedRangeValueClamped(FVector2f{CharacterData.Movement.TotalJumpTime,0},FVector2f{0,1},CharacterData.Movement.CurrentJumpTime);
			
		}
		else 
		{
			CharacterData.State.bIsFalling = true;
			FindLandLocation(MovementComponent->GetCharacterOwner(),CharacterData.Movement.LandingLocation);
			const float LandingDistance = CharacterData.Movement.Location.Z - CharacterData.Movement.LandingLocation.Z ;
			CharacterData.State.bCanLand = LandingDistance <= CharacterData.Movement.MinLandingDistance && CharacterData.Movement.Velocity.Z < -1;
			if(CharacterData.State.bCanLand)
			{
				CharacterData.Movement.LandPredictAlpha = FMath::GetMappedRangeValueClamped(FVector2f{CharacterData.Movement.MinLandingDistance,2.5},FVector2f{0,1},LandingDistance);
				
			}

			if(CharacterData.Movement.Velocity.Z < 0)
			{
				CharacterData.Movement.FallZSpeed = CharacterData.Movement.Velocity.Z;
			}
			
		}
	}
	else
	{
		CharacterData.Movement.MinLandingDistance = MinLandingDistance;
		CharacterData.State.bCanLand = false;
	}
	CharacterData.State.bHasLanded = false;
	if(!CharacterData.State.bIsGrounded && MovementComponent->IsMovingOnGround())
	{
		CharacterData.State.bHasLanded = true;
	}
	CharacterData.State.bIsGrounded = MovementComponent->IsMovingOnGround();
	
	
	if(CharacterData.Movement.LastZVelocity <  CharacterData.Movement.Velocity.Z)
	{
		CharacterData.State.bIsGrounded = true;
	}
	CharacterData.Movement.LastZVelocity = CharacterData.Movement.Velocity.Z;
	CharacterData.LastLinkedLayer = LinkedLayer;
	CharacterData.FirstUpdate = false;
}

void UKLSLocomotionBlueprintLibrary::UpdateCustomRotation(const float DeltaTime, const float CustomRotationWeight,const float InterpSpeed,const bool IsStrafing,const UCharacterMovementComponent* MovementComponent, FKLSCustomRotationData& RotationData)
{
	if(!MovementComponent || !MovementComponent->GetCharacterOwner() || !MovementComponent->GetCharacterOwner()->GetController()) 
	{
		return;
	}
	const bool HasWeight = CustomRotationWeight > RotationData.CustomRotationCurveWeight || CustomRotationWeight >= 0.99;
	const bool HasNoRootMotion = MovementComponent->HasRootMotionSources() == false;
	
	RotationData.ControlRotation = MovementComponent->GetCharacterOwner()->GetController()->GetDesiredRotation();
	if(MovementComponent->GetCurrentAcceleration().SizeSquared() > KINDA_SMALL_NUMBER)
	{
		RotationData.AccelRotation = MovementComponent->GetCurrentAcceleration().GetSafeNormal2D().Rotation();
	}
	
	RotationData.UseCustomRotation = HasWeight && HasNoRootMotion;
	
	if(RotationData.UseCustomRotation)
	{
		
		if(IsStrafing)
		{
			
			RotationData.StrafeHoldRotationWeight = FMath::Clamp(RotationData.StrafeHoldRotationWeight + DeltaTime * 4,0,1);
			
			switch (RotationData.CustomRotationType)
			{
			case EKLSCustomRotationType::EHold:
				{
					RotationData.TotalRotationOffset = FRotator::NormalizeAxis(MovementComponent->GetCharacterOwner()->GetActorRotation().Yaw - RotationData.ControlRotation.Yaw );
					RotationData.ClampedRotationOffset = FMath::ClampAngle(RotationData.TotalRotationOffset,-90,90);
					const float OffsetDifference = FRotator::NormalizeAxis(RotationData.TotalRotationOffset - RotationData.ClampedRotationOffset) * (1 - RotationData.StrafeHoldRotationWeight);
					const float TotalYawOffset = FRotator::NormalizeAxis(RotationData.ClampedRotationOffset + OffsetDifference);
					RotationData.StrafeInterpRotationWeight = 0.0f;
					RotationData.CustomRotationYaw = FRotator::NormalizeAxis(RotationData.ControlRotation.Yaw + TotalYawOffset);
					RotationData.StrafeRotationAlpha = 0;
					break;
				}
			case EKLSCustomRotationType::EInterpolate:
				{
					RotationData.StrafeInterpRotationWeight = FMath::Clamp(RotationData.StrafeInterpRotationWeight + DeltaTime * 4,0,1);
					const float OffsetDifference = FRotator::NormalizeAxis(RotationData.TotalRotationOffset - RotationData.ClampedRotationOffset) * (1 - RotationData.StrafeHoldRotationWeight);
					float TotalYawOffset = FRotator::NormalizeAxis(RotationData.TotalRotationOffset - OffsetDifference) ;
					TotalYawOffset *= 1 - RotationData.StrafeInterpRotationWeight;
					RotationData.CustomRotationYaw = FRotator::NormalizeAxis(RotationData.ControlRotation.Yaw + TotalYawOffset);
					RotationData.StrafeRotationAlpha = 0;
					break;
				}
			case EKLSCustomRotationType::EAnimRot:
				{
					//Anim States That Set This To Hold Will Directly Take care of Changing the Desired Rotation,
					//We don't do anything here.
					break;
				}
			}

			
		}
		else
		{
			if(RotationData.CustomRotationType != EKLSCustomRotationType::EAnimRot)
			{
				RotationData.TotalRotationOffset = FRotator::NormalizeAxis(MovementComponent->GetCharacterOwner()->GetActorRotation().Yaw - RotationData.ControlRotation.Yaw );
				RotationData.ClampedRotationOffset = FMath::ClampAngle(RotationData.TotalRotationOffset,-90,90);
				RotationData.StrafeHoldRotationWeight = 0;
				RotationData.StrafeRotationAlpha = 0;
				RotationData.StrafeInterpRotationWeight = 0.0f;
			}
			
			switch (RotationData.CustomRotationType)
			{
			case EKLSCustomRotationType::EHold:
				{
					RotationData.CustomRotationYaw = MovementComponent->GetCharacterOwner()->GetActorRotation().Yaw;
					break;
				}
			case EKLSCustomRotationType::EInterpolate:
				{
					//Don't Interpolate Rotation If We Are No Longer Accelerating.
					if(MovementComponent->GetCurrentAcceleration().SizeSquared() > KINDA_SMALL_NUMBER)
					{
						const FRotator CurrentRotation = MovementComponent->GetCharacterOwner()->GetActorRotation();
						const FRotator DesiredRotation = FMath::RInterpTo(CurrentRotation,RotationData.AccelRotation,DeltaTime,InterpSpeed);
						RotationData.CustomRotationYaw = DesiredRotation.Yaw;
					}
					
				}
			case EKLSCustomRotationType::EAnimRot:
				{
					//Anim States That Set This To Hold Will Directly Take care of Changing the Desired Rotation,
					//We don't do anything here.
					break;
				}
			}
		}
	}
	//Don't Use Custom Rotation So Take The Actor's Rotation And Save it As the custom rotation
	// the CMC is not using this at this point either , we save it so it's correct when we want to use it.
	else
	{
		RotationData.CustomRotationYaw = MovementComponent->GetCharacterOwner()->GetActorRotation().Yaw;
		RotationData.StrafeHoldRotationWeight = 0;
	}
	

	RotationData.CustomRotationYaw = FRotator3f::ClampAxis(RotationData.CustomRotationYaw);
	RotationData.CustomRotationCurveWeight = CustomRotationWeight;
}


EKLSCardinalDirection UKLSLocomotionBlueprintLibrary::SelectCardinalDirectionFromAngle(const float Angle,const float DeadZone, const EKLSCardinalDirection CurrentDirection, const bool bUseCurrentDirection)
{
	const float AbsAngle = FMath::Abs(Angle);
	float FwdDeadZone = DeadZone;
	float BwdDeadZone = DeadZone;

	switch ( CurrentDirection)
	{
	case EKLSCardinalDirection::EFwd: {FwdDeadZone = DeadZone * 2; break;}
	case EKLSCardinalDirection::EBwd: {BwdDeadZone = DeadZone * 2; break;}
	case EKLSCardinalDirection::ELeft: {break;}
	case EKLSCardinalDirection::ERight: {break;}
	}

	if(AbsAngle <= (45 + FwdDeadZone))
	{
		return EKLSCardinalDirection::EFwd;
	}
	if(AbsAngle >= (135 - BwdDeadZone))
	{
		return EKLSCardinalDirection::EBwd;
	}
	if(Angle > 0)
	{
		return EKLSCardinalDirection::ERight;
	}
	return EKLSCardinalDirection::ELeft;
}

EKLSCardinalDirection UKLSLocomotionBlueprintLibrary::GetOppositeCardinalDirectional(const EKLSCardinalDirection CurrentDirection)
{
	switch (CurrentDirection)
	{
	case EKLSCardinalDirection::EFwd:{return EKLSCardinalDirection::EBwd;}
	case EKLSCardinalDirection::EBwd:{return EKLSCardinalDirection::EFwd;}
	case EKLSCardinalDirection::ERight:{return EKLSCardinalDirection::ELeft;}
	case EKLSCardinalDirection::ELeft:{return EKLSCardinalDirection::ERight;}
	}
	return EKLSCardinalDirection::EFwd;
}

//Taken From Anim Distance Matching Library With Some Modifications.
 float UKLSLocomotionBlueprintLibrary::GetTimeAfterDistanceTraveled(float CurrentTime, float DistanceTraveled, const FKLSAnimData& AnimData, const bool bAllowLooping)
	{
		float NewTime = CurrentTime;
		if (AnimData.Animation != nullptr)
		{
			// Avoid infinite loops if the animation doesn't cover any distance.
			float MaxDistance;
			float MinDistance;
			AnimData.GetDistanceCurveMinMaxValues(MinDistance,MaxDistance);
			if (!FMath::IsNearlyZero((MaxDistance - MinDistance)))
			{
				float AccumulatedDistance = 0.f;

				const float SequenceLength = AnimData.Animation->GetPlayLength();
				const float StepTime = 1.f / 30.f;

				// Distance Matching expects the distance curve on the animation to increase monotonically. If the curve fails to increase in value
				// after a certain number of iterations, we abandon the algorithm to avoid an infinite loop.

				// Traverse the distance curve, accumulating animated distance until the desired distance is reached.
				while ((AccumulatedDistance < DistanceTraveled) && (bAllowLooping || (NewTime + StepTime < SequenceLength)))
				{
					const float CurrentDistance = AnimData.GetDistCurveValue(NewTime);
					const float DistanceAfterStep =  AnimData.GetDistCurveValue(NewTime + StepTime);
					const float AnimationDistanceThisStep = DistanceAfterStep - CurrentDistance;

					if (!FMath::IsNearlyZero(AnimationDistanceThisStep))
					{
						// Keep advancing if the desired distance hasn't been reached.
						if (AccumulatedDistance + AnimationDistanceThisStep < DistanceTraveled)
						{
							FAnimationRuntime::AdvanceTime(bAllowLooping, StepTime, NewTime, SequenceLength);
							AccumulatedDistance += AnimationDistanceThisStep;
						}
						// Once the desired distance is passed, find the approximate time between samples where the distance will be reached.
						else
						{
							const float DistanceAlpha = (DistanceTraveled - AccumulatedDistance) / AnimationDistanceThisStep;
							FAnimationRuntime::AdvanceTime(bAllowLooping, DistanceAlpha * StepTime, NewTime, SequenceLength);
							break;
						}
						
					}
					else
					{
						FAnimationRuntime::AdvanceTime(bAllowLooping, StepTime, NewTime, SequenceLength);
						break;
						
					}
				}
			}
			else
			{
				UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Anim sequence (%s) is missing a distance curve or doesn't cover enough distance for GetTimeAfterDistanceTraveled."), *GetNameSafe(AnimData.Animation));
			}
		}
		else
		{
			UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Invalid AnimSequence passed to GetTimeAfterDistanceTraveled"));
		}

		return NewTime;
	}

FSequenceEvaluatorReference UKLSLocomotionBlueprintLibrary::AdvanceTimeByDistanceMatching(float& DesiredPlayRate,const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator,const float DistanceTraveled, const FKLSAnimData& AnimData,const FVector2D PlayRateClamp)
{
	SequenceEvaluator.CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(
		TEXT("AdvanceTimeByDistanceMatching"),
		[&DesiredPlayRate,UpdateContext, DistanceTraveled, AnimData, PlayRateClamp](FAnimNode_SequenceEvaluator& InSequenceEvaluator)
		{
			if (const FAnimationUpdateContext* AnimationUpdateContext = UpdateContext.GetContext())
			{
				const float DeltaTime = AnimationUpdateContext->GetDeltaTime(); 

				if (DeltaTime > 0 && DistanceTraveled > 0)
				{
					
					
					const float CurrentTime = InSequenceEvaluator.GetExplicitTime();
					const float CurrentAssetLength = InSequenceEvaluator.GetCurrentAssetLength();
					const bool bAllowLooping = InSequenceEvaluator.GetShouldLoop();
					float TimeAfterDistanceTraveled = GetTimeAfterDistanceTraveled(CurrentTime, DistanceTraveled, AnimData, bAllowLooping);

					// Calculate the effective playrate that would result from advancing the animation by the distance traveled.
					// // Account for the animation looping.
					if (TimeAfterDistanceTraveled < CurrentTime)
					{
						TimeAfterDistanceTraveled += CurrentAssetLength;
					}
					float EffectivePlayRate = (TimeAfterDistanceTraveled - CurrentTime) / DeltaTime;

					DesiredPlayRate = EffectivePlayRate;
					// Clamp the effective play rate.
					if (PlayRateClamp.X >= 0.0f && PlayRateClamp.X < PlayRateClamp.Y)
					{
						EffectivePlayRate = FMath::Clamp(EffectivePlayRate, PlayRateClamp.X, PlayRateClamp.Y);
					}

					// Advance animation time by the effective play rate.
					float NewTime = CurrentTime;
					FAnimationRuntime::AdvanceTime(false, EffectivePlayRate * DeltaTime, NewTime, CurrentAssetLength);

					if (!InSequenceEvaluator.SetExplicitTime(NewTime))
					{
						UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Could not set explicit time on sequence evaluator, value is not dynamic. Set it as Always Dynamic."));
					}
					
					
				}
			}
			else
			{
				UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("AdvanceTimeByDistanceMatching called with invalid context"));
			}
		});

	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSLocomotionBlueprintLibrary::DistanceMatchToTarget(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, const float DistanceToTarget, const FKLSAnimData& AnimData,const bool ShouldDistanceMatchStop,const float StopDistanceThreshHold, const float AnimEndTime)
{
	SequenceEvaluator.CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(
		TEXT("DistanceMatchToTarget"),
		[UpdateContext,SequenceEvaluator,DistanceToTarget, AnimData,ShouldDistanceMatchStop,StopDistanceThreshHold,AnimEndTime](FAnimNode_SequenceEvaluator& InSequenceEvaluator)
		{
			if (InSequenceEvaluator.GetSequence())
			{
				if( AnimData.GetDistCurveValue(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator)) > StopDistanceThreshHold && !ShouldDistanceMatchStop)
				{
					// By convention, distance curves store the distance to a target as a negative value.
					const float NewTime = AnimData.GetTimeAtDistance(-DistanceToTarget);
					
					if (!InSequenceEvaluator.SetExplicitTime(NewTime))
					{
						UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Could not set explicit time on sequence evaluator, value is not dynamic. Set it as Always Dynamic."));
					}
				}
				else 
				{
					
					USequenceEvaluatorLibrary::AdvanceTime(UpdateContext,SequenceEvaluator,1.0f);
					if( AnimEndTime > 0 )
					{
						const float DesiredTime = FMath::Clamp(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator),0,AnimEndTime);
						USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,DesiredTime);
					}
				}
				
				
			}
			else
			{
				UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Sequence evaluator does not have an anim sequence to play."));
			}
			
		});

	return SequenceEvaluator;
}

FSequencePlayerReference UKLSLocomotionBlueprintLibrary::SetPlayRateToMatchSpeed(const FSequencePlayerReference& SequencePlayer, const float SpeedToMatch, const FVector2D PlayRateClamp)
{
	SequencePlayer.CallAnimNodeFunction<FAnimNode_SequencePlayer>(
		TEXT("SetPlayrateToMatchSpeed"),
		[SpeedToMatch, PlayRateClamp](FAnimNode_SequencePlayer& InSequencePlayer)
		{
			if (const UAnimSequence* AnimSequence = Cast<UAnimSequence>(InSequencePlayer.GetSequence()))
			{
				const float AnimLength = InSequencePlayer.GetSequence()->GetPlayLength();
				if (!FMath::IsNearlyZero(AnimLength))
				{
					// Calculate the speed as: (distance traveled by the animation) / (length of the animation)
					const FVector RootMotionTranslation = AnimSequence->ExtractRootMotionFromRange(0.0f, AnimLength).GetTranslation();
					const float RootMotionDistance = RootMotionTranslation.Size2D();
					if (!FMath::IsNearlyZero(RootMotionDistance))
					{
						const float AnimationSpeed = RootMotionDistance / AnimLength;
						float DesiredPlayRate = SpeedToMatch / AnimationSpeed;
						if (PlayRateClamp.X >= 0.0f && PlayRateClamp.X < PlayRateClamp.Y)
						{
							DesiredPlayRate = FMath::Clamp(DesiredPlayRate, PlayRateClamp.X, PlayRateClamp.Y);
						}

						if (!InSequencePlayer.SetPlayRate(DesiredPlayRate))
						{
							UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Could not set play rate on sequence player, value is not dynamic. Set it as Always Dynamic."));
						}
					}
					else
					{
						UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Unable to adjust playrate for animation with no root motion delta (%s)."), *GetNameSafe(InSequencePlayer.GetSequence()));
					}
				}
				else
				{
					UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Unable to adjust playrate for zero length animation (%s)."), *GetNameSafe(InSequencePlayer.GetSequence()));
				}
			}
			else
			{
				UE_LOG(LogKaiLocomotionLibrary, Warning, TEXT("Sequence player does not have an anim sequence to play."));
			}
		});

	return SequencePlayer;
}

FVector UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(UCharacterMovementComponent* MovementComponent)
{
	if(!MovementComponent || MovementComponent->Velocity.Size2D() <= KINDA_SMALL_NUMBER)
	{
		return FVector::ZeroVector;
	}
	FVector PredictedStopLocation = FVector::ZeroVector;
	
	float ActualBrakingFriction = (MovementComponent->bUseSeparateBrakingFriction ? MovementComponent->BrakingFriction : MovementComponent->GroundFriction);
	const float FrictionFactor = FMath::Max(0.f, MovementComponent->BrakingFrictionFactor);
	ActualBrakingFriction = FMath::Max(0.f, ActualBrakingFriction * FrictionFactor);
	const float BrakingDeceleration = FMath::Max(0.f, MovementComponent->BrakingDecelerationWalking);

	const FVector WorldVelocity2D =MovementComponent->Velocity * FVector(1.f, 1.f, 0.f);
	FVector WorldVelocityDir2D;
	float Speed2D;
	WorldVelocity2D.ToDirectionAndLength(WorldVelocityDir2D, Speed2D);

	const float Divisor = ActualBrakingFriction * Speed2D + BrakingDeceleration;
	if (Divisor > 0.f)
	{
			
		const float TimeToStop = Speed2D / Divisor;
		PredictedStopLocation = WorldVelocity2D * TimeToStop + 0.5f * ((-ActualBrakingFriction) * WorldVelocity2D - BrakingDeceleration * WorldVelocityDir2D) * TimeToStop * TimeToStop;
	}
	//if(PredictedStopLocation.Size2D()<= KINDA_SMALL_NUMBER)
	//{
		//return PredictedStopLocation;
	//}
	FHitResult HitResult;
	const FVector StartLoc = MovementComponent->GetActorLocation();
	const FVector EndLoc = StartLoc + PredictedStopLocation ;
	const ETraceTypeQuery TraceType = UEngineTypes::ConvertToTraceType(ECC_WorldStatic);
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(MovementComponent->GetOwner());
	
	UKismetSystemLibrary::CapsuleTraceSingle(MovementComponent,StartLoc,EndLoc,MovementComponent->GetCharacterOwner()->GetCapsuleComponent()->GetScaledCapsuleRadius(),MovementComponent->GetCharacterOwner()->GetCapsuleComponent()->GetScaledCapsuleHalfHeight() - MovementComponent->MaxStepHeight,TraceType,false,ActorsToIgnore,EDrawDebugTrace::None,HitResult,true,FColor::Red,FColor::Green);
	if(HitResult.IsValidBlockingHit())
	{
		if(HitResult.bBlockingHit && !MovementComponent->IsWalkable(HitResult) )
		{
			return HitResult.Location * FVector{1.0,1.0,0.0} - StartLoc * FVector{1.0,1.0,0.0};
			
		}
		return PredictedStopLocation;
		
	}
	return PredictedStopLocation;
}

FVector UKLSLocomotionBlueprintLibrary::PredictGroundMovementPivotLocation(UCharacterMovementComponent* MovementComponent)
{
	if(!MovementComponent || MovementComponent->Velocity.Size2D() <= KINDA_SMALL_NUMBER)
	{
		return FVector::ZeroVector;
	}
	FVector PredictedPivotLocation = FVector::ZeroVector;
		
const FVector Acceleration = MovementComponent->GetCurrentAcceleration();
	const FVector Velocity = MovementComponent->Velocity;
	const FVector WorldAcceleration2D =  Acceleration * FVector(1.f, 1.f, 0.f);
	const FVector Velocity2D = Velocity * FVector(1.f, 1.f, 0.f);
	FVector WorldAccelerationDir2D;
	float WorldAccelerationSize2D;
	WorldAcceleration2D.ToDirectionAndLength(WorldAccelerationDir2D, WorldAccelerationSize2D);
	const float VelocityAlongAcceleration = (Velocity2D | WorldAccelerationDir2D);
	if (VelocityAlongAcceleration < 0.0f)
	{
		const float SpeedAlongAcceleration = -VelocityAlongAcceleration;
		const float Divisor = WorldAccelerationSize2D + 2.f * SpeedAlongAcceleration * MovementComponent->GroundFriction;
		const float TimeToDirectionChange = SpeedAlongAcceleration / Divisor;

		const FVector AccelerationForce = Acceleration - (Velocity - WorldAccelerationDir2D * Velocity2D.Size()) * MovementComponent->GroundFriction;
		PredictedPivotLocation = Velocity * TimeToDirectionChange + 0.5f * AccelerationForce * TimeToDirectionChange * TimeToDirectionChange;
	}
	if(PredictedPivotLocation.Size2D() <= KINDA_SMALL_NUMBER)
	{
		return PredictedPivotLocation;
	}
	FHitResult HitResult;
	const FVector StartLoc = MovementComponent->GetActorLocation();
	const FVector EndLoc = StartLoc + PredictedPivotLocation;
	const ETraceTypeQuery TraceType = UEngineTypes::ConvertToTraceType(ECC_WorldStatic);
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(MovementComponent->GetCharacterOwner());
	UKismetSystemLibrary::CapsuleTraceSingle(MovementComponent->GetCharacterOwner(),StartLoc,EndLoc,MovementComponent->GetCharacterOwner()->GetCapsuleComponent()->GetScaledCapsuleRadius(),MovementComponent->GetCharacterOwner()->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),TraceType,false,ActorsToIgnore,EDrawDebugTrace::None,HitResult,true,FColor::Red,FColor::Green);
	if(HitResult.bBlockingHit)
	{
		return HitResult.Location - StartLoc;
	}
	return PredictedPivotLocation;
}

float UKLSLocomotionBlueprintLibrary::RotationMatching(const float DeltaTime ,const float InterpSpeed,const float AnimRotAlpha,const FKLSCharacterData& CharacterData, FKLSAnimationInfo& AnimInfo,  FKLSCustomRotationData& RotationData)
{
	const float AnimDesiredRotation = FRotator::NormalizeAxis( (AnimInfo.TargetAngle * AnimRotAlpha));
	const float CurrentAccelDir = CharacterData.Movement.Acceleration.GetSafeNormal2D().Rotation().Yaw;
	AnimInfo.CurrentAccelDir = FRotator::NormalizeAxis(FMath::RInterpTo(FRotator{0.0f,AnimInfo.CurrentAccelDir,0.0f},FRotator{0.0f,CurrentAccelDir,0.0f},DeltaTime,InterpSpeed).Yaw);
	const float AccelChange = FRotator::NormalizeAxis(AnimInfo.CurrentAccelDir - AnimInfo.EntryAccelDir);
	const float DesiredRotChange = FRotator::NormalizeAxis(AnimDesiredRotation + (AccelChange * AnimRotAlpha));
	const float DeltaRot = DesiredRotChange - AnimInfo.DesiredYaw;
	RotationData.CustomRotationYaw = FRotator::NormalizeAxis(AnimInfo.EntryRotYaw + DesiredRotChange);
	AnimInfo.DesiredYaw = DesiredRotChange;
	AnimInfo.AnimHasRotationLeft = AnimRotAlpha >= 0.99f;
	return AnimDesiredRotation;
	
}


void UKLSLocomotionBlueprintLibrary::FindLandLocation(ACharacter* CharacterOwner, FVector& LandLocation)
{
	if(!CharacterOwner)
	{
		return;
	}
	UCharacterMovementComponent* CharCmc = CharacterOwner->GetCharacterMovement();
	FPredictProjectilePathResult TraceResult;
	FPredictProjectilePathParams PredictParams;
	PredictParams.LaunchVelocity = CharCmc->Velocity;
	PredictParams.ProjectileRadius = CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius();
	const float CapsuleHalfHeight =  CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
	PredictParams.StartLocation = CharacterOwner->GetCapsuleComponent()->GetComponentTransform().GetLocation();
	PredictParams.OverrideGravityZ = CharCmc->GetGravityZ();
	PredictParams.bTraceWithChannel = true;
	const EObjectTypeQuery ObjectType = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
	PredictParams.ObjectTypes.Add(ObjectType);
	PredictParams.ActorsToIgnore.Add(CharacterOwner);
	PredictParams.DrawDebugType = EDrawDebugTrace::None;
	PredictParams.bTraceWithCollision = true;
	PredictProjectilePathCapsule(CharacterOwner,PredictParams,TraceResult,PredictParams.ProjectileRadius,CapsuleHalfHeight);
	if(TraceResult.HitResult.bBlockingHit && CharCmc->IsWalkable(TraceResult.HitResult))
	{
	
        		LandLocation = TraceResult.HitResult.Location;
	}
	else
	{
        	FHitResult HitResult;
        	const FVector StartLoc = TraceResult.HitResult.bBlockingHit? TraceResult.HitResult.Location +(TraceResult.HitResult.Normal*3.0) : TraceResult.LastTraceDestination.Location;
        	const FVector EndLoc = StartLoc  - FVector{0.0,0.0,5000};
        	FCollisionQueryParams Params;
        	Params.AddIgnoredActor(CharacterOwner);
        	TArray<AActor*> ActorsToIgnore;
        	ActorsToIgnore.Add(CharacterOwner);
        	const ETraceTypeQuery TraceType = UEngineTypes::ConvertToTraceType(ECC_WorldStatic);
        	UKismetSystemLibrary::CapsuleTraceSingle(CharacterOwner,StartLoc,EndLoc,CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius(),CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),TraceType,false,ActorsToIgnore,EDrawDebugTrace::None,HitResult,true,FColor::Red,FColor::Green);
        	if(HitResult.bBlockingHit)
        	{
        			LandLocation = HitResult.Location;
        	}
        	else
        	{
        			LandLocation = HitResult.TraceEnd;
        	}
		
	}
}

bool UKLSLocomotionBlueprintLibrary::PredictProjectilePathCapsule(const UObject* WorldContextObject,const FPredictProjectilePathParams& PredictParams, FPredictProjectilePathResult& PredictResult,const float CapsuleRadius, const float CapsuleHalfHeight)
{
	PredictResult.Reset();
	bool bBlockingHit = false;
	
	
	if (WorldContextObject->GetWorld() && PredictParams.SimFrequency > KINDA_SMALL_NUMBER)
	{
		const float SubstepDeltaTime = 1.f / PredictParams.SimFrequency;
		const float GravityZ = FMath::IsNearlyEqual(PredictParams.OverrideGravityZ, 0.0f) ? WorldContextObject->GetWorld()->GetGravityZ() : PredictParams.OverrideGravityZ;

		FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(PredictProjectilePath), PredictParams.bTraceComplex);
		FCollisionObjectQueryParams ObjQueryParams;
		const bool bTraceWithObjectType = (PredictParams.ObjectTypes.Num() > 0);
		const bool bTracePath = PredictParams.bTraceWithCollision && (PredictParams.bTraceWithChannel || bTraceWithObjectType);
		if (bTracePath)
		{
			QueryParams.AddIgnoredActors(PredictParams.ActorsToIgnore);
			if (bTraceWithObjectType)
			{
				for (auto Iter = PredictParams.ObjectTypes.CreateConstIterator(); Iter; ++Iter)
				{
					const ECollisionChannel& Channel = UCollisionProfile::Get()->ConvertToCollisionChannel(false, *Iter);
					ObjQueryParams.AddObjectTypesToQuery(Channel);
				}
			}
		}

		FVector CurrentVel = PredictParams.LaunchVelocity;
		FVector TraceStart = PredictParams.StartLocation;
		FVector TraceEnd = TraceStart;
		float CurrentTime = 0.f;
		PredictResult.PathData.Reserve(FMath::Min(128, FMath::CeilToInt(PredictParams.MaxSimTime * PredictParams.SimFrequency)));
		PredictResult.AddPoint(TraceStart, CurrentVel, CurrentTime);

		FHitResult ObjectTraceHit(NoInit);
		FHitResult ChannelTraceHit(NoInit);
		ObjectTraceHit.Time = 1.f;
		ChannelTraceHit.Time = 1.f;

		const float MaxSimTime = PredictParams.MaxSimTime;
		while (CurrentTime < MaxSimTime)
		{
			// Limit step to not go further than total time.
			const float PreviousTime = CurrentTime;
			const float ActualStepDeltaTime = FMath::Min(MaxSimTime - CurrentTime, SubstepDeltaTime);
			CurrentTime += ActualStepDeltaTime;

			// Integrate (Velocity Verlet method)
			TraceStart = TraceEnd;
			FVector OldVelocity = CurrentVel;
			CurrentVel = OldVelocity + FVector(0.f, 0.f, GravityZ * ActualStepDeltaTime);
			TraceEnd = TraceStart + (OldVelocity + CurrentVel) * (0.5f * ActualStepDeltaTime);
			PredictResult.LastTraceDestination.Set(TraceEnd, CurrentVel, CurrentTime);

			if (bTracePath)
			{
				bool bObjectHit = false;
				bool bChannelHit = false;
				if (bTraceWithObjectType)
				{
					bObjectHit = WorldContextObject->GetWorld()->SweepSingleByObjectType(ObjectTraceHit, TraceStart, TraceEnd, FQuat::Identity, ObjQueryParams, FCollisionShape::MakeCapsule(CapsuleRadius,CapsuleHalfHeight), QueryParams);
				}
				if (PredictParams.bTraceWithChannel)
				{
					bChannelHit = WorldContextObject->GetWorld()->SweepSingleByChannel(ChannelTraceHit, TraceStart, TraceEnd, FQuat::Identity, PredictParams.TraceChannel, FCollisionShape::MakeCapsule(CapsuleRadius,CapsuleHalfHeight), QueryParams);
				}

				// See if there were any hits.
				if (bObjectHit || bChannelHit)
				{
					// Hit! We are done. Choose trace with earliest hit time.
					PredictResult.HitResult = (ObjectTraceHit.Time < ChannelTraceHit.Time) ? ObjectTraceHit : ChannelTraceHit;
					const float HitTimeDelta = ActualStepDeltaTime * PredictResult.HitResult.Time;
					const float TotalTimeAtHit = PreviousTime + HitTimeDelta;
					const FVector VelocityAtHit = OldVelocity + FVector(0.f, 0.f, GravityZ * HitTimeDelta);
					PredictResult.AddPoint(PredictResult.HitResult.Location, VelocityAtHit, TotalTimeAtHit);
					bBlockingHit = true;
					break;
				}
			}

			PredictResult.AddPoint(TraceEnd, CurrentVel, CurrentTime);
		}
	}

	return bBlockingHit;
}

void UKLSLocomotionBlueprintLibrary::PredictJumpPathDistance(UCharacterMovementComponent* MovementComponent,FVector& ApexLocation, FVector& LandLocation, FVector& JumpStartLoc, bool& bObstacleHit)
{
		if(!MovementComponent)
		{
			return;
		}

		ACharacter* CharacterOwner  = MovementComponent->GetCharacterOwner();
		JumpStartLoc = MovementComponent->GetCharacterOwner()->GetActorLocation();
		FPredictProjectilePathResult PathTraceResult;
		FPredictProjectilePathParams PredictParams;
		PredictParams.LaunchVelocity = MovementComponent->Velocity;
		PredictParams.ProjectileRadius = CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius();
		const float CapsuleHalfHeight =  CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
		PredictParams.StartLocation = CharacterOwner->GetActorLocation();
		PredictParams.OverrideGravityZ = MovementComponent->GetGravityZ();
		PredictParams.bTraceWithChannel = true;
		PredictParams.MaxSimTime = 3.0;
		const EObjectTypeQuery ObjectType = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
		PredictParams.ObjectTypes.Add(ObjectType);
		PredictParams.ActorsToIgnore.Add(CharacterOwner);
		PredictProjectilePathCapsule(CharacterOwner,PredictParams,PathTraceResult,PredictParams.ProjectileRadius,CapsuleHalfHeight);
		LandLocation = PathTraceResult.LastTraceDestination.Location;
		if(PathTraceResult.HitResult.IsValidBlockingHit())
		{
			if (!MovementComponent->IsWalkable(PathTraceResult.HitResult))
			{
				FHitResult HitResult;
				const FVector StartLoc = PathTraceResult.HitResult.Location;
				const FVector EndLoc = StartLoc - FVector{0.0,0.0,5000};
				const ETraceTypeQuery TraceType = UEngineTypes::ConvertToTraceType(ECC_WorldStatic);
				TArray<AActor*> ActorsToIgnore;
				ActorsToIgnore.Add(CharacterOwner);
				UKismetSystemLibrary::CapsuleTraceSingle(CharacterOwner,StartLoc,EndLoc,CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleRadius(),CharacterOwner->GetCapsuleComponent()->GetScaledCapsuleHalfHeight(),TraceType,false,ActorsToIgnore,EDrawDebugTrace::None,HitResult,true,FColor::Red,FColor::Green);
				if(HitResult.IsValidBlockingHit())
				{
					LandLocation = HitResult.Location;
				}
				else
				{
					LandLocation = HitResult.TraceEnd;
				}
			}
			else
			{
				LandLocation = PathTraceResult.HitResult.Location;
			}
			bObstacleHit = PathTraceResult.HitResult.Location.Z > (JumpStartLoc.Z + 20);
		}
		else
		{
			bObstacleHit = false;
		}
		const int32 JumpPathNums = PathTraceResult.PathData.Num();
		if(JumpPathNums >= 3)
		{
			for (int i = 0; i < JumpPathNums-2 ; ++i)
		        {
        			if(PathTraceResult.PathData[i].Location.Z < PathTraceResult.PathData[i+1].Location.Z && (PathTraceResult.PathData[i+1].Location.Z >= PathTraceResult.PathData[i+2].Location.Z || i+1 == JumpPathNums) )
        			{
        				ApexLocation = PathTraceResult.PathData[i+1].Location;
        				return;
        			}
		        }
		}
		else
		{
			ApexLocation = CharacterOwner->GetActorLocation();;
		}
}

void UKLSLocomotionBlueprintLibrary::TryLinkAnimLayer(USkeletalMeshComponent* Mesh,TSubclassOf<UAnimInstance> InClass, bool UnlinkGroupIfInvalid, FName GroupName)
{
	if(InClass->IsValidLowLevelFast() == false)
	{
		if(UnlinkGroupIfInvalid)
		{
			
			if(const UAnimInstance* LinkedAnimInstance = Mesh->GetLinkedAnimLayerInstanceByGroup(GroupName))
			{
				Mesh->UnlinkAnimClassLayers(LinkedAnimInstance->GetClass());
			}
		}
		return;
	}
	{
		Mesh->LinkAnimClassLayers(InClass);
	}
}


FName UKLSLocomotionBlueprintLibrary::GetMaskingGroupName()
{
	return  "Standing Mask";
}

