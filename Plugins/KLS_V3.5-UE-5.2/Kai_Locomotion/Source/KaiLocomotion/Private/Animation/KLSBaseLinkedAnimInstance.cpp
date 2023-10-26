// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/KLSBaseLinkedAnimInstance.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/KLSBaseAnimInstance.h"
#include "Library/KLSLocomotionBlueprintLibrary.h"



float UKLSBaseLinkedAnimInstance::GetCurrentInterpSpeed(const UKLSBaseAnimInstance* BaseAnimInstance) const
{
	if(!MotionSet || !BaseAnimInstance)
	{
		return 0.0f;
	}
	const FKLSInterpolationSpeeds InterpolationSpeeds = MotionSet->GetInterpolationSpeeds();
	if(BaseAnimInstance->CharacterData.State.bIsGrounded)
	{
		if(BaseAnimInstance->CharacterData.State.bIsCrouching)
		{
			return InterpolationSpeeds.CrouchInterpSpeed;
		}
		switch (BaseAnimInstance->CharacterData.Movement.SpeedGait)
		{
		case EKLSSpeedGait::EWalk : return InterpolationSpeeds.WalkInterpSpeed;
		case EKLSSpeedGait::ERun: return InterpolationSpeeds.RunInterpSpeed;
		case EKLSSpeedGait::ESprint: return InterpolationSpeeds.SprintInterpSpeed;
		}
	}
	return InterpolationSpeeds.InAirInterpSpeed;
}

FKLSAnimData UKLSBaseLinkedAnimInstance::SelectStartAnimation( EKLSCardinalDirection CardinalDirection, const float Direction, const bool IsStrafing,const bool IsCrouching, EKLSSpeedGait SpeedGait) const
{
	if(MotionSet)
	{
		if(IsCrouching)
		{
			return MotionSet->SelectCrouchStartAnimation(CardinalDirection,Direction,IsStrafing);
		}
		
		return MotionSet->SelectStartAnimation(CardinalDirection,Direction,IsStrafing,SpeedGait);
		
	}
	return FKLSAnimData{};
}

