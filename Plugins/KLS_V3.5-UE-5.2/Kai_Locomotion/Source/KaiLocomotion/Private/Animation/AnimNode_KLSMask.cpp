// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNode_KLSMask.h"

#include "Animation/AnimInstanceProxy.h"


#define DEFAULT_SOURCEINDEX 0xFF


void FAnimNode_KLSMask::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
	FAnimNode_Base::Initialize_AnyThread(Context);

	AnimationPose.Initialize(Context);
	MaskPose.Initialize(Context);
	BaseAdditivePose.Initialize(Context);
	

	for(int32 Index = 0; Index < BlendMasks.Num(); ++Index)
	{
		if(BlendMasks[Index].AddSlot)
		{
			BlendMasks[Index].Slot.SlotName = BlendMasks[Index].SlotName;
			BlendMasks[Index].Slot.Source = MaskPose;
			BlendMasks[Index].Slot.Initialize_AnyThread(Context);
		}
		
	}
	if(!Context.AnimInstanceProxy->GetSkeleton())
	{
		return;
	}
	// Invalidate the cached per-bone blend weights from the skeleton
	InvalidatePerBoneBlendWeights();
	
}

void FAnimNode_KLSMask::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)
	AnimationPose.CacheBones(Context);
	BaseAdditivePose.CacheBones(Context);
	MaskPose.CacheBones(Context);
	const int32 NumBlendMasks = BlendMasks.Num();
	for (int32 MaskIndex = 0; MaskIndex < NumBlendMasks; ++MaskIndex)
	{
		const FKLSMaskSettings CurrentMask = BlendMasks[MaskIndex];
		const FName BlendProfileName = BlendMasks[MaskIndex].BlendProfileName;
		if(const TObjectPtr<UBlendProfile> BlendProfile = Context.AnimInstanceProxy->GetSkeleton()->GetBlendProfile(BlendProfileName))
		{
			BlendMasks[MaskIndex].BlendProfile = BlendProfile;
		}
		if(BlendMasks[MaskIndex].AddSlot)
		{
			BlendMasks[MaskIndex].Slot.CacheBones_AnyThread(Context);
		}
	}
	UpdateCachedBoneData(Context.AnimInstanceProxy->GetRequiredBones(), Context.AnimInstanceProxy->GetSkeleton());
}

void FAnimNode_KLSMask::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
	bHasRelevantPoses = false;
	if(BlendMasks.Num() > 0)
	{
		if (IsLODEnabled(Context.AnimInstanceProxy))
		{
			GetEvaluateGraphExposedInputs().Execute(Context);

			if(bHasRelevantPoses == false)
			{
				
				MaskPose.Update(Context);
				BaseAdditivePose.Update(Context);
				AnimationPose.Update(Context);
				for(int32 Index = 0; Index < BlendMasks.Num(); ++Index)
				{
					if(BlendMasks[Index].AddSlot)
					{
						BlendMasks[Index].Slot.Update_AnyThread(Context);
					}
					
				}
				UpdateCachedBoneData(Context.AnimInstanceProxy->GetRequiredBones(), Context.AnimInstanceProxy->GetSkeleton());
				
				bHasRelevantPoses = true;
			}
		}
		else
		{
			// Clear BlendWeights if disabled by LODThreshold.
			for (int32 ChildIndex = 0; ChildIndex < MaskBlendWeights.Num(); ++ChildIndex)
			{
				MaskBlendWeights[ChildIndex].LocalSpaceBlendAlpha = 0.0f;
				MaskBlendWeights[ChildIndex].MeshSpaceBlendAlpha = 0.0f;
			}
		}
	}
	else
	{
		AnimationPose.Update(Context);
	}
}

