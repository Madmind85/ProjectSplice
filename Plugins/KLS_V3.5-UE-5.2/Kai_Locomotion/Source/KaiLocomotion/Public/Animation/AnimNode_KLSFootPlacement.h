// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "BoneControllers/BoneControllerTypes.h"
#include "Data/KLSAnimationData.h"
#include "BoneControllers/AnimNode_FootPlacement.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Animation/AnimNodeBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"

#include "AnimNode_KLSFootPlacement.generated.h"

namespace UE::Anim::KLSFootPlacement
{
	enum class EPlantType
	{
		Unplanted,
		Planted,
		Replanted
	};

	struct FLegRuntimeData
	{
		int32 Idx = -1;

		// Bone information that can be cached once per-lod change.
		struct FBoneData
		{
			FCompactPoseBoneIndex FKIndex = FCompactPoseBoneIndex(INDEX_NONE);
			FCompactPoseBoneIndex BallIndex = FCompactPoseBoneIndex(INDEX_NONE);
			FCompactPoseBoneIndex IKIndex = FCompactPoseBoneIndex(INDEX_NONE);
			FCompactPoseBoneIndex HipIndex = FCompactPoseBoneIndex(INDEX_NONE);
			float LimbLength = 0.0f;
			float FootLength = 0.0f;
		} Bones;

		// Curves
		SmartName::UID_Type SpeedCurveUID = SmartName::MaxUID;
		SmartName::UID_Type DisableLockCurveUID = SmartName::MaxUID;

		// Helper struct to store values coming directly, or trivial to calculate from just the input pose.
		struct FInputPoseData
		{
			FTransform FootTransformCS = FTransform::Identity;
			FTransform BallTransformCS = FTransform::Identity;
			FTransform HipTransformCS = FTransform::Identity;
			FTransform BallToFoot = FTransform::Identity;
			FTransform FootToBall = FTransform::Identity;
#if ENABLE_ANIM_DEBUG
			// These are only used for debug draw at the moment
			// @TODO: Use this info to more precisely figure out foot dimensions
			FTransform FootToGround = FTransform::Identity;
			FTransform BallToGround = FTransform::Identity;
#endif
			float Speed = 0.0f;
			float LockAlpha = 0.0f;
			float DistanceToPlant = 0.0f;
			// Calculated from a range of toe speeds to define when to blend in/out ground rotational alignment
			// @TODO: When we have prediction/phase info, replac with roll-phase alpha
			float AlignmentAlpha = 0.0f;
		} InputPose;

		/* Ground */

		struct FPlantData
		{
			UE::Anim::KLSFootPlacement::EPlantType PlantType = UE::Anim::KLSFootPlacement::EPlantType::Unplanted;
			UE::Anim::KLSFootPlacement::EPlantType LastPlantType = UE::Anim::KLSFootPlacement::EPlantType::Unplanted;
			FPlane PlantPlaneWS = FPlane(FVector::UpVector, 0.0f);
			FPlane PlantPlaneCS = FPlane(FVector::UpVector, 0.0f);
			FQuat TwistCorrection = FQuat::Identity;
			// @TODO: When we have prediction/phase info, replace use-cases with post-plant roll-phase
			float TimeSinceFullyUnaligned = 0.0f;
			// Whether the planted/locked target has ever been reachable this plant
			bool bCanReachTarget = false;
			// Whether we want to plant, independently from any dynamic pose adjustments we may do
			bool bWantsToPlant = false;
		} Plant;
		
		// Ground-aligned, locked/unlocked bone transform pre-extension adjustments
		FTransform AlignedFootTransformWS = FTransform::Identity;
		FTransform AlignedFootTransformCS = FTransform::Identity;
		// Foot locked/unlocked bone transform, before ground alignment
		FTransform UnalignedFootTransformWS = FTransform::Identity;
		
		/* Interpolation */
		struct FInterpolationData
		{
			// Interpolated foot lock offset
			FTransform UnalignedFootOffsetCS = FTransform::Identity;
			// Foot lock pring states
			FVectorSpringState PlantOffsetTranslationSpringState;
			FQuaternionSpringState PlantOffsetRotationSpringState;
			// Ground alignment spring states
			FFloatSpringState GroundHeightSpringState;
			FQuaternionSpringState GroundRotationSpringState;
		} Interpolation;
	};

	struct FPlantRuntimeSettings
	{
		float UnplantRadiusSqrd = 0.0f;
		float ReplantRadiusSqrd = 0.0f;
		float CosHalfUnplantAngle = 0.0f;
		float CosHalfReplantAngle = 0.0f;
	};

	struct FPelvisRuntimeData
	{
		/* Bone IDs */
		struct FBones
		{
			FCompactPoseBoneIndex FkBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
			FCompactPoseBoneIndex IkBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
		} Bones;