FKLSLoopAnim UKLSBaseLinkedAnimInstance::SelectStandingWalkAnimation(EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const
{
	if(MotionSet)
	{
		PlayRateClamp = MotionSet->GetPlayRateClamp(false);
		switch (CardinalDirection)
		{
		case EKLSCardinalDirection::EFwd: {return MotionSet->StandingAnimations.LoopAnimations.Walk.Forward.Fwd;}
		case EKLSCardinalDirection::EBwd: {return MotionSet->StandingAnimations.LoopAnimations.Walk.Backward;}
		case EKLSCardinalDirection::ERight: {return MotionSet->StandingAnimations.LoopAnimations.Walk.Right;}
		case EKLSCardinalDirection::ELeft: {return MotionSet->StandingAnimations.LoopAnimations.Walk.Left;}
		}
		
	}
	return FKLSLoopAnim{};
}

FKLSLoopAnim UKLSBaseLinkedAnimInstance::SelectStandingRunAnimation(EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const
{
	if(MotionSet)
	{
		PlayRateClamp = MotionSet->GetPlayRateClamp(false);
		switch (CardinalDirection)
		{
		case EKLSCardinalDirection::EFwd: {return MotionSet->StandingAnimations.LoopAnimations.Run.Forward.Fwd;}
		case EKLSCardinalDirection::EBwd: {return MotionSet->StandingAnimations.LoopAnimations.Run.Backward;}
		case EKLSCardinalDirection::ERight: {return MotionSet->StandingAnimations.LoopAnimations.Run.Right;}
		case EKLSCardinalDirection::ELeft: {return MotionSet->StandingAnimations.LoopAnimations.Run.Left;}
		}
		
	}
	return  FKLSLoopAnim{};
}

FKLSLoopAnim UKLSBaseLinkedAnimInstance::SelectStandingSprintAnimation(EKLSCardinalDirection CardinalDirection, FVector2D& PlayRateClamp) const
{
	if(MotionSet)
	{
		PlayRateClamp = MotionSet->GetPlayRateClamp(false);
		switch (CardinalDirection)
		{
		case EKLSCardinalDirection::EFwd: {return MotionSet->StandingAnimations.LoopAnimations.Sprint.Forward.Fwd;}
		case EKLSCardinalDirection::EBwd: {return MotionSet->StandingAnimations.LoopAnimations.Sprint.Backward;}
		case EKLSCardinalDirection::ERight: {return MotionSet->StandingAnimations.LoopAnimations.Sprint.Right;}
		case EKLSCardinalDirection::ELeft: {return MotionSet->StandingAnimations.LoopAnimations.Sprint.Left;}
		}
		
	}
	return  FKLSLoopAnim{};
}

FKLSAnimData UKLSBaseLinkedAnimInstance::SelectStopAnimation( EKLSCardinalDirection CardinalDirection, EKLSSpeedGait SpeedGait, const bool bIsLeftFootUp, const bool Crouch) const
{
	if(MotionSet )
	{
		if(Crouch)
		{
			return MotionSet->SelectCrouchStopAnimation(CardinalDirection,bIsLeftFootUp);
		}
		
		return MotionSet->SelectStopAnimation(CardinalDirection,SpeedGait,bIsLeftFootUp);
	}
	return FKLSAnimData{};
}

void UKLSBaseLinkedAnimInstance::UpdateLinkedLayersValues(UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!MotionSet || !BaseAnimInstance)
	{
		return;
	}
	BaseAnimInstance->CharacterData.Movement.SpeedGait = MotionSet->GetSpeedGaitFromSpeed(BaseAnimInstance->CharacterData.Movement.EffectiveSpeedScaler);
	BaseAnimInstance->RotationInterpSpeed = GetCurrentInterpSpeed(BaseAnimInstance);
	BaseAnimInstance->CrouchingBlendInTime = MotionSet->Settings.CrouchingSettings.CrouchBlendInTime;
	BaseAnimInstance->CrouchingBlendOutTime = MotionSet->Settings.CrouchingSettings.CrouchBlendOutTime;
	
}

#pragma region // Standing States
FSequencePlayerReference UKLSBaseLinkedAnimInstance::SetupStandingTipState(const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance)
	{
		BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle = BaseAnimInstance->CharacterData.Rotations.AimOffsetRotation.Yaw;
		const FKLSAnimData TIPAnim = MotionSet->SelectTurnInPlaceAnimation(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle);
		StandingAnimsData.TurnInPlaceAnim.AnimationData = TIPAnim;

		float StartTime = TIPAnim.GetTimeAtRotation(0.01);
		if(BaseAnimInstance->CustomRotationData.StrafeRotationAlpha != 0)
		{
			StartTime = TIPAnim.GetTimeAtRotation(BaseAnimInstance->CustomRotationData.StrafeRotationAlpha);
		}
		USequencePlayerLibrary::SetSequence(SequencePlayer,TIPAnim.Animation.Get());
		USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,StartTime);
		USequencePlayerLibrary::SetStartPosition(SequencePlayer,StartTime);
		USequencePlayerLibrary::SetPlayRate(SequencePlayer,MotionSet->StandingAnimations.IdleAndTurnInPlace.TurnInPlaceSpeed);
		BaseAnimInstance->CharacterData.State.bTurnInPlaceRecovery = false;
		BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EAnimRot;
		bTurnIPStandingRotation = true;
		
	}
	return SequencePlayer;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::UpdateStandingTipState(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance && bTurnIPStandingRotation && BaseAnimInstance->CustomRotationData.CustomRotationType == EKLSCustomRotationType::EAnimRot  )
	{
		const float CurrentTime = USequencePlayerLibrary::GetAccumulatedTime(SequencePlayer);
		const float AnimLength = USequencePlayerLibrary::GetSequencePure(SequencePlayer)->GetPlayLength();
		const float LastRotAlpha = StandingAnimsData.TurnInPlaceAnim.AnimationData.GetRotationCurveValue(AnimLength);
		float RotationAlpha = 0.0f;
		if(LastRotAlpha >= 0.9)
		{
			RotationAlpha = StandingAnimsData.TurnInPlaceAnim.AnimationData.GetRotationCurveValue(CurrentTime);
		}
		else
		{
			RotationAlpha = FMath::GetMappedRangeValueClamped(FVector2f{0.f,AnimLength - 0.2f},FVector2f{0.f,1.f},CurrentTime);
		}
		BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = RotationAlpha;
		const bool RotationDirChanged = FMath::Sign(BaseAnimInstance->CharacterData.Rotations.ControlRotationSpeed) != FMath::Sign(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle) &&  FMath::Sign(BaseAnimInstance->CharacterData.Rotations.ControlRotationSpeed) != 0;
		if(RotationAlpha >= 0.98 || RotationDirChanged )
		{
			BaseAnimInstance->CharacterData.State.bTurnInPlaceRecovery = true;
			BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = 0;
			BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		}
	}
	
	return SequencePlayer;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::SetupStandingTipRecoveryState(const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance)
	{
		const FKLSAnimData TIPAnimRecovery = MotionSet->SelectTurnInPlaceAnimation(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle);
		const float RecoveryStartTime = TIPAnimRecovery.GetTimeAtRotation(1);
		StandingAnimsData.TurnInPlaceRecoveryAnim.AnimationData = TIPAnimRecovery;
		USequencePlayerLibrary::SetSequence(SequencePlayer,TIPAnimRecovery.Animation.Get());
		USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,RecoveryStartTime);
		USequencePlayerLibrary::SetStartPosition(SequencePlayer,RecoveryStartTime);
		USequencePlayerLibrary::SetPlayRate(SequencePlayer,1.0f);
		BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		
	}
	return SequencePlayer;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupStandingStartState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance)
	{
		const EKLSSpeedGait SpeedGait = BaseAnimInstance->CharacterData.Movement.SpeedGait;
		float StartDir = BaseAnimInstance->CharacterData.Rotations.LocalAccelerationDirection;
		StartDir = FMath::Abs(StartDir) * BaseAnimInstance->CharacterData.Rotations.RotationDirection;
		const EKLSCardinalDirection StartCardinalDir = UKLSLocomotionBlueprintLibrary::SelectCardinalDirectionFromAngle(StartDir,10,EKLSCardinalDirection::EFwd,false);
		const FKLSAnimData StartAnim = SelectStartAnimation(StartCardinalDir,StartDir,BaseAnimInstance->CharacterData.Rotations.bIsStrafing,BaseAnimInstance->CharacterData.State.bIsCrouching,SpeedGait);
		StandingAnimsData.StartAnim.AnimationData = StartAnim;
		StandingAnimsData.StartAnim.EntrySpeedGait = SpeedGait;
		StandingAnimsData.StartAnim.EntryCardinalDirection = BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection;
		float RotStartTime = StandingAnimsData.StartAnim.AnimationData.GetTimeAtRotation(BaseAnimInstance->RotationAlpha);
		const float DistStartTime = StandingAnimsData.StartAnim.AnimationData.GetTimeAtDistance(1);
		RotStartTime = RotStartTime == 0 ? DistStartTime : RotStartTime;
		StandingAnimsData.StartAnim.AnimStartPosition = BaseAnimInstance->StandingAnimState == EKLSGroundAnimState::EStart ? RotStartTime : DistStartTime;
		BaseAnimInstance->BaseAnimBPData.StandingStartBlendToLoop = false;
		StandingAnimsData.StartAnim.FirstStepAlpha = FMath::GetMappedRangeValueClamped(FVector2f{0.1f,0.4f},FVector2f{0.0f,1.f},StandingAnimsData.StartAnim.AnimStartPosition);;
		StandingAnimsData.StartAnim.AnimTimeElapsed = 0.0f;
		StandingAnimsData.StartAnim.OrientationWarpingAlpha = StandingAnimsData.StartAnim.AnimationData.bIsRotatingAnim? 0.0f : StandingAnimsData.StartAnim.FirstStepAlpha;
		StandingAnimsData.StartAnim.StrideWarpingAlpha = StandingAnimsData.StartAnim.FirstStepAlpha;
		USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,StartAnim.Animation.Get());
		USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,StandingAnimsData.StartAnim.AnimStartPosition);
		//Rotation Matching
		StandingAnimsData.StartAnim.TargetAngle = StartDir;
		StandingAnimsData.StartAnim.CurrentAccelDir = BaseAnimInstance->CharacterData.Movement.Acceleration.GetSafeNormal2D().Rotation().Yaw;
		StandingAnimsData.StartAnim.EntryAccelDir =  StandingAnimsData.StartAnim.CurrentAccelDir;
		StandingAnimsData.StartAnim.DesiredYaw = 0.0f;
		StandingAnimsData.StartAnim.EntryRotYaw =  BaseAnimInstance->CharacterData.Rotations.ActorRotation.Yaw;
		BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		if(!BaseAnimInstance->CharacterData.Rotations.bIsStrafing)
		{
			if(StandingAnimsData.StartAnim.AnimationData.bIsRotatingAnim)
			{
				BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EAnimRot;
			}
			else if(StandingAnimsData.StartAnim.EntryCardinalDirection == EKLSCardinalDirection::EFwd)
			{
				BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EInterpolate;
			}
		}
		
		BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EStart;
	}

	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateStandingStartState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance || !USequenceEvaluatorLibrary::GetSequence(SequenceEvaluator))
	{
		return SequenceEvaluator;
	}
	BaseAnimInstance->BaseAnimBPData.StandingStartBlendToLoop = false;
	FVector2D PlayRateClamp = MotionSet->GetPlayRateClamp(false);
	const float AnimLength = USequenceEvaluatorLibrary::GetSequence(SequenceEvaluator)->GetPlayLength();
	StandingAnimsData.StartAnim.AnimTimeElapsed += UpdateContext.GetContext()->GetDeltaTime();
	StandingAnimsData.StartAnim.FirstStepAlpha = FMath::GetMappedRangeValueClamped(FVector2f{0.1f,0.4f},FVector2f{0.0f,1.f},(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator)));
	StandingAnimsData.StartAnim.StrideWarpingAlpha = StandingAnimsData.StartAnim.FirstStepAlpha;
	if(StandingAnimsData.StartAnim.AnimationData.GetDistCurveValue(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator)) < 2.0)
	{
		PlayRateClamp.Y = 2.0;
	}
	const FVector2D FinalPlayRateClamp = FMath::Lerp(FVector2D{0.5f,1.5f},PlayRateClamp,StandingAnimsData.StartAnim.FirstStepAlpha);
	float DesiredPlayRate;
	UKLSLocomotionBlueprintLibrary::AdvanceTimeByDistanceMatching(DesiredPlayRate,UpdateContext,SequenceEvaluator,BaseAnimInstance->CharacterData.Movement.FrameDisplacement,StandingAnimsData.StartAnim.AnimationData,FinalPlayRateClamp);
	const bool AnimTooFastOrTooSlow = DesiredPlayRate > PlayRateClamp.Y || DesiredPlayRate < PlayRateClamp.X;
	if(StandingAnimsData.StartAnim.AnimationData.bIsRotatingAnim && BaseAnimInstance->StandingAnimState == EKLSGroundAnimState::EStart )
	{
		const float RotAlpha = StandingAnimsData.StartAnim.AnimationData.GetRotationCurveValue(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator));
		const float LastRotAlpha = StandingAnimsData.StartAnim.AnimationData.GetRotationCurveValue(AnimLength);
		const float StartRotAlpha = StandingAnimsData.StartAnim.AnimationData.GetRotationCurveValue(StandingAnimsData.StartAnim.AnimStartPosition);
		const float MappedRot = FMath::GetMappedRangeValueClamped(FVector2f{StartRotAlpha,1.0},FVector2f{0.0f,1.0},RotAlpha);
		const float DeltaTime = UpdateContext.GetContext()->GetDeltaTime();
		const float InterpSpeed = BaseAnimInstance->RotationInterpSpeed;
		const float AnimDesiredRotation = UKLSLocomotionBlueprintLibrary::RotationMatching(DeltaTime,InterpSpeed,MappedRot,BaseAnimInstance->CharacterData,StandingAnimsData.StartAnim,BaseAnimInstance->CustomRotationData);
			
	}
	else
	{
		StandingAnimsData.StartAnim.OrientationWarpingAlpha = StandingAnimsData.StartAnim.FirstStepAlpha;
			
	}
	
	
	if(!StandingAnimsData.StartAnim.AnimationData.bIsRotatingAnim && StandingAnimsData.StartAnim.FirstStepAlpha >= 0.99 )
	{
		
		if(FMath::Abs(BaseAnimInstance->CharacterData.Rotations.RotationOffset) >= 50 || StandingAnimsData.StartAnim.EntryCardinalDirection !=  BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection )
		{
			BaseAnimInstance->BaseAnimBPData.StandingStartBlendToLoop = true;
			return SequenceEvaluator;
		}
	}
	
	if(StandingAnimsData.StartAnim.EntrySpeedGait != BaseAnimInstance->CharacterData.Movement.SpeedGait || AnimTooFastOrTooSlow)
	{
		const bool ReachedDesiredSpeed = FMath::IsNearlyEqual(BaseAnimInstance->CharacterData.Movement.EffectiveSpeedScaler,BaseAnimInstance->CharacterData.Movement.MaxSpeed2D,10.0f) || USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator) > 1.5;
		const bool CanBlendOut = StandingAnimsData.StartAnim.AnimationData.bIsRotatingAnim? StandingAnimsData.StartAnim.AnimHasRotationLeft: StandingAnimsData.StartAnim.FirstStepAlpha >= 0.99 && StandingAnimsData.StartAnim.AnimTimeElapsed >= 0.3 ;
		if(ReachedDesiredSpeed && CanBlendOut)
		{
			BaseAnimInstance->BaseAnimBPData.StandingStartBlendToLoop = true;
		}
	}
	if(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator) >= AnimLength - 0.2)
	{
		BaseAnimInstance->BaseAnimBPData.StandingStartBlendToLoop = true;
	}
	return SequenceEvaluator;
}

