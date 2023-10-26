//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "KLSCharacterData.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimationAsset.h"
#include "AlphaBlend.h"
#include "Curves/RichCurve.h"
#include "KLSAnimationData.generated.h"

struct FAlphaBlend;
struct FKLSLandSelectorInfo;
class UAnimSequence;
class UAnimSequenceBase;
class UBlendSpace1D;

#pragma region //(Anim Nodes Data)

USTRUCT(BlueprintType)
struct FFootPlacemenLegDefinitionNames
{
	GENERATED_BODY()

	FFootPlacemenLegDefinitionNames()
	          : FKFootBone("foot")
	          , IKFootBone("ik_foot_root")
	          , BallBone("ball")
	{
	}
	FFootPlacemenLegDefinitionNames(const FName& InFKFootBone, const FName& InIKFootBone, const FName& InBallBone)
			  : FKFootBone(InFKFootBone)
			  , IKFootBone(InIKFootBone)
			  , BallBone(InBallBone)
	{
	}
public:
	// Bone to be planted. For feet, use the heel/ankle joint.
	UPROPERTY(EditAnywhere, Category = "Settings")
	FName FKFootBone;
	
	UPROPERTY(EditAnywhere, Category = "Settings")
	FName IKFootBone;

	// Secondary plant bone. For feet, use the ball joint.
	UPROPERTY(EditAnywhere, Category = "Settings")
	FName BallBone;

	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 NumBonesInLimb = 2;

	// Name of the curve representing the foot/ball speed. Not required in Graph speed mode
	UPROPERTY(EditAnywhere, Category = "Settings")
	FName SpeedCurveName = NAME_None;

	// Name of the curve representing the alpha of the locking alpha.
	// This allows you to disable locking precisely, instead of relying on the procedural mechanism based on springs and foot analysis
	UPROPERTY(EditAnywhere, Category = "Settings")
	FName DisableLockCurveName = NAME_None;
	
};

USTRUCT(BlueprintType)
struct FStrideWarpingFootDefinitionName
{
	GENERATED_BODY()

	FStrideWarpingFootDefinitionName()
	: IKFootBone("ik_foot")
		 ,FKFootBone("foot")
		 ,ThighBone("thigh")
	{
	}

	FStrideWarpingFootDefinitionName(const FName& InIKFootBone,const FName& InFKFootBone , const FName& InThighBone)
		: IKFootBone(InIKFootBone)
	     ,FKFootBone(InFKFootBone)
	     ,ThighBone(InThighBone)
	{
	}
	// IK driven foot bone
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings, meta=(DisplayName="IK Foot Bone"))
	FName IKFootBone;

	// FK driven foot bone
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings, meta=(DisplayName="FK Foot Bone"))
	FName FKFootBone;

	// Thigh bone, representing the end of the leg chain prior to reaching the Pelvis Bone 
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	FName ThighBone;
};

USTRUCT(BlueprintType)
struct FAimOffsetBoneDefinition
{
	GENERATED_BODY()

	FAimOffsetBoneDefinition()
	{
	}

	FAimOffsetBoneDefinition(const FName& InBoneName , float InYawWeight,float InPitchWeight)
			: BoneName(InBoneName)
			, YawWeight(InYawWeight)
			, PitchWeight(InPitchWeight)
	{
	}
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName BoneName = "None";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	float YawWeight = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	float PitchWeight = 0.0f;
};

USTRUCT(BlueprintType)
struct FAimOffsetHandsDefinition
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName RightHandBoneName = "hand_r";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName LeftHandBoneName = "hand_l";
};

USTRUCT(BlueprintType)
struct FAimOffsetIKHandsDefinition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName HandGunBoneName = "ik_hand_gun";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName RightHandIKBoneName = "ik_hand_r";

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName LeftHandIKBoneName = "ik_hand_l";
};

USTRUCT()
struct FAimOffsetBone
{
	GENERATED_BODY()
	
	FAimOffsetBone()
			: Bone(FBoneReference())
			, YawWeight(0.0f)
			, PitchWeight(0.0f)
	{
	}