		/* Settings-based properties */
		float MaxOffsetSqrd = 0.0f;

		/* Input pose properties */
		struct FInputPoseData
		{
			FTransform FKTransformCS = FTransform::Identity;
			FTransform IKRootTransformCS = FTransform::Identity;
			FTransform RootTransformCS = FTransform::Identity;
			FVector FootMidpointCS = FVector::ZeroVector;
		} InputPose;

		/* Interpolation */
		struct FInterpolationData
		{
			// Current pelvis offset and spring states. We use a 3d vector because this interpolates weight rebalancing too.
			FVector PelvisTranslationOffset = FVector::ZeroVector;
			FVectorSpringState PelvisTranslationSpringState;
		} Interpolation;
	};

	struct FCharacterData
	{
		FTransform ComponentTransformWS = FTransform::Identity;
		FVector ComponentVelocityCS = FVector::ZeroVector;
		bool bIsOnGround = false;
	};

	// Final result after post-adjustments (extension checks, heel lift, etc.)
	struct FPlantResult
	{
	public:
		FBoneTransform FootTranformCS;
		// @TODO: Add procedural toe rolling
		//FBoneTransform BallTransformCS;
		// @TODO: Look into shifting/rotating the hips to prevent over-extension, and give IK an easier time.
		//FBoneTransform HipTransformCS;
	};

#if ENABLE_ANIM_DEBUG
	struct FDebugData
	{
		FVector OutputPelvisLocationWS = FVector::ZeroVector;
		FVector InputPelvisLocationWS = FVector::ZeroVector;

		TArray<FVector> OutputFootLocationsWS;
		TArray<FVector> InputFootLocationsWS;

		struct FLegInfo
		{
			float HyperExtensionAmount;
			float RollAmount;
			float PullAmount;
			float DistanceToSeparatingPlane;
		};
		TArray<FLegInfo> LegsInfo;

		void Init(const int32 InSize)
		{
			OutputFootLocationsWS.SetNumUninitialized(InSize);
			InputFootLocationsWS.SetNumUninitialized(InSize);
			LegsInfo.SetNumUninitialized(InSize);
		}
	};
#endif

	struct FEvaluationContext;
}



USTRUCT(BlueprintInternalUseOnly, Experimental)
struct KAILOCOMOTION_API FAnimNode_KLSFootPlacement : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()

public:

	// Foot/Ball speed evaluation mode (Graph or Manual) used to decide when the feet are locked
	// Graph mode uses the root motion attribute from the animations to calculate the joint's speed
	// Manual mode uses a per-foot curve name representing the joint's speed
	UPROPERTY(EditAnywhere, Category = "Settings")
	EWarpingEvaluationMode PlantSpeedMode = EWarpingEvaluationMode::Manual;

	UPROPERTY()
	FBoneReference IKFootRootBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FName IKFootRootBoneName = "ik_foot_root";

	UPROPERTY()
	FBoneReference PelvisBone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FName PelvisBoneName = "pelvis";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FFootPlacementPelvisSettings PelvisSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	TArray<FFootPlacemenLegDefinitionNames> TheLegDefinitions;

	UPROPERTY()
	TArray<FFootPlacemenLegDefinition> LegDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FFootPlacementPlantSettings PlantSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FFootPlacementInterpolationSettings InterpolationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (PinHiddenByDefault))
	FFootPlacementTraceSettings TraceSettings;

public:
	FAnimNode_KLSFootPlacement();

	// FAnimNode_Base interface
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface

	// FAnimNode_SkeletalControlBase interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(
		FComponentSpacePoseContext& Output, 
		TArray<FBoneTransform>& OutBoneTransforms) override;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
	// End of FAnimNode_SkeletalControlBase

private:
	// FAnimNode_SkeletalControlBase interface
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	// End of FAnimNode_SkeletalControlBase interface

	

	
	// Gather raw or trivially calculated values from input pose
	void GatherPelvisDataFromInputs(const UE::Anim::KLSFootPlacement::FEvaluationContext& Context);
	void GatherLegDataFromInputs(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		UE::Anim::KLSFootPlacement::FLegRuntimeData& LegData,
		const FFootPlacemenLegDefinition& LegDef);

	void CalculateFootMidpoint(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		TConstArrayView<UE::Anim::KLSFootPlacement::FLegRuntimeData> LegData,
		FVector& OutMidpoint) const;

	// Calculate procedural adjustments before solving the desired pelvis position
	void ProcessCharacterState(const UE::Anim::KLSFootPlacement::FEvaluationContext& Context);
	void ProcessFootAlignment(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		UE::Anim::KLSFootPlacement::FLegRuntimeData& LegData);

	// Calculate the desired pelvis offset, based on procedural character/foot adjustments
	FTransform SolvePelvis(const UE::Anim::KLSFootPlacement::FEvaluationContext& Context);
	TBitArray<> FindRelevantFeet(const UE::Anim::KLSFootPlacement::FEvaluationContext& Context);
	TBitArray<> FindPlantedFeet(const UE::Anim::KLSFootPlacement::FEvaluationContext& Context);
	FTransform UpdatePelvisInterpolation(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const FTransform& TargetPelvisTransform);

	// Post-processing adjustments + fix hyper-extension/compression
	UE::Anim::KLSFootPlacement::FPlantResult FinalizeFootAlignment(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		UE::Anim::KLSFootPlacement::FLegRuntimeData& LegData,
		const FFootPlacemenLegDefinition& LegDef,
		const FTransform& PelvisTransformCS);

	FVector GetApproachDirWS(const FAnimationBaseContext& Context) const;

