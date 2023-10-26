// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "Data/KLSAnimationData.h"
#include "AnimNode_KLSAimOffset.generated.h"




USTRUCT(BlueprintInternalUseOnly)
struct KAILOCOMOTION_API FAnimNode_KLSAimOffset : public FAnimNode_SkeletalControlBase
{
	GENERATED_BODY()
	

	// The desired AimOffset Yaw (in degrees) 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Evaluation, meta=(PinShownByDefault))
	float YawAngle = 0.f;

	// The desired AimOffset Pitch (in degrees) 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Evaluation, meta=(PinShownByDefault))
	float PitchAngle = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Evaluation, meta=(PinHiddenByDefault), meta=(ClampMin="-180.0", ClampMax="0.0"))
	float MinYawRotation = -135;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Evaluation, meta=(PinHiddenByDefault), meta=(ClampMin="0.0", ClampMax="180.0"))
	float MaxYawRotation = 135;

	// Turn On Or Off Hand Ik Correction,
	// When Spine Bone Rotate For Yaw And Pitch We need to Set The IK Hand Bones Transforms To Actual Hands Transforms
	UPROPERTY(EditAnywhere, Category=Settings)
	bool EnableHandIKCorrection = true;
	
	// AimOffset Bones definitions
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings, meta=(PinHiddenByDefault))
	TArray<FAimOffsetBoneDefinition> AimOffsetBonesNames;

	// Spine bone definitions
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings, meta=(PinHiddenByDefault),meta=(EditCondition = "EnableHandIKCorrection"))
	FAimOffsetHandsDefinition HandBones;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings, meta=(PinHiddenByDefault),meta=(EditCondition = "EnableHandIKCorrection"))
	FAimOffsetIKHandsDefinition IKHandBones;
	
	//spine Bones references
	TArray<FAimOffsetBone> SpineBones;
	
	// Hand bones References
	FBoneReference RightHandBone;
	FBoneReference LeftHandBone;
	
	FBoneReference HandGunBone;
	FBoneReference RightHandIKBone;
	FBoneReference LeftHandIKBone;
	

	// Rotation axis used when rotating the character body
	UPROPERTY(EditAnywhere, Category=Settings)
	TEnumAsByte<EAxis::Type> YawRotationAxis = EAxis::Z;

	// Rotation axis used when rotating the character body
	UPROPERTY(EditAnywhere, Category=Settings)
	TEnumAsByte<EAxis::Type> PitchRotationAxis = EAxis::X;

	

	// Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle
	// A value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing
	UPROPERTY(EditAnywhere, Category=Settings, meta=(ClampMin="0.0"))
	float RotationInterpSpeed = 3.f;

public:
	// FAnimNode_Base interface
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;
	// End of FAnimNode_Base interface

	// FAnimNode_SkeletalControlBase interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones) override;
	// End of FAnimNode_SkeletalControlBase interface

private:
	// FAnimNode_SkeletalControlBase interface
	virtual void InitializeBoneReferences(const FBoneContainer& RequiredBones) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	// End of FAnimNode_SkeletalControlBase interface

	struct FAimOffsetBoneData
	{
		FCompactPoseBoneIndex BoneIndex;
		float YawWeight;
		float PitchWeight;

		FAimOffsetBoneData()
			: BoneIndex(INDEX_NONE)
			, YawWeight(0.f)
		    , PitchWeight(0.f)
		{
		}

		FAimOffsetBoneData(FCompactPoseBoneIndex InBoneIndex)
			: BoneIndex(InBoneIndex)
		    , YawWeight(0.f)
		    , PitchWeight(0.f)
		{
		}
		FAimOffsetBoneData(FCompactPoseBoneIndex InBoneIndex,float InYawWeight, float InPitchWeight)
			: BoneIndex(InBoneIndex)
			, YawWeight(InYawWeight)
			, PitchWeight(InPitchWeight)
		{
		}

		// Comparison Operator for Sorting
		struct FCompareBoneIndex
		{
			FORCEINLINE bool operator()(const FAimOffsetBoneData& A, const FAimOffsetBoneData& B) const
			{
				return A.BoneIndex < B.BoneIndex;
			}
		};
	};
	

	// Computed spine bone indices and alpha weights for the specified spine definition 
	TArray<FAimOffsetBoneData> SpineBoneDataArray;

	// Hand Bone Indexes 
	FCompactPoseBoneIndex RightHandBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
	FCompactPoseBoneIndex LeftHandBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
	FCompactPoseBoneIndex HandGunBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
	FCompactPoseBoneIndex RightHandIKBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
	FCompactPoseBoneIndex LeftHandIKBoneIndex = FCompactPoseBoneIndex(INDEX_NONE);
	
	// Final Yaw After Clamp And Interpolation
	float ActualYawAngle = 0.f;
	
	float InternalYaw = 0.f;
	float InternalPitch = 0.f;

	//Yaw Interpolation 
	float PositiveYaw = 0.f;
	float PositiveYawAlpha = 0.f;
	float NegativeYaw = 0.f;
	float NegativeYawAlpha = 0.f;

	float GetFinalYawValue(const float DeltaTime ,const float Yaw);
	
	bool bCorrectHandIK = true;

	FGraphTraversalCounter UpdateCounter;
	bool bIsFirstUpdate = false;
	void Reset(const FAnimationBaseContext& Context);
	
};