	FAimOffsetBone(const FBoneReference& InBoneReference,float InYawWeight, float InPitchWeight)
			: Bone(InBoneReference)
			, YawWeight(InYawWeight)
			, PitchWeight(InPitchWeight)
	{
	}
	
	FBoneReference Bone;
	
	float YawWeight = 0.0f;
	
	float PitchWeight = 0.0f;
};

USTRUCT(BlueprintType)
struct FAnimNodesBonesData
{
	GENERATED_BODY()

	FAnimNodesBonesData()
			: IKFootRootBone("ik_foot_root")
			, PelvisBone("pelvis")
			, AimOffsetBoneDefinitions({FAimOffsetBoneDefinition("spine_01",0.3,0.3)
				,FAimOffsetBoneDefinition("spine_02",0.3,0.3)
				,FAimOffsetBoneDefinition("spine_03",0.4,0.4)})
	       , StrideWarpingFeetDefinition({FStrideWarpingFootDefinitionName("ik_foot_r","foot_r","thigh_r")
	       	     ,FStrideWarpingFootDefinitionName("ik_foot_l","foot_l","thigh_l")})
	       , FootPlacemenLegsDefinitions({FFootPlacemenLegDefinitionNames("foot_r","ik_foot_r","ball_r")
	       	      ,FFootPlacemenLegDefinitionNames("foot_l","ik_foot_l","ball_l")})
	       , OrientationWarpingSpineBones({"spine_01","spine_02","spine_03","ik_hand_root"})
	       , IKFootBones({"ik_foot_r","ik_foot_l"})
	{
	}

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName IKFootRootBone;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FName PelvisBone;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Settings)
	FAimOffsetHandsDefinition AimOffsetHandsDefinition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	FAimOffsetIKHandsDefinition AimOffsetIKHandsDefinition;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	TArray<FAimOffsetBoneDefinition> AimOffsetBoneDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	TArray<FStrideWarpingFootDefinitionName> StrideWarpingFeetDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	TArray<FFootPlacemenLegDefinitionNames> FootPlacemenLegsDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings,meta=(tooltip = "Should Add IK Hand Root Bone To Spine Bones"))
	TArray<FName> OrientationWarpingSpineBones ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category=Settings)
	TArray<FName> IKFootBones ;
	
};
#pragma endregion 

#pragma region : Anim Nodes Data ( Copied From Random Player Node To Expose them to blueprint)

enum class EKLSRandomDataIndexType
{
	Current,
	Next,
};

/** The random player node holds a list of sequences and parameter ranges which will be played continuously
  * In a random order. If shuffle mode is enabled then each entry will be played once before repeating any
  */
USTRUCT(BlueprintType)
struct FKLSRandomPlayerSequenceEntry
{
	GENERATED_BODY()

	/** Sequence to play when this entry is picked */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TObjectPtr<UAnimSequence> Sequence;

	/** When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (UIMin = "0", ClampMin = "0"))
	float ChanceToPlay = 1;

	/** Minimum number of times this entry will loop before ending */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (UIMin = "0", ClampMin = "0"))
	int32 MinLoopCount = 0;

	/** Maximum number of times this entry will loop before ending */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (UIMin = "0", ClampMin = "0"))
	int32 MaxLoopCount = 0;

	/** Minimum playrate for this entry */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (UIMin = "0", ClampMin = "0"))
	float MinPlayRate = 1;

	/** Maximum playrate for this entry */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (UIMin = "0", ClampMin = "0"))
	float MaxPlayRate = 1;

	/** Blending properties used when this entry is blending in ontop of another entry */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
    FAlphaBlend BlendIn;

	void ResetBlend();
};

USTRUCT(BlueprintType)
struct FKLSRandomPlayerEntries
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TArray<FKLSRandomPlayerSequenceEntry> Entries;
};

USTRUCT()
struct FKLSRandomAnimPlayData
{

	GENERATED_BODY()

	// Index into the real sequence entry list, not the valid entry list.
	FKLSRandomPlayerSequenceEntry* Entry = nullptr;

	// The time at which the animation started playing. Used to initialize
	// the play for this animation and detect when a loop has occurred.
	float PlayStartTime = 0.0f;

