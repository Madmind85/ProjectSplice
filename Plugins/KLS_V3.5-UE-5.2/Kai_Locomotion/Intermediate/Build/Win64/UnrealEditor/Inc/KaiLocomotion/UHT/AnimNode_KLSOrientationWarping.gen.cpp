// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSOrientationWarping.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSOrientationWarping() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_KLSOrientationWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KLSOrientationWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping;
class UScriptStruct* FAnimNode_KLSOrientationWarping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSOrientationWarping"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSOrientationWarping>()
{
	return FAnimNode_KLSOrientationWarping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRootMotionSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRootMotionSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAngleDeltaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionAngleDeltaThreshold;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpineBonesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBonesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineBonesNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootRootBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootBonesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBonesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKFootBonesNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKFootBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributedBoneOrientationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributedBoneOrientationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpingAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetAngle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSOrientationWarping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Orientation warping evaluation mode (Graph or Manual)\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Orientation warping evaluation mode (Graph or Manual)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, Mode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode_MetaData)) }; // 2839837007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OrientationAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The desired orientation angle (in degrees) to warp by relative to the specified RotationAxis\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The desired orientation angle (in degrees) to warp by relative to the specified RotationAxis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OrientationAngle = { "OrientationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, OrientationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OrientationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OrientationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The character locomotion angle (in degrees) relative to the specified RotationAxis\n// This will be used in the following equation for computing the orientation angle: [Orientation = RotationBetween(RootMotionDirection, LocomotionDirection)]\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The character locomotion angle (in degrees) relative to the specified RotationAxis\nThis will be used in the following equation for computing the orientation angle: [Orientation = RotationBetween(RootMotionDirection, LocomotionDirection)]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngle = { "LocomotionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, LocomotionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Minimum root motion speed required to apply orientation warping\n// This is useful to prevent unnatural re-orientation when the animation has a portion with no root motion (i.e starts/stops/idles)\n// When this value is greater than 0, it's recommended to enable interpolation with RotationInterpSpeed > 0\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Minimum root motion speed required to apply orientation warping\nThis is useful to prevent unnatural re-orientation when the animation has a portion with no root motion (i.e starts/stops/idles)\nWhen this value is greater than 0, it's recommended to enable interpolation with RotationInterpSpeed > 0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold = { "MinRootMotionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, MinRootMotionSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies an angle threshold to prevent erroneous over-rotation of the character, disabled with a value of 0\n//\n// When the effective orientation warping angle is detected to be greater than this value (default: 90 degrees) the locomotion direction will be inverted prior to warping\n// This will be used in the following equation: [Orientation = RotationBetween(RootMotionDirection, -LocomotionDirection)]\n//\n// Example: Playing a forward running animation while the motion is going backward \n// Rather than orientation warping by 180 degrees, the system will warp by 0 degrees \n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Specifies an angle threshold to prevent erroneous over-rotation of the character, disabled with a value of 0\n\nWhen the effective orientation warping angle is detected to be greater than this value (default: 90 degrees) the locomotion direction will be inverted prior to warping\nThis will be used in the following equation: [Orientation = RotationBetween(RootMotionDirection, -LocomotionDirection)]\n\nExample: Playing a forward running animation while the motion is going backward\nRather than orientation warping by 180 degrees, the system will warp by 0 degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold = { "LocomotionAngleDeltaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, LocomotionAngleDeltaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames_Inner = { "SpineBonesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Spine bone definitions\n// Used to counter rotate the body in order to keep the character facing forward\n// The amount of counter rotation applied is driven by DistributedBoneOrientationAlpha\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spine bone definitions\nUsed to counter rotate the body in order to keep the character facing forward\nThe amount of counter rotation applied is driven by DistributedBoneOrientationAlpha" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames = { "SpineBonesNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, SpineBonesNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// IK Foot Root Bone definition\n" },
		{ "DisplayName", "IK Foot Root Bone" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "IK Foot Root Bone definition" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBoneName = { "IKFootRootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, IKFootRootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames_Inner = { "IKFootBonesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// IK Foot definitions\n" },
		{ "DisplayName", "IK Foot Bones" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "IK Foot definitions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames = { "IKFootBonesNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, IKFootBonesNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones_Inner = { "IKFootBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones = { "IKFootBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, IKFootBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Rotation axis used when rotating the character body\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Rotation axis used when rotating the character body" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, RotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how much rotation is applied to the character body versus IK feet\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Specifies how much rotation is applied to the character body versus IK feet" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha = { "DistributedBoneOrientationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, DistributedBoneOrientationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\n// A value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\nA value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_WarpingAlpha_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_WarpingAlpha = { "WarpingAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, WarpingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_WarpingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_WarpingAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MaxOffsetAngle = { "MaxOffsetAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, MaxOffsetAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DebugDrawScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale all debug drawing visualization by a factor\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Scale all debug drawing visualization by a factor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DebugDrawScale = { "DebugDrawScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSOrientationWarping, DebugDrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DebugDrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DebugDrawScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable orientation warping debug drawing\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSOrientationWarping.h" },
		{ "ToolTip", "Enable/Disable orientation warping debug drawing" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_KLSOrientationWarping*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSOrientationWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OrientationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBonesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_SpineBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBonesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_IKFootBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_WarpingAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_OffsetAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_MaxOffsetAngle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_DebugDrawScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewProp_bEnableDebugDraw,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KLSOrientationWarping",
		sizeof(FAnimNode_KLSOrientationWarping),
		alignof(FAnimNode_KLSOrientationWarping),
		Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSOrientationWarping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSOrientationWarping_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_KLSOrientationWarping::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping_Statics::NewStructOps, TEXT("AnimNode_KLSOrientationWarping"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSOrientationWarping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSOrientationWarping), 666715964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSOrientationWarping_h_2990864882(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSOrientationWarping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSOrientationWarping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