void UKLSBaseLinkedAnimInstance::SetupStopState(UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return;
	BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
	BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EStop;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupStandingStopState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance)
	{
		return SequenceEvaluator;
	}
	const bool IsLeftFootUp = BaseAnimInstance->GetCurveValue(BaseAnimInstance->AnimationCurveNames.LeftFootUpCurve) > 0 ;
	const FKLSAnimData StopAnim = SelectStopAnimation(BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection,BaseAnimInstance->CharacterData.Movement.SpeedGait,IsLeftFootUp,BaseAnimInstance->CharacterData.State.bIsCrouching);
	StandingAnimsData.StopAnim.AnimationData = StopAnim;
	USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,StopAnim.Animation.Get());
	BaseAnimInstance->BaseAnimBPData.StandingStopBlendToLoop = false;
	const float StopDistance = UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(MovementComponent).Length();
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,StopAnim.GetTimeAtDistance(-StopDistance));
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateStandingStopState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance || BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		return SequenceEvaluator;
	}

	const bool CanDistanceMatch = BaseAnimInstance->CharacterData.State.bIsMoving && !BaseAnimInstance->CharacterData.State.bIsAccelerating;
	const float StopDistance =  UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(MovementComponent).Length();
	UKLSLocomotionBlueprintLibrary::DistanceMatchToTarget(UpdateContext,SequenceEvaluator,StopDistance,StandingAnimsData.StopAnim.AnimationData,CanDistanceMatch,MotionSet->Settings.StandingSettings.StopDistanceThreshHold,0.0f);
	if (const UAnimSequenceBase* Sequence = USequenceEvaluatorLibrary::GetSequence(SequenceEvaluator))
	{
		const float AnimLength = Sequence->GetPlayLength();
		const float CurrentTime = USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator);
		if(CurrentTime >= AnimLength - 0.2)
		{
			BaseAnimInstance->BaseAnimBPData.StandingStopBlendToLoop = true;
		}
	}
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupStandingPrePivotState(const FSequenceEvaluatorReference& SequenceEvaluator,  UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	
	if(MotionSet && BaseAnimInstance && MovementComponent)
	{
		
		bool bIsSoftPivot;
		StandingAnimsData.Pre_PivotAnim.LeftFootUp = BaseAnimInstance->GetCurveValue(BaseAnimInstance->AnimationCurveNames.LeftFootUpCurve) > 0 ;
		const EKLSSpeedGait SpeedGait = BaseAnimInstance->CharacterData.Movement.SpeedGait;
		float PivotDir = BaseAnimInstance->CharacterData.Rotations.LocalAccelerationDirection;
		PivotDir = FMath::Abs(PivotDir) * BaseAnimInstance->CharacterData.Rotations.RotationDirection;
		BaseAnimInstance->BaseAnimBPData.StandingPivotTargetAngle = PivotDir;
		const EKLSCardinalDirection PivotInputCardinalDir = UKLSLocomotionBlueprintLibrary::SelectCardinalDirectionFromAngle(PivotDir,10,EKLSCardinalDirection::EFwd,false);
		const EKLSCardinalDirection PivotCardinalDir =  UKLSLocomotionBlueprintLibrary::GetOppositeCardinalDirectional(PivotInputCardinalDir);
		if(BaseAnimInstance->CharacterData.State.bIsCrouching)
		{
			StandingAnimsData.PivotSet = MotionSet->SelectCrouchPivotSet(PivotCardinalDir,PivotInputCardinalDir, PivotDir,BaseAnimInstance->CharacterData.Rotations.bIsStrafing,CrouchingAnimsData.Pre_PivotAnim.LeftFootUp,bIsSoftPivot);
		}
		else
		{
			StandingAnimsData.PivotSet = MotionSet->SelectPivotSet(PivotCardinalDir,PivotInputCardinalDir, PivotDir,BaseAnimInstance->CharacterData.Rotations.bIsStrafing,BaseAnimInstance->CharacterData.Movement.SpeedGait,StandingAnimsData.Pre_PivotAnim.LeftFootUp,bIsSoftPivot);
		}
		StandingAnimsData.PivotSet.bIsSoftPivot = bIsSoftPivot;
		BaseAnimInstance->BaseAnimBPData.CurrentStandingPivotSet = StandingAnimsData.PivotSet;
		
		const FKLSAnimData PrePivotAnim = StandingAnimsData.PivotSet.PrePivot;
		const float PivotDistance = UKLSLocomotionBlueprintLibrary::PredictGroundMovementPivotLocation(MovementComponent).Length();
		StandingAnimsData.Pre_PivotAnim.AnimationData = PrePivotAnim;
		StandingAnimsData.Pre_PivotAnim.EntrySpeedGait = SpeedGait;
		StandingAnimsData.Pre_PivotAnim.EntryCardinalDirection = PivotCardinalDir;
		StandingAnimsData.Pre_PivotAnim.AnimStartPosition = 0.0f;
		StandingAnimsData.Pre_PivotAnim.AnimTime = 0.0f;
		StandingAnimsData.Pre_PivotAnim.AnimEndPosition = bIsSoftPivot && IsValid(PrePivotAnim.Animation)
			? PrePivotAnim.Animation->GetPlayLength()
			: StandingAnimsData.PivotSet.PivotTime;
		StandingAnimsData.Pre_PivotAnim.FirstStepAlpha = 0.0f;
		StandingAnimsData.Pre_PivotAnim.OrientationWarpingAlpha = PrePivotAnim.bIsRotatingAnim? 0.0f : 1.0f;
		StandingAnimsData.Pre_PivotAnim.StrideWarpingAlpha = 0.0f;
		USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,PrePivotAnim.Animation.Get());
		USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,PrePivotAnim.GetTimeAtDistance(-PivotDistance));
		//Rotation Matching
		StandingAnimsData.Pre_PivotAnim.TargetAngle = PivotDir * PrePivotAnim.GetRotationCurveValue(StandingAnimsData.PivotSet.PivotTime);
		const float DirDiff = FRotator::NormalizeAxis(BaseAnimInstance->CharacterData.Rotations.LocalAccelerationDirection - PivotDir);
		StandingAnimsData.Pre_PivotAnim.CurrentAccelDir = BaseAnimInstance->CharacterData.Movement.Acceleration.GetSafeNormal2D().Rotation().Yaw;
		StandingAnimsData.Pre_PivotAnim.EntryAccelDir =  FRotator::NormalizeAxis(StandingAnimsData.Pre_PivotAnim.CurrentAccelDir - DirDiff);
		StandingAnimsData.Pre_PivotAnim.EntryRotYaw =  BaseAnimInstance->CharacterData.Rotations.ActorRotation.Yaw;
		StandingAnimsData.Pre_PivotAnim.DesiredYaw = 0.0f;
		if(StandingAnimsData.Pre_PivotAnim.AnimationData.bIsRotatingAnim)
		{
			BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EAnimRot;
		}
		else 
		{
			BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		}
		
		BaseAnimInstance->BaseAnimBPData.StandingPostPivotBlendToLoop = false;
		BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EPrePivot;
		
	}
	
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateStandingPrePivotState(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator,UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance || !BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		return SequenceEvaluator;
	}
	const bool CanDistanceMatch = BaseAnimInstance->CharacterData.State.bIsPivoting && BaseAnimInstance->CharacterData.State.bIsAccelerating;
	const float PivotDistance =  UKLSLocomotionBlueprintLibrary::PredictGroundMovementPivotLocation(MovementComponent).Length();
	UKLSLocomotionBlueprintLibrary::DistanceMatchToTarget(UpdateContext,SequenceEvaluator,PivotDistance,StandingAnimsData.Pre_PivotAnim.AnimationData,CanDistanceMatch,MotionSet->Settings.StandingSettings.StopDistanceThreshHold,StandingAnimsData.Pre_PivotAnim.AnimEndPosition);
	
	if(StandingAnimsData.Pre_PivotAnim.AnimationData.bIsRotatingAnim && BaseAnimInstance->StandingAnimState == EKLSGroundAnimState::EPrePivot)
	{
		
		const float CurrentTime = USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator);
		const float RotAlpha = StandingAnimsData.Pre_PivotAnim.AnimationData.GetRotationCurveValue(CurrentTime);
		const float EndRotAlpha = StandingAnimsData.Pre_PivotAnim.AnimationData.GetRotationCurveValue(StandingAnimsData.PivotSet.PivotTime);
		const float MappedRotAlpha = FMath::GetMappedRangeValueClamped(FVector2f{0.0f,EndRotAlpha},FVector2f{0.0f,1.0f},RotAlpha);
		const float DeltaTime = UpdateContext.GetContext()->GetDeltaTime();
		const float InterpSpeed = BaseAnimInstance->RotationInterpSpeed;
		const float AnimDesiredRotation = UKLSLocomotionBlueprintLibrary::RotationMatching(DeltaTime,InterpSpeed,MappedRotAlpha,BaseAnimInstance->CharacterData,StandingAnimsData.Pre_PivotAnim,BaseAnimInstance->CustomRotationData);;
		
		
	}
	
	
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupStandingPostPivotState(const FSequenceEvaluatorReference& SequenceEvaluator,UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance)
	{
		const float PostPivotDir = BaseAnimInstance->BaseAnimBPData.StandingPivotTargetAngle;
		StandingAnimsData.Post_PivotAnim.EntrySpeedGait = BaseAnimInstance->CharacterData.Movement.SpeedGait;
		const EKLSCardinalDirection PivotInputCardinalDir = UKLSLocomotionBlueprintLibrary::SelectCardinalDirectionFromAngle(PostPivotDir,10,EKLSCardinalDirection::EFwd,false);
		const FKLSPivotAnimSet PivotSet = BaseAnimInstance->BaseAnimBPData.CurrentStandingPivotSet;
		const FKLSAnimData PostPivotAnim = PivotSet.PostPivot;
		if(PivotSet.bIsSoftPivot)
		{
			
			StandingAnimsData.Post_PivotAnim.AnimStartPosition = 0.0f;
				
		}
		else
		{
			StandingAnimsData.Post_PivotAnim.AnimStartPosition =  PivotSet.PivotTime;
		}
		StandingAnimsData.Post_PivotAnim.EntryCardinalDirection = PivotInputCardinalDir;
		StandingAnimsData.Post_PivotAnim.AnimationData = PostPivotAnim;
		StandingAnimsData.Post_PivotAnim.AnimTime = StandingAnimsData.Post_PivotAnim.AnimStartPosition;
		StandingAnimsData.Post_PivotAnim.AnimTimeElapsed = 0.0f;
		StandingAnimsData.Post_PivotAnim.FirstStepAlpha = 0.0f;
		StandingAnimsData.Post_PivotAnim.OrientationWarpingAlpha = 0.0f;
		StandingAnimsData.Post_PivotAnim.StrideWarpingAlpha = 0.0f;
		BaseAnimInstance->BaseAnimBPData.StandingPostPivotBlendToLoop = false;
		USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,PostPivotAnim.Animation.Get());
		USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,StandingAnimsData.Post_PivotAnim.AnimStartPosition);
		//Rotation Matching
		StandingAnimsData.Post_PivotAnim.TargetAngle = PostPivotDir * (1 - PivotSet.PrePivot.GetRotationCurveValue(PivotSet.PivotTime));
		const float DirDiff = FRotator::NormalizeAxis(BaseAnimInstance->CharacterData.Rotations.LocalAccelerationDirection - StandingAnimsData.Post_PivotAnim.TargetAngle);
		StandingAnimsData.Post_PivotAnim.CurrentAccelDir = BaseAnimInstance->CharacterData.Movement.Acceleration.GetSafeNormal2D().Rotation().Yaw;
		StandingAnimsData.Post_PivotAnim.EntryAccelDir = FRotator::NormalizeAxis(StandingAnimsData.Post_PivotAnim.CurrentAccelDir - DirDiff);
		StandingAnimsData.Post_PivotAnim.DesiredYaw = 0.0f;
		StandingAnimsData.Post_PivotAnim.EntryRotYaw =  BaseAnimInstance->CharacterData.Rotations.ActorRotation.Yaw;
		if(BaseAnimInstance->CharacterData.Rotations.bIsStrafing)
		{
			BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		}
		else 
		{
			if(StandingAnimsData.Post_PivotAnim.AnimationData.bIsRotatingAnim)
			{
				BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EAnimRot;
			}
			else if(StandingAnimsData.Post_PivotAnim.EntryCardinalDirection == EKLSCardinalDirection::EFwd)
			{
				BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EInterpolate;
			}
		}
		
		BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EPostPivot;
	}

	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateStandingPostPivotState(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, UCharacterMovementComponent* MovementComponent, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!MotionSet || !MovementComponent || !StandingAnimsData.Post_PivotAnim.AnimationData.Animation || !BaseAnimInstance || !BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		return SequenceEvaluator;
	}
	FVector2D PlayRateClamp = MotionSet->GetPlayRateClamp(false);
	StandingAnimsData.Post_PivotAnim.AnimTimeElapsed += UpdateContext.GetContext()->GetDeltaTime();
	StandingAnimsData.Post_PivotAnim.FirstStepAlpha = FMath::GetMappedRangeValueClamped(FVector2f{0.1f,0.4f},FVector2f{0.0f,1.f},(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator)));
	StandingAnimsData.Post_PivotAnim.StrideWarpingAlpha = StandingAnimsData.StartAnim.FirstStepAlpha;
	if(StandingAnimsData.Post_PivotAnim.AnimationData.GetDistCurveValue(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator)) < 2.0)
	{
		PlayRateClamp.Y = 2.0;
	}
	float DesiredPlayRate;
	UKLSLocomotionBlueprintLibrary::AdvanceTimeByDistanceMatching(DesiredPlayRate,UpdateContext,SequenceEvaluator,BaseAnimInstance->CharacterData.Movement.FrameDisplacement,StandingAnimsData.Post_PivotAnim.AnimationData,PlayRateClamp);
	const bool AnimTooFastOrTooSlow = DesiredPlayRate > PlayRateClamp.Y || DesiredPlayRate < PlayRateClamp.X;
	if(BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		if(StandingAnimsData.Post_PivotAnim.AnimationData.bIsRotatingAnim && BaseAnimInstance->StandingAnimState == EKLSGroundAnimState::EPostPivot) 
		{
			{
				const float RotAlpha = StandingAnimsData.Post_PivotAnim.AnimationData.GetRotationCurveValue(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator));
				const float StartRotAlpha = StandingAnimsData.Post_PivotAnim.AnimationData.GetRotationCurveValue(StandingAnimsData.Post_PivotAnim.AnimStartPosition);
				const float MappedRotAlpha = FMath::GetMappedRangeValueClamped(FVector2f{StartRotAlpha,1.0f},FVector2f{0.0f,1.0f},RotAlpha);
			
				const float DeltaTime = UpdateContext.GetContext()->GetDeltaTime();
				const float InterpSpeed = BaseAnimInstance->RotationInterpSpeed;
				const float AnimDesiredRotation =UKLSLocomotionBlueprintLibrary::RotationMatching(DeltaTime,InterpSpeed,MappedRotAlpha,BaseAnimInstance->CharacterData,StandingAnimsData.Post_PivotAnim,BaseAnimInstance->CustomRotationData);
			}
		}
		else
		{
			StandingAnimsData.Post_PivotAnim.OrientationWarpingAlpha = StandingAnimsData.Post_PivotAnim.FirstStepAlpha;
		}
	}
	

	if(!StandingAnimsData.Post_PivotAnim.AnimationData.bIsRotatingAnim && StandingAnimsData.Post_PivotAnim.FirstStepAlpha >= 0.99 )
	{
		const float YawOffset = FRotator::NormalizeAxis(BaseAnimInstance->CharacterData.Rotations.DesiredRotation.Yaw - BaseAnimInstance->CharacterData.Rotations.ActorRotation.Yaw);
		if(FMath::Abs(YawOffset) >= 50 || StandingAnimsData.Post_PivotAnim.EntryCardinalDirection !=  BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection)
		{
			BaseAnimInstance->BaseAnimBPData.StandingPostPivotBlendToLoop = true;
			return SequenceEvaluator;
		}
		
	}
	if((StandingAnimsData.Post_PivotAnim.EntrySpeedGait != BaseAnimInstance->CharacterData.Movement.SpeedGait || AnimTooFastOrTooSlow) && !BaseAnimInstance->CharacterData.State.bIsCrouching)
	{
		const bool ReachedDesiredSpeed = FMath::IsNearlyEqual(BaseAnimInstance->CharacterData.Movement.EffectiveSpeedScaler,BaseAnimInstance->CharacterData.Movement.MaxSpeed2D,10.0f) || USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator) > 1.5;
		const bool CanBlendOut = StandingAnimsData.Post_PivotAnim.AnimationData.bIsRotatingAnim? StandingAnimsData.Post_PivotAnim.AnimHasRotationLeft: StandingAnimsData.Post_PivotAnim.FirstStepAlpha >= 0.99 && StandingAnimsData.Post_PivotAnim.AnimTimeElapsed >= 0.3 ;
		if(ReachedDesiredSpeed && CanBlendOut && !BaseAnimInstance->CharacterData.State.bIsCrouching)
		{
			BaseAnimInstance->BaseAnimBPData.StandingPostPivotBlendToLoop = true;
		}
		
	}
	if(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator) >= StandingAnimsData.Post_PivotAnim.AnimationData.Animation->GetPlayLength() - 0.2 && BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		BaseAnimInstance->BaseAnimBPData.StandingPostPivotBlendToLoop = true;
	}
	return SequenceEvaluator;
}