	// The time at which the animation is currently playing.
	float CurrentPlayTime = 0.0f;

	// Delta time record for this play through
	FDeltaTimeRecord DeltaTimeRecord;

	// Calculated play rate
	float PlayRate = 0.0f;

	// Current blend weight
	float BlendWeight = 0.0f;

	// Calculated loops remaining
	int32 RemainingLoops = 0;

	// Marker tick record for this play through
	FMarkerTickRecord MarkerTickRecord;
};
#pragma endregion

#pragma region : Masking System

//Enums
UENUM(BlueprintType)
enum class EKLSAdditiveMode : uint8
{
	EMeshS UMETA(DisplayName = "MeshSpace"),
	ELocalS     UMETA(DisplayName = "LocalSpace"),
};

//Structs
USTRUCT(BlueprintType)
struct FKLSNodeMaskWeights
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config,meta=(ClampMin = "0.0" , ClampMax = "1.0") )
	float OverrideAlpha = 0.0f;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config ,meta=(ClampMin = "0.0" , ClampMax = "1.0"))
	float AdditiveAlpha = 0.0f;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config ,meta=(ClampMin = "0.0" , ClampMax = "1.0"))
	float MeshSpaceBlendAlpha = 1.0f;

	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category=Config ,meta=(ClampMin = "0.0" , ClampMax = "1.0"))
	float LocalSpaceBlendAlpha = 0.0f;
	
};

USTRUCT(BlueprintType)
struct FKLSMaskWeights
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves", meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float MaskWeight = 0;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves", meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float MaskAdditive = 0;
};

USTRUCT(BlueprintType)
struct FKLSArmMaskWeights
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	EKLSAdditiveMode ArmAdditiveMode = EKLSAdditiveMode::ELocalS;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights MaskWeights;

	UPROPERTY(BlueprintReadOnly,Category = "Mask Curves")
	float ArmMeshSpaceBlend = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "Mask Curves")
	float ArmLocalSpaceBlend = 0.0f;
};

USTRUCT(BlueprintType)
struct FKLSMaskingWeights
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights LegsWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights PelvisWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights SpineWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights HeadWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSArmMaskWeights RightArmWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights RightHandWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSArmMaskWeights LeftArmWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSMaskWeights LeftHandWeights;
	
};

USTRUCT(BlueprintType)
struct FKLSCapturedMaskingWeights
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights LegsWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights PelvisWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights SpineWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights HeadWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights RightArmWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights RightHandWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights LeftArmWeights;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Mask Curves")
	FKLSNodeMaskWeights LeftHandWeights;
	
};

USTRUCT(BlueprintType)
struct FKLSMaskAnimation
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	TObjectPtr<UAnimSequence> Animation;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	float MaskPoseTime = 0.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	FKLSMaskingWeights MaskingWeights;

	UPROPERTY(BlueprintReadOnly,Category = "Masking Curves", meta = (HideDefault))
	FKLSCapturedMaskingWeights Weights;

	UPROPERTY(BlueprintReadOnly,Category = "Masking Curves", meta = (HideDefault))
	TMap<FName,float> CurvesToModify;

	void CacheAdditiveCurves();

};

USTRUCT(BlueprintType)
struct FKLSGaitMask
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	FKLSMaskAnimation ForwardMask;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	FKLSMaskAnimation RightMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	FKLSMaskAnimation LeftMask;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	FKLSMaskAnimation BackwardMask;

	void CacheAdditiveCurves();

};

