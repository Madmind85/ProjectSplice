// Sir.D.Kai Studio

#include "Animation/AnimNode_KLSAimOffset.h"
#include "Animation/AnimInstanceProxy.h"
#include "Kismet/KismetMathLibrary.h"

DECLARE_CYCLE_STAT(TEXT("KLSAimOffset Eval"), STAT_AimOffset_Eval, STATGROUP_Anim);

namespace KLS::Anim
{
	static inline FVector GetAxisVector(const EAxis::Type& InAxis)
	{
		switch (InAxis)
		{
		case EAxis::X:
			return FVector::ForwardVector;
		case EAxis::Y:
			return FVector::RightVector;
		default:
			return FVector::UpVector;
		};
	}
}

void FAnimNode_KLSAimOffset::GatherDebugData(FNodeDebugData& DebugData)
{
	FString DebugLine = DebugData.GetNodeName(this);
	ComponentPose.GatherDebugData(DebugData);
}

void FAnimNode_KLSAimOffset::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_SkeletalControlBase::Initialize_AnyThread(Context);
	GetEvaluateGraphExposedInputs().Execute(Context);
	InternalYaw = YawAngle * ActualAlpha;
	InternalPitch = PitchAngle * ActualAlpha;
	ActualYawAngle = InternalYaw;
	Reset(Context);
}

void FAnimNode_KLSAimOffset::UpdateInternal(const FAnimationUpdateContext& Context)
{
	FAnimNode_SkeletalControlBase::UpdateInternal(Context);
	//GetEvaluateGraphExposedInputs().Execute(Context);
	
	// If we just became relevant and haven't been initialized yet, then reset.
	if (!bIsFirstUpdate && UpdateCounter.HasEverBeenUpdated() && !UpdateCounter.WasSynchronizedCounter(Context.AnimInstanceProxy->GetUpdateCounter()))
	{
		Reset(Context);
	}
	UpdateCounter.SynchronizeWith(Context.AnimInstanceProxy->GetUpdateCounter());
}

void FAnimNode_KLSAimOffset::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	SCOPE_CYCLE_COUNTER(STAT_AimOffset_Eval);
	check(OutBoneTransforms.Num() == 0);

	const float DeltaSeconds = Output.AnimInstanceProxy->GetDeltaSeconds();
	
	InternalYaw = YawAngle * ActualAlpha;
	InternalPitch = PitchAngle * ActualAlpha;
	
	//Calculate Final Yaw Value Function interpolate the Yaw when changing from negative to positive
	
	ActualYawAngle = GetFinalYawValue(DeltaSeconds,InternalYaw);
	ActualYawAngle = FMath::Clamp(ActualYawAngle,MinYawRotation,MaxYawRotation);

	
	const FVector YawRotationAxisVector = KLS::Anim::GetAxisVector(YawRotationAxis);
	const FVector PitchRotationAxisVector = KLS::Anim::GetAxisVector(PitchRotationAxis);
	
	
	const int32 NumSpineBones = SpineBoneDataArray.Num();

	if (NumSpineBones > 0)
	{
		for (int32 ArrayIndex = 0; ArrayIndex < NumSpineBones; ArrayIndex++)
		{
			const FAimOffsetBoneData& BoneData = SpineBoneDataArray[ArrayIndex];
			const float BoneYawAngle = FMath::DegreesToRadians(ActualYawAngle * BoneData.YawWeight);
			const float BonePitchAngle = FMath::DegreesToRadians(InternalPitch * BoneData.PitchWeight);
			const FQuat SpineBoneYawRotation = FQuat(YawRotationAxisVector, BoneYawAngle);
			const FVector PitchAxis = SpineBoneYawRotation.RotateVector(PitchRotationAxisVector);
			const FQuat SpineBonePitchRotation = FQuat(PitchAxis, BonePitchAngle);
			FTransform SpineBoneTransform(Output.Pose.GetComponentSpaceTransform(BoneData.BoneIndex));
				
			if(BoneData.PitchWeight > 0.f)
			{
				SpineBoneTransform.SetRotation((SpineBonePitchRotation * SpineBoneTransform.GetRotation()));
				SpineBoneTransform.NormalizeRotation();
			}
			if(BoneData.YawWeight > 0.f)
			{
				SpineBoneTransform.SetRotation((SpineBoneYawRotation * SpineBoneTransform.GetRotation()));
				SpineBoneTransform.NormalizeRotation();
			}
			Output.Pose.SetComponentSpaceTransform(BoneData.BoneIndex, SpineBoneTransform);
		}
	}

	if(bCorrectHandIK)
	{
		TArray<FBoneTransform> IKOutBoneTransforms;
			
		const FTransform RightHandTransform = Output.Pose.GetComponentSpaceTransform(RightHandBoneIndex);
		const FTransform LeftHandTransform = Output.Pose.GetComponentSpaceTransform(LeftHandBoneIndex);

		IKOutBoneTransforms.Add(FBoneTransform{HandGunBoneIndex,RightHandTransform});
		IKOutBoneTransforms.Add(FBoneTransform{RightHandIKBoneIndex,RightHandTransform});
		IKOutBoneTransforms.Add(FBoneTransform{LeftHandIKBoneIndex,LeftHandTransform});
		IKOutBoneTransforms.Sort(FCompareBoneTransformIndex());
			
		Output.Pose.SafeSetCSBoneTransforms(IKOutBoneTransforms);
	}
	OutBoneTransforms.Sort(FCompareBoneTransformIndex());
	bIsFirstUpdate = false;
}