void UKLSBaseLinkedAnimInstance::SetupLoopState(UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return;
	BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::ELoop;
	BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EInterpolate;
	
}

void UKLSBaseLinkedAnimInstance::UpdateLoopState(const FAnimUpdateContext& UpdateContext, UCharacterMovementComponent* MovementComponent,UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !MovementComponent)
	{
		return;
	}
	
}

void UKLSBaseLinkedAnimInstance::SetStandingState(EKLSGroundAnimState StandingState, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(BaseAnimInstance)
	{
		BaseAnimInstance->StandingAnimState = StandingState;
	}
	
}

void UKLSBaseLinkedAnimInstance::SetupStandingIdleState(UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return;
	BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EIdle;
	BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
	
}

#pragma endregion

#pragma region // Crouching States

void UKLSBaseLinkedAnimInstance::SetupCrouchingIdleState(UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return;
	BaseAnimInstance->StandingAnimState = EKLSGroundAnimState::EIdle;
	BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
	
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupCrouchingStopState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance)
	{
		return SequenceEvaluator;
	}
	const bool IsLeftFootUp = BaseAnimInstance->GetCurveValue(BaseAnimInstance->AnimationCurveNames.LeftFootUpCurve) > 0 ;
	const FKLSAnimData StopAnim = SelectStopAnimation(BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection,BaseAnimInstance->CharacterData.Movement.SpeedGait,IsLeftFootUp,true);
	CrouchingAnimsData.StopAnim.AnimationData = StopAnim;
	USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,StopAnim.Animation.Get());
	BaseAnimInstance->BaseAnimBPData.StandingStopBlendToLoop = false;
	if(BaseAnimInstance->CharacterData.State.bIsMoving && !BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		const float StopDistance = UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(MovementComponent).Length();
		USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,StopAnim.GetTimeAtDistance(-StopDistance));
	}
	else
	{
		USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,StopAnim.GetTimeAtDistance(-1.0f));
	}
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateCrouchingStopState(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator,UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* MovementComponent)
{
	if(!MotionSet || !MovementComponent || !BaseAnimInstance || BaseAnimInstance->CharacterData.State.bIsAccelerating)
	{
		return SequenceEvaluator;
	}
	const bool CanDistanceMatch = BaseAnimInstance->CharacterData.State.bIsMoving && !BaseAnimInstance->CharacterData.State.bIsAccelerating;
	const float StopDistance =  UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(MovementComponent).Length();
	UKLSLocomotionBlueprintLibrary::DistanceMatchToTarget(UpdateContext,SequenceEvaluator,StopDistance,CrouchingAnimsData.StopAnim.AnimationData,CanDistanceMatch,MotionSet->Settings.CrouchingSettings.StopDistanceThreshHold,0.0f);
	const float AnimLength = USequenceEvaluatorLibrary::GetSequence(SequenceEvaluator)->GetPlayLength();
	const float CurrentTime = USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator);
	if(CurrentTime >= AnimLength - 0.2)
	{
		BaseAnimInstance->BaseAnimBPData.StandingStopBlendToLoop = true;
	}
	return SequenceEvaluator;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::SetupCrouchingTipState(const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance)
{

	if(MotionSet && BaseAnimInstance)
	{
		if(BaseAnimInstance->CustomRotationData.StrafeRotationAlpha == 0)
		{
			BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle = BaseAnimInstance->CharacterData.Rotations.AimOffsetRotation.Yaw;
			
		}
		const FKLSAnimData TIPAnim = MotionSet->SelectCrouchTurnInPlaceAnimation(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle);
		CrouchingAnimsData.TurnInPlaceAnim.AnimationData = TIPAnim;

		float StartTime = TIPAnim.GetTimeAtRotation(0.01);
		if(BaseAnimInstance->CustomRotationData.StrafeRotationAlpha != 0)
		{
			StartTime = TIPAnim.GetTimeAtRotation(BaseAnimInstance->CustomRotationData.StrafeRotationAlpha);
		}
		USequencePlayerLibrary::SetSequence(SequencePlayer,TIPAnim.Animation.Get());
		USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,StartTime);
		USequencePlayerLibrary::SetStartPosition(SequencePlayer,StartTime);
		USequencePlayerLibrary::SetPlayRate(SequencePlayer,MotionSet->CrouchAnimSet.IdleAndTurnInPlace.TurnInPlaceSpeed);
		BaseAnimInstance->CharacterData.State.bTurnInPlaceRecovery = false;
		BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EAnimRot;
		bTurnIPStandingRotation = false;
		
	}
	return SequencePlayer;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::UpdateCrouchingTipState(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance)
{

	if(!BaseAnimInstance) return SequencePlayer;
	if(MotionSet && BaseAnimInstance && !bTurnIPStandingRotation && BaseAnimInstance->CustomRotationData.CustomRotationType == EKLSCustomRotationType::EAnimRot)
	{
		const float CurrentTime = USequencePlayerLibrary::GetAccumulatedTime(SequencePlayer);
		const float RotationAlpha = CrouchingAnimsData.TurnInPlaceAnim.AnimationData.GetRotationCurveValue(CurrentTime);
		BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = RotationAlpha;
		const bool RotationDirChanged = FMath::Sign(BaseAnimInstance->CharacterData.Rotations.ControlRotationSpeed) != FMath::Sign(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle) &&  FMath::Sign(BaseAnimInstance->CharacterData.Rotations.ControlRotationSpeed) != 0;
		if(RotationAlpha >= 0.99 || RotationDirChanged )
		{
			BaseAnimInstance->CharacterData.State.bTurnInPlaceRecovery = true;
			BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = 0;
			BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		}
	}
	
	return SequencePlayer;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::SetupCrouchingTipRecoveryState(const FSequencePlayerReference& SequencePlayer,UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(MotionSet && BaseAnimInstance)
	{
		const FKLSAnimData TIPAnimRecovery = MotionSet->SelectCrouchTurnInPlaceAnimation(BaseAnimInstance->BaseAnimBPData.TurnInPlaceAngle);
		const float RecoveryStartTime = TIPAnimRecovery.GetTimeAtRotation(1);
		CrouchingAnimsData.TurnInPlaceRecoveryAnim.AnimationData = TIPAnimRecovery;
		USequencePlayerLibrary::SetSequence(SequencePlayer,TIPAnimRecovery.Animation.Get());
		USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,RecoveryStartTime);
		USequencePlayerLibrary::SetStartPosition(SequencePlayer,RecoveryStartTime);
		USequencePlayerLibrary::SetPlayRate(SequencePlayer,1.0f);
		BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EHold;
		
	}
	return SequencePlayer;
}

