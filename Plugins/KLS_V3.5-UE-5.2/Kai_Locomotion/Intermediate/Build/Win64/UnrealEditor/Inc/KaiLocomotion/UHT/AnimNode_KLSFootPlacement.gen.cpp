// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSFootPlacement.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "BoneControllers/AnimNode_FootPlacement.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSFootPlacement() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacemenLegDefinition();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPelvisSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPlantSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementTraceSettings();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacemenLegDefinitionNames();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_KLSFootPlacement>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KLSFootPlacement cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement;
class UScriptStruct* FAnimNode_KLSFootPlacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSFootPlacement"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSFootPlacement>()
{
	return FAnimNode_KLSFootPlacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlantSpeedMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantSpeedMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlantSpeedMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKFootRootBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TheLegDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheLegDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TheLegDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlantSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSFootPlacement>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Foot/Ball speed evaluation mode (Graph or Manual) used to decide when the feet are locked\n// Graph mode uses the root motion attribute from the animations to calculate the joint's speed\n// Manual mode uses a per-foot curve name representing the joint's speed\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "ToolTip", "Foot/Ball speed evaluation mode (Graph or Manual) used to decide when the feet are locked\nGraph mode uses the root motion attribute from the animations to calculate the joint's speed\nManual mode uses a per-foot curve name representing the joint's speed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode = { "PlantSpeedMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, PlantSpeedMode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode_MetaData)) }; // 2839837007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBoneName = { "IKFootRootBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, IKFootRootBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, PelvisBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisSettings = { "PelvisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, PelvisSettings), Z_Construct_UScriptStruct_FFootPlacementPelvisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisSettings_MetaData)) }; // 2220535668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions_Inner = { "TheLegDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFootPlacemenLegDefinitionNames, METADATA_PARAMS(nullptr, 0) }; // 1789676665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions = { "TheLegDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, TheLegDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions_MetaData)) }; // 1789676665
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions_Inner = { "LegDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFootPlacemenLegDefinition, METADATA_PARAMS(nullptr, 0) }; // 2441074594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions = { "LegDefinitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, LegDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions_MetaData)) }; // 2441074594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSettings = { "PlantSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, PlantSettings), Z_Construct_UScriptStruct_FFootPlacementPlantSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSettings_MetaData)) }; // 2459428730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, InterpolationSettings), Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_InterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_InterpolationSettings_MetaData)) }; // 3321071715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TraceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSFootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TraceSettings = { "TraceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSFootPlacement, TraceSettings), Z_Construct_UScriptStruct_FFootPlacementTraceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TraceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TraceSettings_MetaData)) }; // 3577104452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSpeedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_IKFootRootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PelvisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TheLegDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_LegDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_PlantSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_InterpolationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewProp_TraceSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KLSFootPlacement",
		sizeof(FAnimNode_KLSFootPlacement),
		alignof(FAnimNode_KLSFootPlacement),
		Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSFootPlacement_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSFootPlacement_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_KLSFootPlacement::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSFootPlacement_Statics::NewStructOps, TEXT("AnimNode_KLSFootPlacement"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSFootPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSFootPlacement), 4207260914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSFootPlacement_h_922971556(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSFootPlacement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSFootPlacement_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
