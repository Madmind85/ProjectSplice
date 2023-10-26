//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.


#include "Data/KLSDataAssets.h"
#include "UObject/ObjectSaveContext.h"


#if WITH_EDITOR
//PreSave Event Used To Cache Distance , rotation And Masking Curves. 
void UKLSLocomotionData::PreSave(FObjectPreSaveContext ObjectSaveContext)
{
	StandingAnimations.CacheGaitCurves();
	CrouchAnimSet.CacheCrouchCurves();
	Super::PreSave(ObjectSaveContext);
}

void UKLSMaskingData::PreSave(FObjectPreSaveContext ObjectSaveContext)
{
	
	IdleMask.CacheAdditiveCurves();
	AimMask.CacheAdditiveCurves();
	WalkMask.CacheAdditiveCurves();
	RunMask.CacheAdditiveCurves();
	SprintMask.CacheAdditiveCurves();
	CrouchIdleMask.CacheAdditiveCurves();
	CrouchAimMask.CacheAdditiveCurves();
	CrouchMovingMask.CacheAdditiveCurves();
	JumpingMask.CacheAdditiveCurves();
	FallingMask.CacheAdditiveCurves();
	Super::PreSave(ObjectSaveContext);
}
#endif

#pragma region (Helper Functions)

EKLSSpeedGait UKLSLocomotionData::GetSpeedGaitFromSpeed(const float Speed)
{
	if(Speed >= Settings.StandingSettings.RunGaitEntrySpeed + (Settings.StandingSettings.SprintGaitEntrySpeed - Settings.StandingSettings.RunGaitEntrySpeed) / 2)
	{
		return EKLSSpeedGait::ESprint;
	}
	if (Speed >= Settings.StandingSettings.WalkGaitEntrySpeed + (Settings.StandingSettings.RunGaitEntrySpeed - Settings.StandingSettings.WalkGaitEntrySpeed) / 2)
	{
		return EKLSSpeedGait::ERun;
	}
	return EKLSSpeedGait::EWalk;
}
EKLSSpeedGait UKLSLocomotionData::GetSpeedGaitFromAlpha(const float SpeedAlpha)
{
	if(SpeedAlpha >= 1.4)
	{
		return EKLSSpeedGait::ESprint;
	}
	if(SpeedAlpha >= 0.4)
	{
		return EKLSSpeedGait::ERun;
	}
	return EKLSSpeedGait::EWalk;
	
}
float UKLSLocomotionData::GetGaitAlphaFromSpeed(const float Speed)
{
	if(Speed >= Settings.StandingSettings.RunGaitEntrySpeed)
	{
		return FMath::GetMappedRangeValueClamped({Settings.StandingSettings.RunGaitEntrySpeed,Settings.StandingSettings.SprintGaitEntrySpeed}, FVector2f{1.0f,2.0f},Speed);
	}
	return FMath::GetMappedRangeValueClamped({Settings.StandingSettings.WalkGaitEntrySpeed,Settings.StandingSettings.RunGaitEntrySpeed}, FVector2f{0.0f,1.0f},Speed);
	
}
FVector2D UKLSLocomotionData::GetPlayRateClamp(const bool Crouching)
{
	if(Crouching)
	{
		return CrouchAnimSet.LoopAnimations.PlayRateClamp;
	}
	return StandingAnimations.LoopAnimations.PlayRateClamp;
}
FKLSAnimData UKLSLocomotionData::GetRotatingAnim(const float Direction, const FKLSRotatingAnimSet& AnimSet)
{
	if(Direction >= 0)
	{
		if(FMath::Abs(Direction) >= 120)
		{
			return AnimSet.Right_180;	
		}
		{
			return AnimSet.Right_90;
		}
	}
	{
		if (FMath::Abs(Direction) >= 120)
		{
			return AnimSet.Left_180;	
		}
		{
			return AnimSet.Left_90;	
		}
	}
}
FKLSAnimData UKLSLocomotionData::GetStrafingAnim(const EKLSCardinalDirection CardinalDirection , const FKLSDefaultAnimSet& AnimSet)
{
	switch (CardinalDirection)
	{
	case EKLSCardinalDirection::EFwd :
		{
			return AnimSet.Forward;
		}
		
	case EKLSCardinalDirection::EBwd :
		{
			return AnimSet.Backward;
		}
		
	case EKLSCardinalDirection::ERight :
		{
			return AnimSet.Right;
		}
		
	case EKLSCardinalDirection::ELeft :
		{
			return AnimSet.Left;
		}
	}
	FKLSAnimData AnimData;
	return AnimData;
}
FKLSPivotAnimSet UKLSLocomotionData::GetRotatingPivotSet(const float Direction, const FKLSRotatingPivotAnimSet& AnimSet, const bool bIsLeftFootUp)
{
	if(Direction >= 0)
	{
		if(bIsLeftFootUp)
		{
			return AnimSet.Right180LeftFootUp;	
		}
		{
			return AnimSet.Right180RightFootUp;
		}
	}
	{
		if (bIsLeftFootUp)
		{
			return AnimSet.Left180LeftFootUp;	
		}
		{
			return AnimSet.Left180RightFootUp;	
		}
	}
}
FKLSPivotAnimSet UKLSLocomotionData::GetStrafingPivotSet(const EKLSCardinalDirection CardinalDirection , const FKLSDefaultPivotAnimSet& AnimSet)
{
	switch (CardinalDirection)
	{
	case EKLSCardinalDirection::EFwd :
		{
			return AnimSet.Forward;
		}
		
	case EKLSCardinalDirection::EBwd :
		{
			return AnimSet.Backward;
		}
		
	case EKLSCardinalDirection::ERight :
		{
			return AnimSet.Right;
		}
		
	case EKLSCardinalDirection::ELeft :
		{
			return AnimSet.Left;
		}
	}
	FKLSPivotAnimSet AnimData;
	return AnimData;
}