USTRUCT(BlueprintType)
struct FKLSMaskCurveNames
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLegsCurveName = "LegsMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLegsLocalSpaceCurveName = "LegsMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLegsMeshSpaceCurveName = "LegsMask_MS";
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLegsAddCurveName = "LegsMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskPelvisCurveName = "PelvisMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskPelvisLocalSpaceCurveName = "PelvisMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskPelvisMeshSpaceCurveName = "PelvisMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskPelvisAddCurveName = "PelvisMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskSpineCurveName = "SpineMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskSpineLocalSpaceCurveName = "SpineMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskSpineMeshSpaceCurveName = "SpineMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskSpineAddCurveName = "SpineMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskHeadCurveName = "HeadMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskHeadLocalSpaceCurveName = "HeadMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskHeadMeshSpaceCurveName = "HeadMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskHeadAddCurveName = "HeadMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskRightArmCurveName = "RightArmMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskRightArmAddCurveName = "RightArmMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName RightArmMeshSpaceCurveName = "RightArmMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName RightArmLocalSpaceCurveName = "RightArmMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLeftArmCurveName = "LeftArmMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLeftArmAddCurveName = "LeftArmMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName LeftArmMeshSpaceCurveName = "LeftArmMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName LeftArmLocalSpaceCurveName = "LeftArmMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName RightHandCurveName = "RightHandMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskRightHandAddCurveName = "RightHandMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName RightHandMeshSpaceCurveName = "RightHandMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName RightHandLocalSpaceCurveName = "RightHandMask_LS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName LeftHandCurveName = "LeftHandMask";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName MaskLeftHandAddCurveName = "LeftHandMask_Add";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName LeftHandMeshSpaceCurveName = "LeftHandMask_MS";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FName LeftHandLocalSpaceCurveName = "LeftHandMask_LS";

};

#pragma endregion

#pragma region : AimOffset Params
//Structs
USTRUCT(BlueprintType)
struct FKLSAimOffsetBone
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Bone")
	FName BoneName = "None";
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Bone", meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float BoneYawWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Bone", meta=(ClampMin = "0.0", ClampMax = "1.0"))
	float BonePitchWeight = 0.0f;
	
};
USTRUCT(BlueprintType)
struct FKLSAimOffsetChain
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Bone")
	FVector2D AimOffsetYawRange = {-130.0,130.0};
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Bones")
	TArray<FKLSAimOffsetBone> Chain;
};

#pragma endregion

#pragma region : Cache Curve Struct
///This Struct Hold An Animation Asset and 2 Curves
///That Are filled with Root Motion Data or Pre-existing animation curves
///When Data Asset Gets Saved,later Used For Distance And rotation matching
USTRUCT(BlueprintType)
struct FKLSAnimData
{
	GENERATED_BODY()
	
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	TObjectPtr<UAnimSequenceBase> Animation;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsRotatingAnim = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float RotateDirection = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsStopAnim = false;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float AverageSpeed = 0.0f;

	
	UPROPERTY()
	FRichCurve  DistanceCurve;

	UPROPERTY()
	FRichCurve  RotationCurve;
	

	//Used To Extract the Distance And Rotation From Root Motion in Animation
	void  CacheDistanceCurve(const float SampleRate);
	void  CacheDistanceCurveClamped( const float SampleRate, const float StartTime,const float EndTime);
	void  CacheRotationCurve(const float RotationDirection, const float SampleRate);
	void ExtractAverageSpeed();
    void CacheCurves(const float RotationDirection,const bool bIsStop,const bool bIsRotatingAnim);
	
	///*Get the time of the animation inside KLSAnimData struct that matches the Distance Value(Note:This is Clamped between 0 and animation length)
	float GetTimeAtDistance( const float Distance) const;
	///*Get the time of the animation inside KLSAnimData struct that matches the Rotation Value(Note:This is Clamped between 0 and animation length)
	float GetTimeAtRotation( const float Rotation) const;

	//Get the Curve Value From Given Time (Time is Clamped Between 0 and Animation Length)
	float GetDistCurveValue( const float Time) const;
	float GetRotationCurveValue( const float Time) const;
	void GetRotationCurveMinMaxValues(float& Min, float& Max) const;
	void GetDistanceCurveMinMaxValues(float& Min, float& Max) const;
	
};

//KLSAnimData Functions Used To Fill in The Distance And Rotation Curves.
USTRUCT(BlueprintType)
struct FKLSLoopAnim
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	TObjectPtr<UAnimSequence> Animation;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float AverageSpeed = 0.0f;
	
	void CacheCurves();
};

#pragma endregion

#pragma region : Data Asset Animation Sets Structs