bool FAnimNode_KLSAimOffset::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{
	if (YawRotationAxis == EAxis::None)
	{
		return false;
	}

	if (SpineBoneDataArray.IsEmpty())
	{
		return false;
	}
	else
	{
		for (const auto& Spine : SpineBoneDataArray)
		{
			if (Spine.BoneIndex == INDEX_NONE)
			{
				return false;
			}
		}
	}
	if(bCorrectHandIK)
	{
		if (RightHandBoneIndex == INDEX_NONE)
		{
			return false;
		}
		if (LeftHandBoneIndex == INDEX_NONE)
		{
			return false;
		}
		if (HandGunBoneIndex == INDEX_NONE)
		{
			return false;
		}
		if (RightHandIKBoneIndex == INDEX_NONE)
		{
			return false;
		}
		if (LeftHandIKBoneIndex == INDEX_NONE)
		{
			return false;
		}
	}
	return true;
}

void FAnimNode_KLSAimOffset::InitializeBoneReferences(const FBoneContainer& RequiredBones)
{
	SpineBoneDataArray.Reset();
	for (auto& Bone : SpineBones)
	{
		Bone.Bone.Initialize(RequiredBones);
		SpineBoneDataArray.Add(FAimOffsetBoneData(Bone.Bone.GetCompactPoseIndex(RequiredBones),Bone.YawWeight,Bone.PitchWeight));
	}

	if (SpineBoneDataArray.Num() > 0)
	{
		// Sort bones indices so we can transform parent before child
		SpineBoneDataArray.Sort(FAimOffsetBoneData::FCompareBoneIndex());
	}
	if(bCorrectHandIK)
	{
		RightHandBone.Initialize(RequiredBones);
		LeftHandBone.Initialize(RequiredBones);

		HandGunBone.Initialize(RequiredBones);
		RightHandIKBone.Initialize(RequiredBones);
		LeftHandIKBone.Initialize(RequiredBones);
		

		RightHandBoneIndex = RightHandBone.GetCompactPoseIndex(RequiredBones);
		LeftHandBoneIndex = LeftHandBone.GetCompactPoseIndex(RequiredBones);

		HandGunBoneIndex = HandGunBone.GetCompactPoseIndex(RequiredBones);
		RightHandIKBoneIndex = RightHandIKBone.GetCompactPoseIndex(RequiredBones);
		LeftHandIKBoneIndex = LeftHandIKBone.GetCompactPoseIndex(RequiredBones);
		
	}
	

	
}