#pragma endregion

#pragma region //In Air States

void UKLSBaseLinkedAnimInstance::SetupInAirState(UKLSBaseAnimInstance* BaseAnimInstance, UCharacterMovementComponent* CharacterMovement)
{
	if(!BaseAnimInstance || !MotionSet)
	{
		return;
	}

	BaseAnimInstance->BaseAnimBPData.MinLandingDistance = MotionSet->Settings.InAirSettings.MinDistanceToLand;
	
	FKLSJumpSelectorInfo JumpSelectorInfo;
	UKLSLocomotionBlueprintLibrary::PredictJumpPathDistance(CharacterMovement,JumpSelectorInfo.PredictedJumpApexLoc,JumpSelectorInfo.PredictedJumpLandLoc,JumpSelectorInfo.JumpStartLoc,JumpSelectorInfo.ObstacleOverHead);
	JumpSelectorInfo.Owner = CharacterMovement->GetCharacterOwner();
	JumpSelectorInfo.JumpDirection = BaseAnimInstance->CharacterData.Rotations.VelocityCardinalDirection;
	JumpSelectorInfo.IsStrafing = BaseAnimInstance->CharacterData.Rotations.bIsStrafing;
	JumpSelectorInfo.JumpSpeed2D = BaseAnimInstance->CharacterData.Movement.Speed2D;
	JumpSelectorInfo.bIsLeftFootUp = BaseAnimInstance->GetCurveValue(BaseAnimInstance->AnimationCurveNames.LeftFootUpCurve) > 0;
	if(BaseAnimInstance->CharacterData.State.bChangedLinkedLayer)
	{
		if(BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.CanBlendWithOtherSets)
		{
			// Select A new Jump Set If Weight is High but jump set can blend.
			
			FGameplayTag JumpAnimTag;
			BaseAnimInstance->BaseAnimBPData.CurrentJumpSet = MotionSet->SelectJumpSet(JumpSelectorInfo,JumpAnimTag);
			BaseAnimInstance->BaseAnimBPData.JumpAnimTag = JumpAnimTag;
			BaseAnimInstance->BaseAnimBPData.CurrentJumpAnims = MotionSet->JumpAnimations;
			BaseAnimInstance->BaseAnimBPData.JumpApexLocation = JumpSelectorInfo.PredictedJumpApexLoc;
		}
	}
	else
	{
		FGameplayTag JumpAnimTag;
		BaseAnimInstance->BaseAnimBPData.CurrentJumpSet = MotionSet->SelectJumpSet(JumpSelectorInfo,JumpAnimTag);
		BaseAnimInstance->BaseAnimBPData.JumpAnimTag = JumpAnimTag;
		BaseAnimInstance->BaseAnimBPData.CurrentJumpAnims = MotionSet->JumpAnimations;
		BaseAnimInstance->BaseAnimBPData.JumpApexLocation = JumpSelectorInfo.PredictedJumpApexLoc;
	}
	CurrentJumpSet = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet;
	BaseAnimInstance->CustomRotationData.CustomRotationType = EKLSCustomRotationType::EInterpolate;
	
}