void FAnimNode_KLSMask::Evaluate_AnyThread(FPoseContext& Output)
{
	if(BlendMasks.Num() > 0)
	{
		//
		AnimationPose.Evaluate(Output);
		FPoseContext AnimationPoseContext(Output);
		AnimationPoseContext = Output;
		
		FPoseContext UpdatedAnimationPoseContext(Output);
		UpdatedAnimationPoseContext = AnimationPoseContext;
		
		FPoseContext MaskPoseContext(Output);
		MaskPose.Evaluate(MaskPoseContext);

		FPoseContext BaseAddPoseContext(Output);
		BaseAdditivePose.Evaluate(BaseAddPoseContext);

		FPoseContext BaseMSAddPoseContext(Output);
		BaseMSAddPoseContext = BaseAddPoseContext;


		FPoseContext AnimationLocalSpaceAdditive(Output);
		AnimationLocalSpaceAdditive = AnimationPoseContext;

		FPoseContext AnimationMeshSpaceAdditive(Output);
		AnimationMeshSpaceAdditive = AnimationPoseContext;
		
		MakeAdditivePose(AnimationLocalSpaceAdditive,BaseAddPoseContext,false);
		MakeAdditivePose(AnimationMeshSpaceAdditive,BaseMSAddPoseContext,true);
		
		for(int32 MaskIndex = 0; MaskIndex < BlendMasks.Num(); ++MaskIndex)
		{
			
			//Apply Blending For Each Mask
			TArray<FCompactPose> LSTargetBlendPoses;
			LSTargetBlendPoses.SetNum(1);

			TArray<FCompactPose> MSTargetBlendPoses;
			MSTargetBlendPoses.SetNum(1);

			TArray<FBlendedCurve> LSTargetBlendCurves;
			LSTargetBlendCurves.SetNum(1);

			TArray<FBlendedCurve> MSTargetBlendCurves;
			MSTargetBlendCurves.SetNum(1);

			TArray<UE::Anim::FStackAttributeContainer> LSTargetBlendAttributes;
			LSTargetBlendAttributes.SetNum(1);

			TArray<UE::Anim::FStackAttributeContainer> MSTargetBlendAttributes;
			MSTargetBlendAttributes.SetNum(1);
		
			FPoseContext OutMaskPoseContext(Output);
			if(BlendMasks[MaskIndex].AddSlot)
			{
				BlendMasks[MaskIndex].Slot.Evaluate_AnyThread(OutMaskPoseContext);
			}
			else
			{
				MaskPose.Evaluate(OutMaskPoseContext);
			}

			UpdateWeightsFromCurves(Output.AnimInstanceProxy->GetSkeleton(),OutMaskPoseContext,MaskIndex);
			
			FAnimationPoseData InOutAnimationPoseData(OutMaskPoseContext);
			const FAnimationPoseData AdditiveAnimationPoseData(BlendMasks[MaskIndex].UseMeshSpaceAdditive? AnimationMeshSpaceAdditive : AnimationLocalSpaceAdditive);
			if (FAnimWeight::IsRelevant(MaskBlendWeights[MaskIndex].AdditiveAlpha))
			{
				FAnimationRuntime::AccumulateAdditivePose(InOutAnimationPoseData, AdditiveAnimationPoseData,  MaskBlendWeights[MaskIndex].AdditiveAlpha, BlendMasks[MaskIndex].UseMeshSpaceAdditive?AAT_RotationOffsetMeshSpace: AAT_LocalSpaceBase);
				OutMaskPoseContext.Pose.NormalizeRotations();
			}
		
		
			FPoseContext CurrentPoseContext(AnimationPoseContext);
			FAnimationPoseData BlendedAnimationPoseData(CurrentPoseContext);
			const FAnimationPoseData AnimationPoseOneData(AnimationPoseContext);
			const FAnimationPoseData AnimationPoseTwoData(OutMaskPoseContext);
			
		
			TArray<float> LSDesiredBlendWeight;
			LSDesiredBlendWeight.Add(MaskBlendWeights[MaskIndex].LocalSpaceBlendAlpha);
			TArray<float> MSDesiredBlendWeight;
			MSDesiredBlendWeight.Add(MaskBlendWeights[MaskIndex].MeshSpaceBlendAlpha);
			FAnimationRuntime::UpdateDesiredBoneWeight(AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights, AllBoneBlendWeights[MaskIndex].LocalSpaceCurrentBoneBlendWeights, LSDesiredBlendWeight);
			FAnimationRuntime::UpdateDesiredBoneWeight(AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights, AllBoneBlendWeights[MaskIndex].MeshSpaceCurrentBoneBlendWeights, MSDesiredBlendWeight);
			
			FAnimationRuntime::BlendTwoPosesTogether(AnimationPoseOneData, AnimationPoseTwoData, (1.0f - MaskBlendWeights[MaskIndex].OverrideAlpha), BlendedAnimationPoseData);

			FPoseContext MSCurrentPoseContext(AnimationPoseContext);
			MSCurrentPoseContext = CurrentPoseContext;
			if (FAnimWeight::IsRelevant(MaskBlendWeights[MaskIndex].LocalSpaceBlendAlpha))
			{
				LSTargetBlendPoses[0].MoveBonesFrom(CurrentPoseContext.Pose);
				LSTargetBlendCurves[0].MoveFrom(CurrentPoseContext.Curve);
				LSTargetBlendAttributes[0].MoveFrom(CurrentPoseContext.CustomAttributes);
				
			}
			else
			{
				LSTargetBlendPoses[0].ResetToRefPose(AnimationPoseContext.Pose.GetBoneContainer());
				LSTargetBlendCurves[0].InitFrom(Output.Curve);
			}
			
			if (FAnimWeight::IsRelevant(MaskBlendWeights[MaskIndex].MeshSpaceBlendAlpha))
			{
				MSTargetBlendPoses[0].MoveBonesFrom(MSCurrentPoseContext.Pose);
				MSTargetBlendCurves[0].MoveFrom(MSCurrentPoseContext.Curve);
				MSTargetBlendAttributes[0].MoveFrom(MSCurrentPoseContext.CustomAttributes);
			}
			else
			{
				MSTargetBlendPoses[0].ResetToRefPose(AnimationPoseContext.Pose.GetBoneContainer());
				MSTargetBlendCurves[0].InitFrom(Output.Curve);
			}
			
				// filter to make sure it only includes curves that is linked to the correct bone filter
				TArray<uint16> const* CurveUIDFinder = Output.Curve.UIDToArrayIndexLUT;
				const int32 TotalCount = Output.Curve.NumValidCurveCount;
				// now go through point to correct source indices. Curve only picks one source index
				for (int32 UIDIndex = 0; UIDIndex < CurveUIDFinder->Num(); ++UIDIndex)
				{
					int32 CurvePoseIndex = Output.Curve.GetArrayIndexByUID(UIDIndex);
					if (AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices.IsValidIndex(CurvePoseIndex))
					{
						int32 SourceIndex = AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices[CurvePoseIndex];
						if (SourceIndex != DEFAULT_SOURCEINDEX )
						{
							// if source index is set, clear base pose curve value
							AnimationPoseContext.Curve.Set(UIDIndex, 0.f);
							if (SourceIndex != 0)
							{
								// if not source, clear it
								LSTargetBlendCurves[0].Set(UIDIndex, 0.f);
							}
						
						}
					}
				}
			
			// now go through point to correct source indices. Curve only picks one source index
			for (int32 UIDIndex = 0; UIDIndex < CurveUIDFinder->Num(); ++UIDIndex)
			{
				int32 CurvePoseIndex = Output.Curve.GetArrayIndexByUID(UIDIndex);
				if (AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices.IsValidIndex(CurvePoseIndex))
				{
					int32 SourceIndex = AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices[CurvePoseIndex];
					if (SourceIndex != DEFAULT_SOURCEINDEX )
					{
						// if source index is set, clear base pose curve value
						AnimationPoseContext.Curve.Set(UIDIndex, 0.f);
						if (SourceIndex != 0)
						{
							// if not source, clear it
							MSTargetBlendCurves[0].Set(UIDIndex, 0.f);
						}
						
					}
				}
			}

			FAnimationRuntime::EBlendPosesPerBoneFilterFlags MSBlendFlags = FAnimationRuntime::EBlendPosesPerBoneFilterFlags::None;
			MSBlendFlags |= FAnimationRuntime::EBlendPosesPerBoneFilterFlags::MeshSpaceRotation;

			FAnimationRuntime::EBlendPosesPerBoneFilterFlags LSBlendFlags = FAnimationRuntime::EBlendPosesPerBoneFilterFlags::None;
			if(FAnimWeight::IsRelevant(MaskBlendWeights[MaskIndex].LocalSpaceBlendAlpha))
			{
				FAnimationPoseData AnimationPoseData(Output);
				FAnimationRuntime::BlendPosesPerBoneFilter(UpdatedAnimationPoseContext.Pose, LSTargetBlendPoses, UpdatedAnimationPoseContext.Curve, LSTargetBlendCurves, UpdatedAnimationPoseContext.CustomAttributes, LSTargetBlendAttributes, AnimationPoseData, AllBoneBlendWeights[MaskIndex].LocalSpaceCurrentBoneBlendWeights, LSBlendFlags, BlendMasks[MaskIndex].CurveBlendOption);
				UpdatedAnimationPoseContext = Output;
				UpdatedAnimationPoseContext.Pose.NormalizeRotations();
			}
			
			if(FAnimWeight::IsRelevant(MaskBlendWeights[MaskIndex].MeshSpaceBlendAlpha))
			{
				FAnimationPoseData MSAnimationPoseData(Output);
				FAnimationRuntime::BlendPosesPerBoneFilter(UpdatedAnimationPoseContext.Pose, MSTargetBlendPoses, UpdatedAnimationPoseContext.Curve, MSTargetBlendCurves, UpdatedAnimationPoseContext.CustomAttributes, MSTargetBlendAttributes, MSAnimationPoseData, AllBoneBlendWeights[MaskIndex].MeshSpaceCurrentBoneBlendWeights, MSBlendFlags, BlendMasks[MaskIndex].CurveBlendOption);
				UpdatedAnimationPoseContext = Output;
				UpdatedAnimationPoseContext.Pose.NormalizeRotations();
			}
		}
	}
	else
	{
		AnimationPose.Evaluate(Output);
	
	}
	
}