USTRUCT(BlueprintType)
struct FKLSLandSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	TObjectPtr<UAnimSequenceBase> LandAnim;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	bool bPlayAsMontage = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (EditCondition = "!bPlayAsMontage" , ClampMin = "0.0", ClampMax = "1.0"), Category = "Movement")
	float WalkAdditiveAlpha = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (EditCondition = "!bPlayAsMontage", ClampMin = "0.0", ClampMax = "1.0"), Category = "Movement")
	float RunAdditiveAlpha = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (EditCondition = "!bPlayAsMontage", ClampMin = "0.0", ClampMax = "1.0"), Category = "Movement")
	float SprintAdditiveAlpha = 0.0f;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "bPlayAsMontage"), Category = "Animation")
	float BlendInTime = 0.25f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "bPlayAsMontage"),Category = "Animation")
	float BlendOutTime = 0.25f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "bPlayAsMontage"), Category = "Animation")
	float PlayRate = 1.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "bPlayAsMontage"), Category = "Animation")
	float BlendOutTriggerTime = -1.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "bPlayAsMontage"), Category = "Animation")
	float InTimeToStartMontageAt = 0.0f;

};

USTRUCT(BlueprintType)
struct FKLSJumpSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "General")
	bool CanBlendWithOtherSets = true;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	FKLSAnimData JumpAnimation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	float TakeOffTime = 0.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	float ApexStartTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	float ApexEndTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	float LandingTime = 0.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Jumping")
	TObjectPtr<UAnimSequence> FallLoop ;
	

};

USTRUCT(BlueprintType)
struct FKLSJumpSetData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	FKLSJumpSet JumpAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	FKLSJumpSet FallAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	TObjectPtr<UAnimSequence> FlailAnim;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float JumpAnimTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float ApexStartTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	float FallAnimTime = 0.0f;

	float LastFallAnimTime = 0.0f;
};



USTRUCT(BlueprintType)
struct FKLSDefaultAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Forward;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Right ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Left;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Backward ;
};

USTRUCT(BlueprintType)
struct FKLSRotatingAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Right_90;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Right_180;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Left_90 ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Left_180 ;
};

USTRUCT(BlueprintType)
struct FKLSTurnInPlaceAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Right_90;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData Left_90 ;
	
};

USTRUCT(BlueprintType)
struct FKLSPivotAnimSet
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSAnimData PrePivot;
	
	UPROPERTY()
	FKLSAnimData PostPivot;

	UPROPERTY()
	bool bIsSoftPivot = false;

	UPROPERTY()
	float PivotTime = 0.0f;
	
	float FindPivotTime(float SampleRate) const;

	void CachePivotSetCurves(const bool bIsRotatingAnim);
};

USTRUCT(BlueprintType)
struct FKLSRotatingPivotAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Right180RightFootUp;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Right180LeftFootUp;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Left180RightFootUp ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Left180LeftFootUp ;
};

USTRUCT(BlueprintType)
struct FKLSDefaultPivotAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Forward;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Right;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Left ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Movement")
	FKLSPivotAnimSet Backward ;
};

USTRUCT(BlueprintType)
struct FKLSForwardAndLeans
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Fwd;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim FwdLeanRight;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim FwdLeanLeft ;
};

USTRUCT(BlueprintType)
struct FKLSInAirSettings
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "State Setings",meta=(ToolTip="Minimum Distance to Ground to start predicting Landing Location and playing landing part of the jump if Landing Distance Is Higher Than This The Flailing Loop Will Trigger"))
	float MinDistanceToLand = 1500.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Rotation Settings",meta=(ToolTip="Rotation Interpolation Speed During Loop Animation State"))
	float RotationInterpSpeed = 10.0f;
};