void FAnimNode_KLSAimOffset::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	GetEvaluateGraphExposedInputs().Execute(Context);
	SpineBones.Reset();
	for(FAimOffsetBoneDefinition SpineBone : AimOffsetBonesNames)
	{
		 FAimOffsetBone AimOffsetBone = FAimOffsetBone(FBoneReference(SpineBone.BoneName),SpineBone.YawWeight,SpineBone.PitchWeight);
		AimOffsetBone.Bone.BoneIndex = INDEX_NONE;
		SpineBones.Add(AimOffsetBone);
	}
	
	// Cache The Hand Bones Definitions
	RightHandBone = FBoneReference(HandBones.RightHandBoneName);
	RightHandBone.BoneIndex = INDEX_NONE;
	
	LeftHandBone = FBoneReference(HandBones.LeftHandBoneName);
	LeftHandBone.BoneIndex = INDEX_NONE;
	
	RightHandIKBone = FBoneReference(IKHandBones.RightHandIKBoneName);
	RightHandIKBone.BoneIndex = INDEX_NONE;
	
	LeftHandIKBone = FBoneReference(IKHandBones.LeftHandIKBoneName);
	LeftHandIKBone.BoneIndex = INDEX_NONE;
	
	HandGunBone = FBoneReference(IKHandBones.HandGunBoneName);
	HandGunBone.BoneIndex = INDEX_NONE;
	bCorrectHandIK = EnableHandIKCorrection;
	
	FAnimNode_SkeletalControlBase::CacheBones_AnyThread(Context);
}

float FAnimNode_KLSAimOffset::GetFinalYawValue(const float DeltaTime , const float Yaw)
{
	const float bIsPositiveYaw = Yaw >= 0;
	const float TickTime = DeltaTime * RotationInterpSpeed;
	// Calculate Positive Yaw Alpha, the Alpha takes longer to blend in the further
	// the angle is from 0, meaning if the sign changes from 180 to -180 there will interpolation,
	// if angle switches from 1 to -1 there will be no interpolation.
	const float DesiredPositiveYaw = FMath::Clamp(PositiveYawAlpha + TickTime, 0.f,1.f);
	const float MappedPositiveYaw = FMath::GetMappedRangeValueClamped(FVector2f{0.f,180.f},FVector2f{1.f,0.f},FMath::Abs(Yaw));
	PositiveYawAlpha = bIsPositiveYaw ? DesiredPositiveYaw : MappedPositiveYaw;

	const float DesiredNegativeYaw = FMath::Clamp(NegativeYawAlpha + TickTime, 0.f,1.f);
	const float MappedNegativeYaw = FMath::GetMappedRangeValueClamped(FVector2f{0.f,180.f},FVector2f{1.f,0.f},FMath::Abs(Yaw));
	NegativeYawAlpha = bIsPositiveYaw ? MappedNegativeYaw : DesiredNegativeYaw;

	const float FinalPositiveYaw = FMath::Lerp(NegativeYaw,Yaw,PositiveYawAlpha);
	const float FinalNegativeYaw = FMath::Lerp(PositiveYaw,Yaw,NegativeYawAlpha);

	const float FinalYaw = bIsPositiveYaw ? FinalPositiveYaw : FinalNegativeYaw;

	PositiveYaw = bIsPositiveYaw ? FinalYaw : PositiveYaw ;
	NegativeYaw = bIsPositiveYaw ? NegativeYaw : FinalYaw ;

	return FinalYaw;
	
	
}

void FAnimNode_KLSAimOffset::Reset(const FAnimationBaseContext& Context)
{
	bIsFirstUpdate = true;
}
