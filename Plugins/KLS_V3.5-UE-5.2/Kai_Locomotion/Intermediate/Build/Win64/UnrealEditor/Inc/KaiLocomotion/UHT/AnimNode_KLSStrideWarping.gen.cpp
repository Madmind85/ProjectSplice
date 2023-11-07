// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSStrideWarping.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "BoneControllers/AnimNode_StrideWarping.h"
#include "BoneControllers/BoneControllerSolvers.h"
#include "BoneControllers/BoneControllerTypes.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSStrideWarping() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStrideWarpingFootDefinition();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWarpingVectorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputClampConstants();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FStrideWarpingFootDefinitionName();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_KLSStrideWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KLSStrideWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping;
class UScriptStruct* FAnimNode_KLSStrideWarping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSStrideWarping"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSStrideWarping>()
{
	return FAnimNode_KLSStrideWarping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrideDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrideScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRootMotionSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRootMotionSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootRootBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootDefinitionsNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootDefinitionsNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FootDefinitionsNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrideScaleModifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrideScaleModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorNormalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorNormalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisIKFootSolver_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisIKFootSolver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientStrideDirectionUsingFloorNormal_MetaData[];
#endif
		static void NewProp_bOrientStrideDirectionUsingFloorNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientStrideDirectionUsingFloorNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompensateIKUsingFKThighRotation_MetaData[];
#endif
		static void NewProp_bCompensateIKUsingFKThighRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompensateIKUsingFKThighRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampIKUsingFKLimits_MetaData[];
#endif
		static void NewProp_bClampIKUsingFKLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampIKUsingFKLimits;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawIKFootOrigin_MetaData[];
#endif
		static void NewProp_bDebugDrawIKFootOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawIKFootOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawIKFootAdjustment_MetaData[];
#endif
		static void NewProp_bDebugDrawIKFootAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawIKFootAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawPelvisAdjustment_MetaData[];
#endif
		static void NewProp_bDebugDrawPelvisAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawPelvisAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawThighAdjustment_MetaData[];
#endif
		static void NewProp_bDebugDrawThighAdjustment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawThighAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawIKFootFinal_MetaData[];
#endif
		static void NewProp_bDebugDrawIKFootFinal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawIKFootFinal;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSStrideWarping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Stride warping evaluation mode (Graph or Manual)\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Stride warping evaluation mode (Graph or Manual)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, Mode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode_MetaData)) }; // 2839837007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideDirection_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Component-space stride direction\n// Example: A value of <1,0,0> will warp the leg stride along the Forward Vector\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Component-space stride direction\nExample: A value of <1,0,0> will warp the leg stride along the Forward Vector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideDirection = { "StrideDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, StrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScale_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Stride scale, specifying the amount of warping applied to the foot definitions\n// Example: A value of 0.5 will decrease the effective leg stride by half, while a value of 2.0 will double it\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Stride scale, specifying the amount of warping applied to the foot definitions\nExample: A value of 0.5 will decrease the effective leg stride by half, while a value of 2.0 will double it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScale = { "StrideScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, StrideScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_LocomotionSpeed_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Locomotion speed, specifying the current speed of the character\n// This will be used in the following equation for computing the stride scale: [StrideScale = (LocomotionSpeed / RootMotionSpeed)]\n// Note: This speed should be relative to the delta time of the animation graph\n// \n// Stride scale is a value specifying the amount of warping applied to the IK foot definitions\n// Example: A value of 0.5 will decrease the effective leg stride by half, while a value of 2.0 will double it\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Locomotion speed, specifying the current speed of the character\nThis will be used in the following equation for computing the stride scale: [StrideScale = (LocomotionSpeed / RootMotionSpeed)]\nNote: This speed should be relative to the delta time of the animation graph\n\nStride scale is a value specifying the amount of warping applied to the IK foot definitions\nExample: A value of 0.5 will decrease the effective leg stride by half, while a value of 2.0 will double it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_LocomotionSpeed = { "LocomotionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, LocomotionSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_LocomotionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_LocomotionSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "// Minimum root motion speed required to apply stride warping\n// This is useful to prevent unnatural strides when the animation has a portion with no root motion (i.e starts/stops)\n// When this value is greater than 0, it's recommended to enable interpolation in StrideScaleModifier\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Minimum root motion speed required to apply stride warping\nThis is useful to prevent unnatural strides when the animation has a portion with no root motion (i.e starts/stops)\nWhen this value is greater than 0, it's recommended to enable interpolation in StrideScaleModifier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_MinRootMotionSpeedThreshold = { "MinRootMotionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, MinRootMotionSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Pelvis Bone definition\n" },
		{ "DisplayName", "Pelvis Bone" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Pelvis Bone definition" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, PelvisBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// IK Foot Root Bone definition\n" },
		{ "DisplayName", "IK Foot Root Bone" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "IK Foot Root Bone definition" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBoneName = { "IKFootRootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, IKFootRootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions_Inner = { "FootDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStrideWarpingFootDefinition, METADATA_PARAMS(nullptr, 0) }; // 1961555036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions_MetaData[] = {
		{ "Comment", "// Foot definitions specifying the IK, FK, and Thigh bone\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Foot definitions specifying the IK, FK, and Thigh bone" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions = { "FootDefinitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, FootDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions_MetaData)) }; // 1961555036
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames_Inner = { "FootDefinitionsNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStrideWarpingFootDefinitionName, METADATA_PARAMS(nullptr, 0) }; // 1590097821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Foot Definitions" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames = { "FootDefinitionsNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, FootDefinitionsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames_MetaData)) }; // 1590097821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScaleModifier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Modifies the final stride scale value by optionally clamping and/or interpolating\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Modifies the final stride scale value by optionally clamping and/or interpolating" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScaleModifier = { "StrideScaleModifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, StrideScaleModifier), Z_Construct_UScriptStruct_FInputClampConstants, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScaleModifier_MetaData)) }; // 1464509394
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FloorNormalDirection_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Floor normal direction, this value will internally convert into a corresponding Component-space representation prior to warping\n// Default: World Space, Up Vector: <0,0,1>\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Floor normal direction, this value will internally convert into a corresponding Component-space representation prior to warping\nDefault: World Space, Up Vector: <0,0,1>" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FloorNormalDirection = { "FloorNormalDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, FloorNormalDirection), Z_Construct_UScriptStruct_FWarpingVectorValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FloorNormalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FloorNormalDirection_MetaData)) }; // 100054685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_GravityDirection_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Gravity direction, this value will internally convert into a corresponding Component-space representation prior to warping\n// Default: World Space, Down Vector: <0,0,-1>\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Gravity direction, this value will internally convert into a corresponding Component-space representation prior to warping\nDefault: World Space, Down Vector: <0,0,-1>" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_GravityDirection = { "GravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, GravityDirection), Z_Construct_UScriptStruct_FWarpingVectorValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_GravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_GravityDirection_MetaData)) }; // 100054685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisIKFootSolver_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Solver for controlling how much the pelvis is \"pulled down\" towards the IK/FK foot definitions during leg limb extension\n" },
		{ "DisplayName", "Pelvis IK Foot Solver" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Solver for controlling how much the pelvis is \"pulled down\" towards the IK/FK foot definitions during leg limb extension" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisIKFootSolver = { "PelvisIKFootSolver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, PelvisIKFootSolver), Z_Construct_UScriptStruct_FIKFootPelvisPullDownSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisIKFootSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisIKFootSolver_MetaData)) }; // 1463223084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Orients the specified (Manual) or computed (Graph) stride direction by the floor normal\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Orients the specified (Manual) or computed (Graph) stride direction by the floor normal" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bOrientStrideDirectionUsingFloorNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal = { "bOrientStrideDirectionUsingFloorNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Include warping adjustment to the FK thigh bones alongside the IK/FK foot definitions\n// This is used to help preserve the original overall leg shape\n" },
		{ "DisplayName", "Compensate IK Using FK Thigh Rotation" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Include warping adjustment to the FK thigh bones alongside the IK/FK foot definitions\nThis is used to help preserve the original overall leg shape" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bCompensateIKUsingFKThighRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation = { "bCompensateIKUsingFKThighRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "// Clamps the IK foot warping to prevent over-extension relative to the overall FK leg\n" },
		{ "DisplayName", "Clamp IK Using FK Limits" },
		{ "EditCondition", "bCompensateIKUsingFKThighRotation" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Clamps the IK foot warping to prevent over-extension relative to the overall FK leg" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bClampIKUsingFKLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits = { "bClampIKUsingFKLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_DebugDrawScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale all debug drawing visualization by a factor\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Scale all debug drawing visualization by a factor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_DebugDrawScale = { "DebugDrawScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSStrideWarping, DebugDrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_DebugDrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_DebugDrawScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable stride warping debug drawing\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable stride warping debug drawing" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable IK foot location debug drawing prior to warping\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable IK foot location debug drawing prior to warping" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bDebugDrawIKFootOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin = { "bDebugDrawIKFootOrigin", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable IK foot location debug drawing following initial foot adjustment\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable IK foot location debug drawing following initial foot adjustment" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bDebugDrawIKFootAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment = { "bDebugDrawIKFootAdjustment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable pelvis debug drawing following adjustment\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable pelvis debug drawing following adjustment" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bDebugDrawPelvisAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment = { "bDebugDrawPelvisAdjustment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable thigh debug drawing following adjustment\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable thigh debug drawing following adjustment" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bDebugDrawThighAdjustment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment = { "bDebugDrawThighAdjustment", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable IK foot location debug drawing following all adsjustments (Final warped result)\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSStrideWarping.h" },
		{ "ToolTip", "Enable/Disable IK foot location debug drawing following all adsjustments (Final warped result)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal_SetBit(void* Obj)
	{
		((FAnimNode_KLSStrideWarping*)Obj)->bDebugDrawIKFootFinal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal = { "bDebugDrawIKFootFinal", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSStrideWarping), &Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_LocomotionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_MinRootMotionSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FootDefinitionsNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_StrideScaleModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_FloorNormalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_GravityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_PelvisIKFootSolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bOrientStrideDirectionUsingFloorNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bCompensateIKUsingFKThighRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bClampIKUsingFKLimits,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_DebugDrawScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bEnableDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawPelvisAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawThighAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewProp_bDebugDrawIKFootFinal,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KLSStrideWarping",
		sizeof(FAnimNode_KLSStrideWarping),
		alignof(FAnimNode_KLSStrideWarping),
		Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSStrideWarping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSStrideWarping_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_KLSStrideWarping::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSStrideWarping_Statics::NewStructOps, TEXT("AnimNode_KLSStrideWarping"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSStrideWarping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSStrideWarping), 118938185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSStrideWarping_h_3492225926(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSStrideWarping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSStrideWarping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