USTRUCT(BlueprintType)
struct FKLSStandingSettings
{
	GENERATED_BODY()

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gait Entry Speeds",meta=(ToolTip="At The Speed And Under The Character Is Concidered Walking"))
	float WalkGaitEntrySpeed = 175.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gait Entry Speeds",meta=(ToolTip="At The Speed The Character Is Concidered Running , Will Blend With Sprint And Walk Animations InBetween Speeds"))
	float RunGaitEntrySpeed = 375.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Gait Entry Speeds",meta=(ToolTip="At The Speed or higher The Character Is Concidered Sprinting , Will Blend With Run if Speed is between Sprinting and Running"))
	float SprintGaitEntrySpeed = 500.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Distance Matching",meta=(ToolTip="Distance to stop location to consider character has stopped."))
	float StopDistanceThreshHold = 5.0f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rotation Settings",meta=(ToolTip="Rotation Interpolation Speed During Loop Animation State"))
	float WalkRotationInterpSpeed = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category = "Rotation Settings",meta=(ToolTip="Rotation Interpolation Speed During Loop Animation State"))
	float RunRotationInterpSpeed = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rotation Settings",meta=(ToolTip="Rotation Interpolation Speed During Loop Animation State"))
	float SprintRotationInterpSpeed = 10.0f;
};

USTRUCT(BlueprintType)
struct FKLSCrouchingSettings
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouching|Rotation Settings")
	float CrouchBlendInTime = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Crouching|Rotation Settings")
	float CrouchBlendOutTime = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Distance Matching",meta=(ToolTip="Distance to stop location to consider character has stopped."))
	float StopDistanceThreshHold = 5.0f;
	

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Rotation Settings",meta=(ToolTip="Rotation Interpolation Speed During Loop Animation State"))
	float RotationInterpSpeed = 10.0f;
};

USTRUCT(BlueprintType)
struct FKLSDataSettings
{
	GENERATED_BODY()
	
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FKLSStandingSettings StandingSettings;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FKLSCrouchingSettings CrouchingSettings;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settings")
	FKLSInAirSettings InAirSettings;
	
};
#pragma endregion 

#pragma region : Gait Movement Animations

USTRUCT(BlueprintType)
struct FKLSLocomotionIdleAndTurnInPlace
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Idle")
	TObjectPtr<UAnimSequence> IdleFrame ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Idle")
	FKLSRandomPlayerEntries IdleAdditives;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Aim Pose")
	FKLSMaskAnimation AimPose ;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	float AimBlendInTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category = "Animation")
	float AimBlendOutTime = 0.4f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Turn In Place|Animations")
	FKLSTurnInPlaceAnimSet TurnInPlaceAnims;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Turn In Place|Settings",meta=(ClampMin = 10.f, ClampMax = 90.f))
	float MinAngleToTriggerTIP = 60.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Turn In Place|Settings",meta=(ClampMin = 0.1f, ClampMax = 5.0f))
	float TurnInPlaceSpeed = 1.0f;
	
	void CacheTurnInPlaceCurves();

	
};

USTRUCT(BlueprintType)
struct FKLSGaitLoopsSet
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	float LeanIntensityMultiplier = 1.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations",meta=(EditCondition = "false"))
	float AverageSpeed = 0.0f;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSForwardAndLeans Forward;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Right;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Left ;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Backward ;

	void CacheGaitLoopsSpeed();

};

USTRUCT(BlueprintType)
struct FKLSCrouchLoopsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FVector2D PlayRateClamp = {0.75,1.25};

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FVector2D StrideScaleClamp = {0.1,1.25};

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations",meta=(EditCondition = "false"))
	float AverageSpeed = 0.0f;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSForwardAndLeans Forward;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	float LeanIntensityMultiplier = 3.0f;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Right;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Left ;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSLoopAnim Backward ;

	void CacheCrouchLoopsSpeed();

};

USTRUCT(BlueprintType)
struct FKLSGaitStartsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSDefaultAnimSet StrafeStarts;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	bool HasRotatingStarts = false;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "HasRotatingStarts"), Category = "Animations")
	FKLSRotatingAnimSet RotateStarts;

	void CacheGaitStartCurves();

};

USTRUCT(BlueprintType)
struct FKLSGaitStopsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSDefaultAnimSet RightFootUp;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	bool UsePerFootStop = false;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,meta = (EditCondition = "UsePerFootStop"), Category = "Animations")
	FKLSDefaultAnimSet LeftFootUp;

	void CacheGaitStopCurves();

};

