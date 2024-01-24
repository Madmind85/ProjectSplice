// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/KLSAnimBPData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSAnimBPData() {}
// Cross Module References
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimCurvesValues();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues;
class UScriptStruct* FKLSAnimCurvesValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSAnimCurvesValues, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSAnimCurvesValues"));
	}
	return Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSAnimCurvesValues>()
{
	return FKLSAnimCurvesValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightArmMeshSpaceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightArmMeshSpaceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightArmLocalSpaceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightArmLocalSpaceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmMeshSpaceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftArmMeshSpaceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftArmLocalSpaceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftArmLocalSpaceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightHandWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftHandWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGaitAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedGaitAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnlockRightFoot_MetaData[];
#endif
		static void NewProp_bUnlockRightFoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlockRightFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUnlockLeftFoot_MetaData[];
#endif
		static void NewProp_bUnlockLeftFoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnlockLeftFoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSAnimCurvesValues>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmMeshSpaceWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmMeshSpaceWeight = { "RightArmMeshSpaceWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, RightArmMeshSpaceWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmMeshSpaceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmMeshSpaceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmLocalSpaceWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmLocalSpaceWeight = { "RightArmLocalSpaceWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, RightArmLocalSpaceWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmLocalSpaceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmLocalSpaceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmMeshSpaceWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmMeshSpaceWeight = { "LeftArmMeshSpaceWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, LeftArmMeshSpaceWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmMeshSpaceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmMeshSpaceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmLocalSpaceWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmLocalSpaceWeight = { "LeftArmLocalSpaceWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, LeftArmLocalSpaceWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmLocalSpaceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmLocalSpaceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightHandWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightHandWeight = { "RightHandWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, RightHandWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightHandWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightHandWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftHandWeight_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftHandWeight = { "LeftHandWeight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, LeftHandWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftHandWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftHandWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_SpeedGaitAlpha_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_SpeedGaitAlpha = { "SpeedGaitAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSAnimCurvesValues, SpeedGaitAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_SpeedGaitAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_SpeedGaitAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot_SetBit(void* Obj)
	{
		((FKLSAnimCurvesValues*)Obj)->bUnlockRightFoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot = { "bUnlockRightFoot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSAnimCurvesValues), &Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot_MetaData[] = {
		{ "Category", "StatesSnaps" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSAnimBPData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot_SetBit(void* Obj)
	{
		((FKLSAnimCurvesValues*)Obj)->bUnlockLeftFoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot = { "bUnlockLeftFoot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSAnimCurvesValues), &Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmMeshSpaceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightArmLocalSpaceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmMeshSpaceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftArmLocalSpaceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_RightHandWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_LeftHandWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_SpeedGaitAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockRightFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewProp_bUnlockLeftFoot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSAnimCurvesValues",
		sizeof(FKLSAnimCurvesValues),
		alignof(FKLSAnimCurvesValues),
		Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimCurvesValues()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.InnerSingleton, Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSAnimBPData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSAnimBPData_h_Statics::ScriptStructInfo[] = {
		{ FKLSAnimCurvesValues::StaticStruct, Z_Construct_UScriptStruct_FKLSAnimCurvesValues_Statics::NewStructOps, TEXT("KLSAnimCurvesValues"), &Z_Registration_Info_UScriptStruct_KLSAnimCurvesValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSAnimCurvesValues), 1566843310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSAnimBPData_h_3557470475(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSAnimBPData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSAnimBPData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