void UKLSBaseLinkedAnimInstance::UpdateInAirState(const FAnimUpdateContext& UpdateContext,UKLSBaseAnimInstance* BaseAnimInstance,UCharacterMovementComponent* MovementComponent)
{
	if(!BaseAnimInstance || !MovementComponent)
	{
		return;
	}
	
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupJumpingState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !MotionSet)
	{
		return SequenceEvaluator;
	}
	USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation.Get());
	const float JumpStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.TakeOffTime;
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,JumpStartTime);
	return SequenceEvaluator;
	
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateJumpingState(const FAnimUpdateContext& UpdateContext,const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return SequenceEvaluator;
	const float JumpStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.TakeOffTime;
	const float JumpEndTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexStartTime;
	const float DesiredTime = FMath::GetMappedRangeValueClamped(FVector2f{0,1},FVector2f{JumpStartTime,JumpEndTime},BaseAnimInstance->CharacterData.Movement.JumpAlpha);
	const float CurrentTime = USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator);
	float PlayRate = (DesiredTime - CurrentTime)/UpdateContext.GetContext()->GetDeltaTime();
	PlayRate = FMath::Clamp(PlayRate,0,1.5);
	USequenceEvaluatorLibrary::AdvanceTime(UpdateContext,SequenceEvaluator,PlayRate);
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupLandingPredictionState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !MotionSet || !BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation)
	{
		return SequenceEvaluator;
	}
	USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation.Get());
	const float LandStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexEndTime;
	const float LandEndTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation->GetPlayLength();
	const float DesiredTime = FMath::GetMappedRangeValueClamped(FVector2f{0,1},FVector2f{LandStartTime,LandEndTime},BaseAnimInstance->CharacterData.Movement.LandPredictAlpha);
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,DesiredTime);
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateLandingPredictionState(const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance) return SequenceEvaluator;
	const float LandStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexEndTime;
	const float LandEndTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.LandingTime;
	const float DesiredTime = FMath::GetMappedRangeValueClamped(FVector2f{0,1},FVector2f{LandStartTime,LandEndTime},BaseAnimInstance->CharacterData.Movement.LandPredictAlpha);
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,DesiredTime);
	return SequenceEvaluator;
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::SetupJumpApexState(const  FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !MotionSet || !BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation)
	{
		return SequenceEvaluator;
	}

	if(BaseAnimInstance->CharacterData.State.bChangedLinkedLayer && !BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.CanBlendWithOtherSets)
	{
		return SequenceEvaluator;
	}

	USequenceEvaluatorLibrary::SetSequence(SequenceEvaluator,BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.JumpAnimation.Animation.Get());
	const float ApexStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexStartTime;
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,ApexStartTime);
	BaseAnimInstance->BaseAnimBPData.IsInApex = true;
	return SequenceEvaluator;
	
}