void FAnimNode_KLSMask::GatherDebugData(FNodeDebugData& DebugData)
{
	FAnimNode_Base::GatherDebugData(DebugData);
}

void FAnimNode_KLSMask::RebuildPerBoneBlendWeights(const USkeleton* InSkeleton)
{
	if(InSkeleton)
	{
		if(BlendMasks.Num() > 0)
		{
			PerBoneBlendWeights.SetNum(BlendMasks.Num());
			TArray<TObjectPtr<UBlendProfile>> CurrentBlendProfile;
			for(int32 Index = 0; Index < BlendMasks.Num(); ++Index)
			{
				if(BlendMasks[Index].BlendProfile && BlendMasks[Index].BlendProfile->IsBlendMask())
				{
					CurrentBlendProfile.Reset();
					CurrentBlendProfile.Add(BlendMasks[Index].BlendProfile);
					FAnimationRuntime::CreateMaskWeights(PerBoneBlendWeights[Index].PerBoneBlendWeights, CurrentBlendProfile, InSkeleton);
				}
				else
				{
					const FReferenceSkeleton& RefSkeleton = InSkeleton->GetReferenceSkeleton();
					const int32 NumBones = RefSkeleton.GetNum();
					PerBoneBlendWeights[Index].PerBoneBlendWeights.Reset(NumBones);
					// We only store non-zero weights in blend masks. Initialize all to zero.
					PerBoneBlendWeights[Index].PerBoneBlendWeights.AddZeroed(NumBones);
				}
				
			}
		}
		SkeletonGuid = InSkeleton->GetGuid();
		VirtualBoneGuid = InSkeleton->GetVirtualBoneGuid();
	}
}