USTRUCT(BlueprintType)
struct FKLSGaitPivotsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "HasAnimations?")
	bool HasStrafePivotAnimations = false;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "HasStrafePivotAnimations"),Category = "Animations")
	FKLSDefaultPivotAnimSet StrafePivots;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "HasAnimations?")
	bool HasRotatingPivots = false;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, meta = (EditCondition = "HasRotatingPivots"), Category = "Animations")
	FKLSRotatingPivotAnimSet RotatePivots;

	void CacheGaitPivotCurves();

};



USTRUCT(BlueprintType)
struct FKLSLoopsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FVector2D PlayRateClamp = {0.75,1.25};

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FVector2D StrideScaleClamp = {0.1,1.25};
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitLoopsSet Walk;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitLoopsSet Run;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitLoopsSet Sprint ;

	void CacheLoopsSpeed();
	
};

USTRUCT(BlueprintType)
struct FKLSStartsSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStartsSet Walk;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStartsSet Run;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStartsSet Sprint;

	void CacheStartCurves();

};

USTRUCT(BlueprintType)
struct FKLSStopSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStopsSet Walk;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStopsSet Run;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	FKLSGaitStopsSet Sprint;

	void CacheStopCurves();

};

USTRUCT(BlueprintType)
struct FKLSPivotSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	 FKLSGaitPivotsSet Walk;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	 FKLSGaitPivotsSet Run;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations")
	 FKLSGaitPivotsSet Sprint;

	void CachePivotCurves();

};


USTRUCT(BlueprintType)
struct FKLSStandingAnimations
{
	GENERATED_BODY()


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Standing|Idle ")
	FKLSLocomotionIdleAndTurnInPlace IdleAndTurnInPlace;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations|Loop")
	FKLSLoopsSet LoopAnimations;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations|Start")
	FKLSStartsSet StartAnimations;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations|Stop")
	FKLSStopSet StopAnimations;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations|Pivot")
	FKLSPivotSet PivotAnimations;
	
	void CacheGaitCurves();

};

//Jump Set//
USTRUCT(BlueprintType)
struct FKLSLocomotionJump
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "Movement")
	class UKLSCustomJumps* CustomJumpSelector = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement")
	TMap < FGameplayTag, FKLSJumpSet> JumpAnimations;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced, Category = "Landing")
	class UKLSCustomLand* CustomLandSelector = nullptr;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Landing")
	TMap < FGameplayTag, FKLSLandSet> LandAnimations;
	
	
	FKLSLandSet SelectLandAnimation(const FKLSLandSelectorInfo& LandSelectInfo);
};

//Settings
USTRUCT(BlueprintType)
struct FKLSCrouchAnimSet
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Crouch")
	FKLSLocomotionIdleAndTurnInPlace IdleAndTurnInPlace;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Animations|Loop")
	FKLSCrouchLoopsSet LoopAnimations;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Crouch")
	FKLSGaitStartsSet Starts;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Crouch")
	FKLSGaitStopsSet Stops;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Crouch")
	FKLSGaitPivotsSet Pivots;
	

	void CacheCrouchCurves();

};

#pragma endregion

#pragma region : Animation Blueprint Data

UENUM(BlueprintType)
enum class EKLSCustomRotationType : uint8
{
	EHold     UMETA(DisplayName = "Hold Rotation"),
	EInterpolate     UMETA(DisplayName = "Interpolate Rotation"),
	EAnimRot     UMETA(DisplayName = "Anim Rotation"),
	
	
};


USTRUCT(BlueprintType)
struct FKLSCustomRotationData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	bool UseCustomRotation = false;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float CustomRotationCurveWeight = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float StrafeHoldRotationWeight = 0.0f;
	

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float StrafeInterpRotationWeight = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	EKLSCustomRotationType CustomRotationType = EKLSCustomRotationType::EHold;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float CustomRotationYaw = 0.0f;

	FRotator AccelRotation = FRotator::ZeroRotator;
	FRotator ControlRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float StrafeRotationAlpha = 0.0f;

	UPROPERTY()
	float TotalRotationOffset = 0.0f;

	UPROPERTY()
	float ClampedRotationOffset = 0.0f;
	
	
};

