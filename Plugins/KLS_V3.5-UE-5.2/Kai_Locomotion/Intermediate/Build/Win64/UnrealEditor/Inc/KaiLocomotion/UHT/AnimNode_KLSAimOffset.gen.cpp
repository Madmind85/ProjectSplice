// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSAimOffset.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSAimOffset() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAimOffsetBoneDefinition();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAimOffsetHandsDefinition();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAimOffsetIKHandsDefinition();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_KLSAimOffset>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KLSAimOffset cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset;
class UScriptStruct* FAnimNode_KLSAimOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSAimOffset"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSAimOffset>()
{
	return FAnimNode_KLSAimOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinYawRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinYawRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxYawRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxYawRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableHandIKCorrection_MetaData[];
#endif
		static void NewProp_EnableHandIKCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableHandIKCorrection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffsetBonesNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetBonesNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AimOffsetBonesNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandBones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKHandBones_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKHandBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_YawRotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PitchRotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSAimOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The desired AimOffset Yaw (in degrees) \n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The desired AimOffset Yaw (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawAngle = { "YawAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, YawAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The desired AimOffset Pitch (in degrees) \n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The desired AimOffset Pitch (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchAngle = { "PitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, PitchAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MinYawRotation_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-180.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MinYawRotation = { "MinYawRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, MinYawRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MinYawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MinYawRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MaxYawRotation_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MaxYawRotation = { "MaxYawRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, MaxYawRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MaxYawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MaxYawRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Turn On Or Off Hand Ik Correction,\n// When Spine Bone Rotate For Yaw And Pitch We need to Set The IK Hand Bones Transforms To Actual Hands Transforms\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "ToolTip", "Turn On Or Off Hand Ik Correction,\nWhen Spine Bone Rotate For Yaw And Pitch We need to Set The IK Hand Bones Transforms To Actual Hands Transforms" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection_SetBit(void* Obj)
	{
		((FAnimNode_KLSAimOffset*)Obj)->EnableHandIKCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection = { "EnableHandIKCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSAimOffset), &Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames_Inner = { "AimOffsetBonesNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAimOffsetBoneDefinition, METADATA_PARAMS(nullptr, 0) }; // 36746976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// AimOffset Bones definitions\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "AimOffset Bones definitions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames = { "AimOffsetBonesNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, AimOffsetBonesNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames_MetaData)) }; // 36746976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_HandBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Spine bone definitions\n" },
		{ "EditCondition", "EnableHandIKCorrection" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spine bone definitions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_HandBones = { "HandBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, HandBones), Z_Construct_UScriptStruct_FAimOffsetHandsDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_HandBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_HandBones_MetaData)) }; // 2351092413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_IKHandBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "EnableHandIKCorrection" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_IKHandBones = { "IKHandBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, IKHandBones), Z_Construct_UScriptStruct_FAimOffsetIKHandsDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_IKHandBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_IKHandBones_MetaData)) }; // 1960864916
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Rotation axis used when rotating the character body\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "ToolTip", "Rotation axis used when rotating the character body" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawRotationAxis = { "YawRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, YawRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawRotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Rotation axis used when rotating the character body\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "ToolTip", "Rotation axis used when rotating the character body" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchRotationAxis = { "PitchRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, PitchRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchRotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\n// A value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSAimOffset.h" },
		{ "ToolTip", "Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\nA value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSAimOffset, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_RotationInterpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MinYawRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_MaxYawRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_EnableHandIKCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_AimOffsetBonesNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_HandBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_IKHandBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_YawRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_PitchRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewProp_RotationInterpSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KLSAimOffset",
		sizeof(FAnimNode_KLSAimOffset),
		alignof(FAnimNode_KLSAimOffset),
		Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSAimOffset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSAimOffset_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_KLSAimOffset::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset_Statics::NewStructOps, TEXT("AnimNode_KLSAimOffset"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSAimOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSAimOffset), 1518290128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSAimOffset_h_2271339024(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSAimOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSAimOffset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