private:
	float CachedDeltaTime = 0.0f;
	FVector LastComponentLocation = FVector::ZeroVector;

	TArray<UE::Anim::KLSFootPlacement::FLegRuntimeData> LegsData;
	UE::Anim::KLSFootPlacement::FPlantRuntimeSettings PlantRuntimeSettings;
	UE::Anim::KLSFootPlacement::FPelvisRuntimeData PelvisData;
	UE::Anim::KLSFootPlacement::FCharacterData CharacterData;

	// Whether we want to plant, independently from any dynamic pose adjustments we may do
	bool WantsToPlant(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose) const;

	// Get Alignment Alpha based on current foot speed
	// 0.0 is fully unaligned and the foot is in flight.
	// 1.0 is fully aligned and the foot is planted.
	float GetAlignmentAlpha(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose) const;

	// This function looks at both the foot bone and the ball bone, returning the smallest distance to the
	// planting plane. Note this distance can be negative, meaning it's penetrating.
	float CalcTargetPlantPlaneDistance(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose) const;

	struct FPelvisOffsetRangeForLimb
	{
		float MaxExtension;
		float MinExtension;
		float DesiredExtension;
	};

	// Find the horizontal pelvis offset range for the foot to reach:
	void FindPelvisOffsetRangeForLimb(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData& LegData,
		const FVector& PlantTargetLocationCS,
		const FTransform& PelvisTransformCS,
		FPelvisOffsetRangeForLimb& OutPelvisOffsetRangeCS) const;

	// Adjust LastPlantTransformWS to current, to have the foot pivot around the ball instead of the ankle
	FTransform GetFootPivotAroundBallWS(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose,
		const FTransform& LastPlantTransformWS) const;

	// Align the transform the provided world space ground plant plane.
	// Also outputs the twist along the ground plane needed to get there
	void AlignPlantToGround(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const FPlane& PlantPlaneWS,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose,
		FTransform& InOutFootTransformWS,
		FQuat& OutTwistCorrection) const;

	// Handles horizontal interpolation when unlocking the plant
	FTransform UpdatePlantOffsetInterpolation(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		UE::Anim::KLSFootPlacement::FLegRuntimeData::FInterpolationData& InOutInterpData,
		const FTransform& DesiredTransformCS) const;

	// Handles the interpolation of the planting plane. Because the plant transform is specified with respect to the 
	// planting plane, it cannot change abruptly without causing an animation pop. It must be interpolated instead.
	void UpdatePlantingPlaneInterpolation(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const FTransform& FootTransformWS,
		const FTransform& LastAlignedFootTransform,
		const float AlignmentAlpha,
		FPlane& InOutPlantPlane,
		UE::Anim::KLSFootPlacement::FLegRuntimeData::FInterpolationData& InOutInterpData) const;

	// Checks unplanting and replanting conditions to determine if the foot is planted
	void DeterminePlantType(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const FTransform& FKTransformWS,
		const FTransform& CurrentBoneTransformWS,
		UE::Anim::KLSFootPlacement::FLegRuntimeData::FPlantData& InOutPlantData,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData::FInputPoseData& LegInputPose) const;
	
	float GetMaxLimbExtension(const float DesiredExtension, const float LimbLength) const;
	float GetMinLimbExtension(const float DesiredExtension, const float LimbLength) const;

	void ResetRuntimeData();

#if ENABLE_ANIM_DEBUG
	UE::Anim::KLSFootPlacement::FDebugData DebugData;
	void DrawDebug(
		const UE::Anim::KLSFootPlacement::FEvaluationContext& Context,
		const UE::Anim::KLSFootPlacement::FLegRuntimeData& LegData,
		const UE::Anim::KLSFootPlacement::FPlantResult& PlantResult) const;
#endif

	bool bIsFirstUpdate = false;
	FGraphTraversalCounter UpdateCounter;
};