USTRUCT(BlueprintType)
struct FKLSInterpolationSpeeds
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float WalkInterpSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float RunInterpSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float SprintInterpSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float CrouchInterpSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Custom Rotation")
	float InAirInterpSpeed = 0.0f;
	
};

UENUM(BlueprintType)
enum class EKLSGroundAnimState : uint8
{
	EIdle     UMETA(DisplayName = "Idle State"),
	EStart	 UMETA(DisplayName = "Start State"),
	EStop    UMETA(DisplayName = "Stop State"),
	EPrePivot     UMETA(DisplayName = "Pre Pivot State"),
	EPostPivot     UMETA(DisplayName = "Post Pivot State"),
	ELoop     UMETA(DisplayName = "Loop State"),
	ETurnInPlace     UMETA(DisplayName = "Turn In Place State"),
	ETurnInPlaceRecovery     UMETA(DisplayName = "Turn In Place Recovery State "),
};

UENUM(BlueprintType)
enum class EKLSInAirAnimState : uint8
{
	ENone  UMETA(DisplayName = "None"),
	EJump     UMETA(DisplayName = "Jump "),
	EFall	 UMETA(DisplayName = "Fall"),
};



USTRUCT(BlueprintType)
struct FKLSMaskCurveWeights
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskLegsWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskLegsAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskPelvisWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskPelvisAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskSpineWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskSpineAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskHeadWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskHeadAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskRightArmWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskRightArmAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float RightArmMeshSpaceWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float RightArmLocalSpaceWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskLeftArmWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float MaskLeftArmAddWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float LeftArmMeshSpaceWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float LeftArmLocalSpaceWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float RightHandWeight = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	float LeftHandWeight = 0.0f;

};

USTRUCT(BlueprintType)
struct FKLSAnimCurveNames
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Base Curves")
	FName SpeedCurve = "KLSSpeed";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Base Curves")
	FName JumpStateWeightCurve = "KLSJumpWeight";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Base Curves")
	FName PivotAlphaCurve = "KLSPivotAlpha";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Base Curves")
	FName SpeedGaitCurve = "KLSGaitAlpha";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Curves")
	FName GroundedCurve = "KLSGrounded";

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Base Curves")
	FName TurnInPlaceCurve = "KLSTurnInPlace";

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Base Curves")
	FName LeftFootUpCurve = "KLSLeftFootUp";
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mask Curves")
	FKLSMaskCurveNames MaskCurveNames;
	
};






USTRUCT(BlueprintType)
struct FKLSAnimationInfo
{
	GENERATED_BODY()
	
	

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float AnimPlayRate = 0.0f;
	
	float PlayRateAlpha = 0.0f;

	//----------------------//
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	FKLSAnimData AnimationData;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	EKLSSpeedGait EntrySpeedGait = EKLSSpeedGait::EWalk;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	EKLSCardinalDirection EntryCardinalDirection = EKLSCardinalDirection::EFwd;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float FirstStepAlpha = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float StrideWarpingAlpha = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float OrientationWarpingAlpha = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float AnimTime = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float AnimStartPosition = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float AnimEndPosition = 0.0f; 

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float AnimTimeElapsed = 0.0f;
	//Rotation Matching data
	
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float TargetAngle = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float CurrentAccelDir = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float EntryAccelDir = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float EntryRotYaw = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	float DesiredYaw = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	bool AnimHasRotationLeft = true;

	UPROPERTY(BlueprintReadWrite, Category = "Animation")
	bool LeftFootUp = false;

	bool FirstUpdate = true;
	
};

USTRUCT(BlueprintType)
struct FKLSGroundedAnimationSet
{
	GENERATED_BODY()
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo TurnInPlaceAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo TurnInPlaceRecoveryAnim;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo StartAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo StopAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSPivotAnimSet PivotSet;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo Pre_PivotAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSAnimationInfo Post_PivotAnim;

};

USTRUCT(BlueprintType)
struct FKLSAnimationSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSGroundedAnimationSet StandingAnimSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSGroundedAnimationSet CrouchingAnimSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSJumpSetData JumpSetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSJumpSetData NextJumpSetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSLandSet Jump_Land;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	FKLSLandSet NextJump_Land;

};
#pragma endregion
