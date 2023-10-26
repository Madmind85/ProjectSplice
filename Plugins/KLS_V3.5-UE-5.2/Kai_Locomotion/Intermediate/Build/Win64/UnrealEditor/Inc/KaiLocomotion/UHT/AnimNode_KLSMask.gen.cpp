// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSMask.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSMask() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSMask();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSMaskSettings();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSNodeMaskWeights();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSPerBoneWeights();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSWeightCurves();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSWeightCurves;
class UScriptStruct* FKLSWeightCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSWeightCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSWeightCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSWeightCurves, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSWeightCurves"));
	}
	return Z_Registration_Info_UScriptStruct_KLSWeightCurves.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSWeightCurves>()
{
	return FKLSWeightCurves::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSWeightCurves_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideCurve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AdditiveCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpaceBlendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LocalSpaceBlendCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpaceBlendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MeshSpaceBlendCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSWeightCurves>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_OverrideCurve_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_OverrideCurve = { "OverrideCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSWeightCurves, OverrideCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_OverrideCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_OverrideCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_AdditiveCurve_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_AdditiveCurve = { "AdditiveCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSWeightCurves, AdditiveCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_AdditiveCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_AdditiveCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_LocalSpaceBlendCurve_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_LocalSpaceBlendCurve = { "LocalSpaceBlendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSWeightCurves, LocalSpaceBlendCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_LocalSpaceBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_LocalSpaceBlendCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_MeshSpaceBlendCurve_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_MeshSpaceBlendCurve = { "MeshSpaceBlendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSWeightCurves, MeshSpaceBlendCurve), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_MeshSpaceBlendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_MeshSpaceBlendCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_OverrideCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_AdditiveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_LocalSpaceBlendCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewProp_MeshSpaceBlendCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSWeightCurves",
		sizeof(FKLSWeightCurves),
		alignof(FKLSWeightCurves),
		Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSWeightCurves()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSWeightCurves.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSWeightCurves.InnerSingleton, Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSWeightCurves.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSMaskSettings;
class UScriptStruct* FKLSMaskSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSMaskSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSMaskSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSMaskSettings, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSMaskSettings"));
	}
	return Z_Registration_Info_UScriptStruct_KLSMaskSettings.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSMaskSettings>()
{
	return FKLSMaskSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSMaskSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlendProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMeshSpaceAdditive_MetaData[];
#endif
		static void NewProp_UseMeshSpaceAdditive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMeshSpaceAdditive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddSlot_MetaData[];
#endif
		static void NewProp_AddSlot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSMaskSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfileName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfileName = { "BlendProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSMaskSettings, BlendProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSMaskSettings, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive_SetBit(void* Obj)
	{
		((FKLSMaskSettings*)Obj)->UseMeshSpaceAdditive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive = { "UseMeshSpaceAdditive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSMaskSettings), &Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot_SetBit(void* Obj)
	{
		((FKLSMaskSettings*)Obj)->AddSlot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot = { "AddSlot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSMaskSettings), &Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Config" },
		{ "EditCondition", "AddSlot" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSMaskSettings, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_WeightCurves_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_WeightCurves = { "WeightCurves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSMaskSettings, WeightCurves), Z_Construct_UScriptStruct_FKLSWeightCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_WeightCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_WeightCurves_MetaData)) }; // 897746619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_CurveBlendOption_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** How to blend the layers together */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "How to blend the layers together" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSMaskSettings, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_CurveBlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_CurveBlendOption_MetaData)) }; // 138824138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_UseMeshSpaceAdditive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_AddSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_WeightCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewProp_CurveBlendOption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSMaskSettings",
		sizeof(FKLSMaskSettings),
		alignof(FKLSMaskSettings),
		Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSMaskSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSMaskSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSMaskSettings.InnerSingleton, Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSMaskSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSPerBoneWeights;
class UScriptStruct* FKLSPerBoneWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSPerBoneWeights, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSPerBoneWeights"));
	}
	return Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSPerBoneWeights>()
{
	return FKLSPerBoneWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpaceDesiredBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpaceDesiredBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpaceDesiredBoneBlendWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSpaceDesiredBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpaceDesiredBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSpaceDesiredBoneBlendWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpaceCurrentBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpaceCurrentBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpaceCurrentBoneBlendWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSpaceCurrentBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpaceCurrentBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSpaceCurrentBoneBlendWeights;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocalSpaceCurvePoseSourceIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpaceCurvePoseSourceIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpaceCurvePoseSourceIndices;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshSpaceCurvePoseSourceIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpaceCurvePoseSourceIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSpaceCurvePoseSourceIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSPerBoneWeights>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights_Inner = { "LocalSpaceDesiredBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights = { "LocalSpaceDesiredBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, LocalSpaceDesiredBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights_Inner = { "MeshSpaceDesiredBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights = { "MeshSpaceDesiredBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, MeshSpaceDesiredBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights_Inner = { "LocalSpaceCurrentBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights = { "LocalSpaceCurrentBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, LocalSpaceCurrentBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights_Inner = { "MeshSpaceCurrentBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights = { "MeshSpaceCurrentBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, MeshSpaceCurrentBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices_Inner = { "LocalSpaceCurvePoseSourceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices = { "LocalSpaceCurvePoseSourceIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, LocalSpaceCurvePoseSourceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices_Inner = { "MeshSpaceCurvePoseSourceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices = { "MeshSpaceCurvePoseSourceIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneWeights, MeshSpaceCurvePoseSourceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceDesiredBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceDesiredBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurrentBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurrentBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_LocalSpaceCurvePoseSourceIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewProp_MeshSpaceCurvePoseSourceIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSPerBoneWeights",
		sizeof(FKLSPerBoneWeights),
		alignof(FKLSPerBoneWeights),
		Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSPerBoneWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.InnerSingleton, Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSPerBoneWeights.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights;
class UScriptStruct* FKLSPerBoneBlendWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSPerBoneBlendWeights"));
	}
	return Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSPerBoneBlendWeights>()
{
	return FKLSPerBoneBlendWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSPerBoneBlendWeights>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSPerBoneBlendWeights, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewProp_PerBoneBlendWeights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSPerBoneBlendWeights",
		sizeof(FKLSPerBoneBlendWeights),
		alignof(FKLSPerBoneBlendWeights),
		Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.InnerSingleton, Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_KLSMask>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_KLSMask cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSMask;
class UScriptStruct* FAnimNode_KLSMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSMask, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSMask"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSMask>()
{
	return FAnimNode_KLSMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaskPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAdditivePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAdditivePose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendMasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaskBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaskBlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBoneBlendWeights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AnimationPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AnimationPose = { "AnimationPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, AnimationPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AnimationPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AnimationPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskPose = { "MaskPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, MaskPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BaseAdditivePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BaseAdditivePose = { "BaseAdditivePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, BaseAdditivePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BaseAdditivePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BaseAdditivePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks_Inner = { "BlendMasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKLSMaskSettings, METADATA_PARAMS(nullptr, 0) }; // 362885909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks = { "BlendMasks", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, BlendMasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks_MetaData)) }; // 362885909
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights_Inner = { "MaskBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKLSNodeMaskWeights, METADATA_PARAMS(nullptr, 0) }; // 2206644497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights = { "MaskBlendWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, MaskBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights_MetaData)) }; // 2206644497
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09  * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights_Inner = { "AllBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKLSPerBoneWeights, METADATA_PARAMS(nullptr, 0) }; // 1362078059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights_MetaData[] = {
		{ "Comment", "// transient data to handle weight and target weight\n// this array changes based on required bones\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "transient data to handle weight and target weight\nthis array changes based on required bones" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights = { "AllBoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, AllBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights_MetaData)) }; // 1362078059
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights, METADATA_PARAMS(nullptr, 0) }; // 894570622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights_MetaData[] = {
		{ "Comment", "// Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\n// be regenerated at runtime if the GUIDs dont match\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\nbe regenerated at runtime if the GUIDs dont match" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights_MetaData)) }; // 894570622
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_SkeletonGuid_MetaData[] = {
		{ "Comment", "// Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_SkeletonGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_SkeletonGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_VirtualBoneGuid_MetaData[] = {
		{ "Comment", "// Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSMask.h" },
		{ "ToolTip", "Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSMask, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_VirtualBoneGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_VirtualBoneGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AnimationPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BaseAdditivePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_BlendMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_MaskBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_AllBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_PerBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_SkeletonGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewProp_VirtualBoneGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_KLSMask",
		sizeof(FAnimNode_KLSMask),
		alignof(FAnimNode_KLSMask),
		Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSMask()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSMask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSMask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSMask_h_Statics::ScriptStructInfo[] = {
		{ FKLSWeightCurves::StaticStruct, Z_Construct_UScriptStruct_FKLSWeightCurves_Statics::NewStructOps, TEXT("KLSWeightCurves"), &Z_Registration_Info_UScriptStruct_KLSWeightCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSWeightCurves), 897746619U) },
		{ FKLSMaskSettings::StaticStruct, Z_Construct_UScriptStruct_FKLSMaskSettings_Statics::NewStructOps, TEXT("KLSMaskSettings"), &Z_Registration_Info_UScriptStruct_KLSMaskSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSMaskSettings), 362885909U) },
		{ FKLSPerBoneWeights::StaticStruct, Z_Construct_UScriptStruct_FKLSPerBoneWeights_Statics::NewStructOps, TEXT("KLSPerBoneWeights"), &Z_Registration_Info_UScriptStruct_KLSPerBoneWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSPerBoneWeights), 1362078059U) },
		{ FKLSPerBoneBlendWeights::StaticStruct, Z_Construct_UScriptStruct_FKLSPerBoneBlendWeights_Statics::NewStructOps, TEXT("KLSPerBoneBlendWeights"), &Z_Registration_Info_UScriptStruct_KLSPerBoneBlendWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSPerBoneBlendWeights), 894570622U) },
		{ FAnimNode_KLSMask::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSMask_Statics::NewStructOps, TEXT("AnimNode_KLSMask"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSMask), 530161104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSMask_h_44728677(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSMask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSMask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
