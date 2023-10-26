// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimNode_SlotCustom.h"
#include "AnimNodes/AnimNode_MakeDynamicAdditive.h"
#include "Data/KLSAnimationData.h"
#include "AnimNode_KLSMask.generated.h"

/**
 * 
 */

USTRUCT(BlueprintInternalUseOnly)
struct FKLSWeightCurves
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	FName OverrideCurve = "None";

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	FName AdditiveCurve = "None";

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	FName LocalSpaceBlendCurve = "None";

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	FName MeshSpaceBlendCurve = "None";
	
};


USTRUCT(BlueprintInternalUseOnly)
struct FKLSMaskSettings
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	FName BlendProfileName = "None";
	
	UPROPERTY()
	TObjectPtr<UBlendProfile> BlendProfile = nullptr;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	bool UseMeshSpaceAdditive = false;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config )
	bool AddSlot = false;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config ,meta=(EditCondition="AddSlot"))
	FName SlotName = FAnimSlotGroup::DefaultSlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Config)
	FKLSWeightCurves WeightCurves;
	
	/** How to blend the layers together */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Config)
	TEnumAsByte<ECurveBlendOption::Type>CurveBlendOption = ECurveBlendOption::Override;


	//Slot To Add If Needed
	FAnimNode_SlotCustom Slot;
};

USTRUCT(BlueprintInternalUseOnly)
struct FKLSPerBoneWeights
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FPerBoneBlendWeight> LocalSpaceDesiredBoneBlendWeights;

	UPROPERTY()
	TArray<FPerBoneBlendWeight> MeshSpaceDesiredBoneBlendWeights;

	UPROPERTY()
	TArray<FPerBoneBlendWeight> LocalSpaceCurrentBoneBlendWeights;

	UPROPERTY()
	TArray<FPerBoneBlendWeight> MeshSpaceCurrentBoneBlendWeights;

	UPROPERTY()
	TArray<uint8> LocalSpaceCurvePoseSourceIndices;

	UPROPERTY()
	TArray<uint8> MeshSpaceCurvePoseSourceIndices;
	
};

USTRUCT(BlueprintInternalUseOnly)
struct FKLSPerBoneBlendWeights
{
	GENERATED_BODY()
	
	UPROPERTY()
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights;
	
};



USTRUCT(BlueprintInternalUseOnly)
struct KAILOCOMOTION_API FAnimNode_KLSMask : public FAnimNode_Base
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Links)
	FPoseLink AnimationPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Links)
	FPoseLink MaskPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Links)
	FPoseLink BaseAdditivePose;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category=Config )
	TArray<FKLSMaskSettings> BlendMasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Runtime, meta=(PinShownByDefault))
	TArray<FKLSNodeMaskWeights> MaskBlendWeights;

	bool bHasRelevantPoses;

	/*
	  * Max LOD that this node is allowed to run
	 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
	 * when the component LOD becomes 3, it will stop update/evaluate
	 * currently transition would be issue and that has to be re-visited
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Performance, meta = (DisplayName = "LOD Threshold"))
	int32 LODThreshold;

	// transient data to handle weight and target weight
	// this array changes based on required bones
	UPROPERTY()
	TArray<FKLSPerBoneWeights> AllBoneBlendWeights;
	
protected:
	
	
	// Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially
	// be regenerated at runtime if the GUIDs dont match
	
	UPROPERTY()
	TArray<FKLSPerBoneBlendWeights>	PerBoneBlendWeights;

	// Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding
	UPROPERTY()
	FGuid SkeletonGuid;

	// Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding
	UPROPERTY()
	FGuid VirtualBoneGuid;
	
	
	// Serial number of the required bones container
	uint16 RequiredBonesSerialNumber;


	
	
	
public:
	
	FAnimNode_KLSMask()
	: bHasRelevantPoses(false)
	, LODThreshold(INDEX_NONE)
	, RequiredBonesSerialNumber(0)
	{
	}

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual int32 GetLODThreshold() const override { return LODThreshold; }

	// Invalidate the cached per-bone blend weights from the skeleton
	void InvalidatePerBoneBlendWeights() { RequiredBonesSerialNumber = 0; SkeletonGuid = FGuid(); VirtualBoneGuid = FGuid(); }
	
	// Invalidates the cached bone data so it is recalculated the next time this node is updated
	void InvalidateCachedBoneData() { RequiredBonesSerialNumber = 0; }



private:
	// Rebuild cache per bone blend weights from the skeleton
	void RebuildPerBoneBlendWeights(const USkeleton* InSkeleton);

	// Check whether per-bone blend weights are valid according to the skeleton (GUID check)
	bool ArePerBoneBlendWeightsValid(const USkeleton* InSkeleton) const;

	// Update cached data if required
	void UpdateCachedBoneData(const FBoneContainer& RequiredBones, const USkeleton* Skeleton);

	void UpdateBodyPartCachedBoneData(const FBoneContainer& RequiredBones, const USkeleton* Skeleton, const int32 MaskIndex);

	void UpdateWeightsFromCurves(const USkeleton* Skeleton, const FPoseContext& DesiredCurvesPose, const int32 Index);

	static void MakeAdditivePose(FPoseContext& AdditivePose,FPoseContext& BasePose, const bool bMeshSpaceAdditive);

	friend class UAnimGraphNode_KLSMask;
};