FSequenceEvaluatorReference UKLSBaseLinkedAnimInstance::UpdateJumpApexState(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !USequenceEvaluatorLibrary::GetSequence(SequenceEvaluator))
	{
		return SequenceEvaluator;
	}
	const float ApexStartTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexStartTime;
	const float ApexEndTime = BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.ApexEndTime;
	const float DesiredTime = FMath::Clamp(USequenceEvaluatorLibrary::GetAccumulatedTime(SequenceEvaluator) + UpdateContext.GetContext()->GetDeltaTime(),ApexStartTime,ApexEndTime);
	USequenceEvaluatorLibrary::SetExplicitTime(SequenceEvaluator,DesiredTime);
	if(DesiredTime >= ApexEndTime || BaseAnimInstance->CharacterData.State.bCanLand)
	{
		BaseAnimInstance->BaseAnimBPData.IsInApex = false;
	}
	
	return SequenceEvaluator;
}

FSequencePlayerReference UKLSBaseLinkedAnimInstance::SetupFallLoopState(const FSequencePlayerReference& SequencePlayer, UKLSBaseAnimInstance* BaseAnimInstance)
{
	if(!BaseAnimInstance || !MotionSet || !BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.FallLoop.Get())
	{
		return SequencePlayer;
	}
	USequencePlayerLibrary::SetSequence(SequencePlayer, BaseAnimInstance->BaseAnimBPData.CurrentJumpSet.FallLoop.Get());
	USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,0.0f);
	return SequencePlayer;
	
}

#pragma endregion