#pragma endregion

#pragma region (Animations Selectors)

FKLSAnimData UKLSLocomotionData::SelectStartAnimation(const EKLSCardinalDirection& CardinalDirection,const float Direction, const bool IsStrafing, const EKLSSpeedGait& SpeedGait)
{
	FKLSAnimData FinalAnim;
	FKLSGaitStartsSet GaitStarts;
	switch (SpeedGait)
	{
	case EKLSSpeedGait::EWalk : {GaitStarts = StandingAnimations.StartAnimations.Walk;break;}
		
	case EKLSSpeedGait::ERun : {GaitStarts = StandingAnimations.StartAnimations.Run; break;}

	case EKLSSpeedGait::ESprint : {GaitStarts = StandingAnimations.StartAnimations.Sprint; break;}	
	}
	if(!IsStrafing && GaitStarts.HasRotatingStarts)
	{
		{
			if(FMath::Abs(Direction) <= 60.0f)
			{
				return GetStrafingAnim(CardinalDirection,GaitStarts.StrafeStarts);
			}
			return GetRotatingAnim(Direction,GaitStarts.RotateStarts);
		}
	}
	{
		return GetStrafingAnim(CardinalDirection,GaitStarts.StrafeStarts);
	}
	
}
FKLSAnimData UKLSLocomotionData::SelectCrouchStartAnimation(const EKLSCardinalDirection& CardinalDirection,const float Direction, const bool IsStrafing)
{
	if( !IsStrafing && CrouchAnimSet.Starts.HasRotatingStarts)
	{
		{
			if(FMath::Abs(Direction) <= 60.0f)
			{
				return GetStrafingAnim(CardinalDirection,CrouchAnimSet.Starts.StrafeStarts);
			}
			return GetRotatingAnim(Direction,CrouchAnimSet.Starts.RotateStarts);
		}
	}
	{
		return GetStrafingAnim(CardinalDirection,CrouchAnimSet.Starts.StrafeStarts);
	}
}
FKLSAnimData UKLSLocomotionData::SelectStopAnimation(const EKLSCardinalDirection& CardinalDirection,const EKLSSpeedGait& SpeedGait, const bool bIsLeftFootUp)
{
	FKLSAnimData FinalAnim;
	FKLSGaitStopsSet GaitStops = StandingAnimations.StopAnimations.Walk;
	switch (SpeedGait)
	{
		case EKLSSpeedGait::EWalk : {break;}
		case EKLSSpeedGait::ERun : {GaitStops = StandingAnimations.StopAnimations.Run; break;}
		case EKLSSpeedGait::ESprint : {GaitStops = StandingAnimations.StopAnimations.Sprint; break;}	
	}
	if(GaitStops.UsePerFootStop && bIsLeftFootUp)
	{
		return GetStrafingAnim(CardinalDirection,GaitStops.LeftFootUp);
	}
	{
		return GetStrafingAnim(CardinalDirection,GaitStops.RightFootUp);
	}
}
FKLSAnimData UKLSLocomotionData::SelectCrouchStopAnimation(const EKLSCardinalDirection& CardinalDirection,const bool bIsLeftFootUp)
{
	if(CrouchAnimSet.Stops.UsePerFootStop && bIsLeftFootUp)
	{
		return GetStrafingAnim(CardinalDirection,CrouchAnimSet.Stops.LeftFootUp);
	}
	{
		return GetStrafingAnim(CardinalDirection,CrouchAnimSet.Stops.RightFootUp);
	}
}
FKLSPivotAnimSet UKLSLocomotionData::SelectPivotSet(const EKLSCardinalDirection& VelocityCardinalDirection,const EKLSCardinalDirection& InputCardinalDirection, const float Direction, const bool IsStrafing,const EKLSSpeedGait& SpeedGait, const bool bIsLeftFootUp, bool& SoftPivot)
{
	SoftPivot = true;
	FKLSGaitPivotsSet GaitPivots;
	switch (SpeedGait)
	{
	case EKLSSpeedGait::EWalk : {GaitPivots = StandingAnimations.PivotAnimations.Walk;break;}
		
	case EKLSSpeedGait::ERun : {GaitPivots = StandingAnimations.PivotAnimations.Run; break;}

	case EKLSSpeedGait::ESprint : {GaitPivots = StandingAnimations.PivotAnimations.Sprint; break;}	
	}
	
	if(!IsStrafing && GaitPivots.HasRotatingPivots)
	{
		{
			SoftPivot = false;
			return GetRotatingPivotSet(Direction,GaitPivots.RotatePivots,bIsLeftFootUp);
			
		}
	}
	if (GaitPivots.HasStrafePivotAnimations)
	{
		SoftPivot = false;
		return GetStrafingPivotSet(VelocityCardinalDirection,GaitPivots.StrafePivots);
	}
	{
		FKLSPivotAnimSet FinalPivotSet;
		FKLSAnimData PrePivotAnim;
		FKLSAnimData PostPivotAnim;
		FKLSGaitStartsSet Starts;
		FKLSGaitStopsSet Stops;
		switch (SpeedGait)
		{
		case EKLSSpeedGait::EWalk :
			{
				Starts = StandingAnimations.StartAnimations.Walk;
				Stops = StandingAnimations.StopAnimations.Walk;
				break;
			}
		
		case EKLSSpeedGait::ERun :
			{
				Starts = StandingAnimations.StartAnimations.Run;
				Stops = StandingAnimations.StopAnimations.Run;
				break;
			}

		case EKLSSpeedGait::ESprint :
			{
				Starts = StandingAnimations.StartAnimations.Sprint;
				Stops = StandingAnimations.StopAnimations.Sprint;
				break;
			}	
		}
		if(!IsStrafing && Starts.HasRotatingStarts)
		{
			PostPivotAnim = GetRotatingAnim(Direction,Starts.RotateStarts);
		}
		else
		{
			PostPivotAnim = GetStrafingAnim(InputCardinalDirection,Starts.StrafeStarts);
		}
		{
			if(bIsLeftFootUp && Stops.UsePerFootStop)
			{
				PrePivotAnim = GetStrafingAnim(VelocityCardinalDirection,Stops.LeftFootUp);
			}
			else
			{
				PrePivotAnim = GetStrafingAnim(VelocityCardinalDirection,Stops.RightFootUp);
			}
			
		}
		FinalPivotSet.PostPivot = PostPivotAnim;
		FinalPivotSet.PrePivot = PrePivotAnim;
		return FinalPivotSet;
	}
}
FKLSPivotAnimSet UKLSLocomotionData::SelectCrouchPivotSet(const EKLSCardinalDirection& VelocityCardinalDirection,const EKLSCardinalDirection& InputCardinalDirection,const float Direction, const bool IsStrafing,const bool bIsLeftFootUp, bool& SoftPivot)
{
	SoftPivot = true;
	
	if(!IsStrafing && CrouchAnimSet.Pivots.HasRotatingPivots)
	{
		{
			SoftPivot = false;
			return GetRotatingPivotSet(Direction,CrouchAnimSet.Pivots.RotatePivots,bIsLeftFootUp);
			
		}
	}
	if (CrouchAnimSet.Pivots.HasStrafePivotAnimations)
	{
		SoftPivot = false;
		return GetStrafingPivotSet(VelocityCardinalDirection,CrouchAnimSet.Pivots.StrafePivots);
	}
	{
		FKLSPivotAnimSet FinalPivotSet;
		FKLSAnimData PrePivotAnim;
		FKLSAnimData PostPivotAnim;
		FKLSGaitStartsSet Starts;
		FKLSGaitStopsSet Stops;
		Starts = CrouchAnimSet.Starts;
		Stops = CrouchAnimSet.Stops;
		
		
		if(!IsStrafing && Starts.HasRotatingStarts)
		{
			PostPivotAnim = GetRotatingAnim(Direction,Starts.RotateStarts);
		}
		else
		{
			PostPivotAnim = GetStrafingAnim(InputCardinalDirection,Starts.StrafeStarts);
		}
		{
			if(bIsLeftFootUp && Stops.UsePerFootStop)
			{
				PrePivotAnim = GetStrafingAnim(VelocityCardinalDirection,Stops.LeftFootUp);
			}
			else
			{
				PrePivotAnim = GetStrafingAnim(VelocityCardinalDirection,Stops.RightFootUp);
			}
			
		}
		FinalPivotSet.PostPivot = PostPivotAnim;
		FinalPivotSet.PrePivot = PrePivotAnim;
		return FinalPivotSet;
	}
}
FKLSAnimData UKLSLocomotionData::SelectTurnInPlaceAnimation(const float TurnDirection)
{
	if(TurnDirection >= 0.0) return StandingAnimations.IdleAndTurnInPlace.TurnInPlaceAnims.Right_90;
	return StandingAnimations.IdleAndTurnInPlace.TurnInPlaceAnims.Left_90;
	
}
FKLSAnimData UKLSLocomotionData::SelectCrouchTurnInPlaceAnimation(const float TurnDirection)
{
	if(TurnDirection >= 0.0) return CrouchAnimSet.IdleAndTurnInPlace.TurnInPlaceAnims.Right_90;
	return CrouchAnimSet.IdleAndTurnInPlace.TurnInPlaceAnims.Left_90;
	
}
FKLSJumpSet UKLSLocomotionData::SelectJumpSet(const FKLSJumpSelectorInfo& JumpSelectInfo, FGameplayTag& JumpTag)
{
	if(!JumpAnimations.CustomJumpSelector)
	{
		TArray<FKLSJumpSet> Values;
		JumpAnimations.JumpAnimations.GenerateValueArray(Values);
		if(Values.Num() > 0) return Values[0];
		return FKLSJumpSet{};
	}
	{
		const FGameplayTag DesiredJumpSetTag = JumpAnimations.CustomJumpSelector->SelectJumpAnimations(JumpSelectInfo);
		JumpTag = DesiredJumpSetTag;
		if(DesiredJumpSetTag.IsValid() && JumpAnimations.JumpAnimations.Contains(DesiredJumpSetTag))
		{
			return JumpAnimations.JumpAnimations.FindChecked(DesiredJumpSetTag);
		}
		{
			TArray<FKLSJumpSet> Values;
			JumpAnimations.JumpAnimations.GenerateValueArray(Values);
			if(Values.Num() > 0) return Values[0];
			return FKLSJumpSet{};
		}
	}
}

FKLSInterpolationSpeeds UKLSLocomotionData::GetInterpolationSpeeds() const
{
	FKLSInterpolationSpeeds InterpolationSpeeds;
	InterpolationSpeeds.CrouchInterpSpeed = Settings.CrouchingSettings.RotationInterpSpeed;
	InterpolationSpeeds.InAirInterpSpeed = Settings.InAirSettings.RotationInterpSpeed;
	InterpolationSpeeds.WalkInterpSpeed = Settings.StandingSettings.WalkRotationInterpSpeed;
	InterpolationSpeeds.RunInterpSpeed = Settings.StandingSettings.RunRotationInterpSpeed;
	InterpolationSpeeds.SprintInterpSpeed = Settings.StandingSettings.SprintRotationInterpSpeed;
	return InterpolationSpeeds;
}

#pragma endregion