bool FAnimNode_KLSMask::ArePerBoneBlendWeightsValid(const USkeleton* InSkeleton) const
{
	return (InSkeleton != nullptr && InSkeleton->GetGuid() == SkeletonGuid && InSkeleton->GetVirtualBoneGuid() == VirtualBoneGuid);
}

void FAnimNode_KLSMask::UpdateCachedBoneData(const FBoneContainer& RequiredBones, const USkeleton* Skeleton)
{
	if(RequiredBones.GetSerialNumber() == RequiredBonesSerialNumber)
	{
		return;
	}
	if(RequiredBones.GetBoneIndicesArray().Num() > 0)
	{
		if (!ArePerBoneBlendWeightsValid(Skeleton))
		{
			RebuildPerBoneBlendWeights(Skeleton);
		}
		for(int32 Index = 0; Index < BlendMasks.Num(); ++Index)
		{
			UpdateBodyPartCachedBoneData(RequiredBones,Skeleton,Index);
		}
		RequiredBonesSerialNumber = RequiredBones.GetSerialNumber();
	}
	
}

void FAnimNode_KLSMask::UpdateBodyPartCachedBoneData(const FBoneContainer& RequiredBones, const USkeleton* Skeleton, const int32 MaskIndex)
{
	
	const TArray<FBoneIndexType>& RequiredBoneIndices = RequiredBones.GetBoneIndicesArray();
	int32 NumRequiredBones = RequiredBoneIndices.Num();
	AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights.SetNumZeroed( NumRequiredBones);
	AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights.SetNumZeroed( NumRequiredBones);
	for (int32 RequiredBoneIndex=0; RequiredBoneIndex<NumRequiredBones; RequiredBoneIndex++)
	{
		const int32 SkeletonBoneIndex = RequiredBones.GetSkeletonIndex(FCompactPoseBoneIndex(RequiredBoneIndex));
		if (ensure(SkeletonBoneIndex != INDEX_NONE))
		{
			AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights[RequiredBoneIndex] = PerBoneBlendWeights[MaskIndex].PerBoneBlendWeights[SkeletonBoneIndex];
			AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights[RequiredBoneIndex] = PerBoneBlendWeights[MaskIndex].PerBoneBlendWeights[SkeletonBoneIndex];
		}
	}
	AllBoneBlendWeights[MaskIndex].LocalSpaceCurrentBoneBlendWeights.Reset(AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights.Num());
	AllBoneBlendWeights[MaskIndex].MeshSpaceCurrentBoneBlendWeights.Reset(AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights.Num());
	AllBoneBlendWeights[MaskIndex].LocalSpaceCurrentBoneBlendWeights.AddZeroed(AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights.Num());
	AllBoneBlendWeights[MaskIndex].MeshSpaceCurrentBoneBlendWeights.AddZeroed(AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights.Num());
	TArray<float> LSDesiredBlendWeight;
	LSDesiredBlendWeight.Add(MaskBlendWeights[MaskIndex].LocalSpaceBlendAlpha);
	TArray<float> MSDesiredBlendWeight;
	MSDesiredBlendWeight.Add(MaskBlendWeights[MaskIndex].MeshSpaceBlendAlpha);
	FAnimationRuntime::UpdateDesiredBoneWeight(AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights, AllBoneBlendWeights[MaskIndex].LocalSpaceCurrentBoneBlendWeights, LSDesiredBlendWeight);
	FAnimationRuntime::UpdateDesiredBoneWeight(AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights, AllBoneBlendWeights[MaskIndex].MeshSpaceCurrentBoneBlendWeights, MSDesiredBlendWeight);
	
	TArray<uint16> const& CurveUIDFinder = RequiredBones.GetUIDToArrayLookupTable();
	const int32 CurveUIDCount = CurveUIDFinder.Num();
	const int32 TotalCount = FBlendedCurve::GetValidElementCount(&CurveUIDFinder);
	if (TotalCount > 0)
	{
		AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices.Reset(TotalCount);
		AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices.Reset(TotalCount);
		// initialize with FF - which is default
		AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices.Init(DEFAULT_SOURCEINDEX, TotalCount);
		AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices.Init(DEFAULT_SOURCEINDEX, TotalCount);

		// now go through point to correct source indices. Curve only picks one source index
		for (int32 UIDIndex = 0; UIDIndex < CurveUIDCount; ++UIDIndex)
		{
			if (const int32 CurrentPoseIndex = CurveUIDFinder[UIDIndex]; CurrentPoseIndex != MAX_uint16)
			{
				const SmartName::UID_Type CurveUID = static_cast<SmartName::UID_Type>(UIDIndex);

				if (const FCurveMetaData* CurveMetaData = Skeleton->GetCurveMetaData(CurveUID))
				{
					const TArray<FBoneReference>& LinkedBones = CurveMetaData->LinkedBones;
					for (int32 LinkedBoneIndex = 0; LinkedBoneIndex < LinkedBones.Num(); ++LinkedBoneIndex)
					{
						FCompactPoseBoneIndex CompactPoseIndex = LinkedBones[LinkedBoneIndex].GetCompactPoseIndex(RequiredBones);
						if (CompactPoseIndex != INDEX_NONE)
						{
							if (AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights[CompactPoseIndex.GetInt()].BlendWeight > 0.f)
							{
								AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices[CurrentPoseIndex] = AllBoneBlendWeights[MaskIndex].LocalSpaceDesiredBoneBlendWeights[CompactPoseIndex.GetInt()].SourceIndex;
							}
							if (AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights[CompactPoseIndex.GetInt()].BlendWeight > 0.f)
							{
								AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices[CurrentPoseIndex] = AllBoneBlendWeights[MaskIndex].MeshSpaceDesiredBoneBlendWeights[CompactPoseIndex.GetInt()].SourceIndex;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		AllBoneBlendWeights[MaskIndex].LocalSpaceCurvePoseSourceIndices.Reset();
		AllBoneBlendWeights[MaskIndex].MeshSpaceCurvePoseSourceIndices.Reset();
	}

	
}

void FAnimNode_KLSMask::UpdateWeightsFromCurves(const USkeleton* Skeleton, const FPoseContext& DesiredCurvesPose, const int32 Index)
{
	if(BlendMasks[Index].WeightCurves.OverrideCurve != "None")
	{
		FSmartName CurveName;
		Skeleton->GetSmartNameByName(USkeleton::AnimCurveMappingName, BlendMasks[Index].WeightCurves.OverrideCurve, CurveName);
		MaskBlendWeights[Index].OverrideAlpha = DesiredCurvesPose.Curve.Get(CurveName.UID);
	}
	if(BlendMasks[Index].WeightCurves.AdditiveCurve != "None")
	{
		FSmartName CurveName;
		Skeleton->GetSmartNameByName(USkeleton::AnimCurveMappingName, BlendMasks[Index].WeightCurves.AdditiveCurve, CurveName);
		MaskBlendWeights[Index].AdditiveAlpha = DesiredCurvesPose.Curve.Get(CurveName.UID);
	}
	if(BlendMasks[Index].WeightCurves.LocalSpaceBlendCurve != "None")
	{
		FSmartName CurveName;
		Skeleton->GetSmartNameByName(USkeleton::AnimCurveMappingName, BlendMasks[Index].WeightCurves.LocalSpaceBlendCurve, CurveName);
		MaskBlendWeights[Index].LocalSpaceBlendAlpha = DesiredCurvesPose.Curve.Get(CurveName.UID);
	}
	if(BlendMasks[Index].WeightCurves.MeshSpaceBlendCurve != "None")
	{
		FSmartName CurveName;
		Skeleton->GetSmartNameByName(USkeleton::AnimCurveMappingName, BlendMasks[Index].WeightCurves.MeshSpaceBlendCurve, CurveName);
		MaskBlendWeights[Index].MeshSpaceBlendAlpha = DesiredCurvesPose.Curve.Get(CurveName.UID);
	}
}

void FAnimNode_KLSMask::MakeAdditivePose(FPoseContext& AdditivePose, FPoseContext& BasePose, const bool bMeshSpaceAdditive)
{
	
	if (bMeshSpaceAdditive)
	{
		FAnimationRuntime::ConvertPoseToMeshRotation(AdditivePose.Pose);
		FAnimationRuntime::ConvertPoseToMeshRotation(BasePose.Pose);
	}

	FAnimationRuntime::ConvertPoseToAdditive(AdditivePose.Pose, BasePose.Pose);
	AdditivePose.Curve.ConvertToAdditive(BasePose.Curve);

	UE::Anim::Attributes::ConvertToAdditive(BasePose.CustomAttributes, AdditivePose.CustomAttributes);
}

