// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/KLSBaseAnimInstance.h"
#include "Data/KLSDataAssets.h"



void UKLSBaseAnimInstance::SetupLandingState()
{
	if(!TryGetPawnOwner() || !CharacterData.LastLinkedLayer)
	{
		return ;
	}
	
	FKLSLandSelectorInfo LandInfo;
	LandInfo.Owner = TryGetPawnOwner();
	LandInfo.IsStrafing = CharacterData.Rotations.bIsStrafing;
	LandInfo.LandDirection = CharacterData.State.bIsAccelerating? CharacterData.Rotations.InputCardinalDirection : CharacterData.Rotations.VelocityCardinalDirection;
	LandInfo.LandFallDistance = BaseAnimBPData.JumpApexLocation.Z - CharacterData.Movement.Location.Z;
	LandInfo.LandFallSpeed = CharacterData.Movement.FallZSpeed;
	LandInfo.JumpAnimTag = BaseAnimBPData.JumpAnimTag;

	BaseAnimBPData.IsLanding = true;
	const FKLSLandSet LandSet = BaseAnimBPData.CurrentJumpAnims.SelectLandAnimation(LandInfo);
	BaseAnimBPData.CurrentLandSet = LandSet;

	switch (CharacterData.Movement.SpeedGait)
	{
	case EKLSSpeedGait::EWalk : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.WalkAdditiveAlpha; break;}
	case EKLSSpeedGait::ERun : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.RunAdditiveAlpha; break;}
	case EKLSSpeedGait::ESprint : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.SprintAdditiveAlpha; break;}
	}
	
}

FSequencePlayerReference UKLSBaseAnimInstance::SetupLandingAnimation(const FSequencePlayerReference& SequencePlayer)
{
	if(BaseAnimBPData.CurrentLandSet.bPlayAsMontage)
	{
		const FName LandSlotName = "FullBodyLanding";
		PlaySlotAnimationAsDynamicMontage(BaseAnimBPData.CurrentLandSet.LandAnim.Get(), LandSlotName, BaseAnimBPData.CurrentLandSet.BlendInTime, BaseAnimBPData.CurrentLandSet.BlendOutTime, BaseAnimBPData.CurrentLandSet.PlayRate, 1, BaseAnimBPData.CurrentLandSet.BlendOutTriggerTime);
		BaseAnimBPData.IsLanding = false;
	}
	else
	{
		
		USequencePlayerLibrary::SetSequence(SequencePlayer,BaseAnimBPData.CurrentLandSet.LandAnim.Get());
		USequencePlayerLibrary::SetAccumulatedTime(SequencePlayer,0);
	}
	
	return SequencePlayer;
}

FSequencePlayerReference UKLSBaseAnimInstance::UpdateLandingState(const FSequencePlayerReference& SequencePlayer)
{
	UAnimSequenceBase* AnimSequenceBase;
	USequencePlayerLibrary::GetSequence(SequencePlayer,AnimSequenceBase);
	if(AnimSequenceBase)
	{
		const float AnimLength = AnimSequenceBase->GetPlayLength();
		const float CurrentTime = USequencePlayerLibrary::GetAccumulatedTime(SequencePlayer);
		if((CurrentTime  >= AnimLength - 0.2 && BaseAnimBPData.IsLanding) || (!CharacterData.State.bIsGrounded))
		{
			BaseAnimBPData.IsLanding = false;
		}
	}
	return SequencePlayer;
}

void UKLSBaseAnimInstance::UpdateLandAdditiveWeight(const FAnimUpdateContext UpdateContext)
{
	switch (CharacterData.Movement.SpeedGait)
	{
		case EKLSSpeedGait::EWalk : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.WalkAdditiveAlpha; break;}
		case EKLSSpeedGait::ERun : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.RunAdditiveAlpha; break;}
		case EKLSSpeedGait::ESprint : {BaseAnimBPData.LandAdditiveAlpha = BaseAnimBPData.CurrentLandSet.SprintAdditiveAlpha; break;}
	}
}

float UKLSBaseAnimInstance::GetCustomRotationWeight()
{
	return GetCurveValue("KLSCustomRotation");
}




