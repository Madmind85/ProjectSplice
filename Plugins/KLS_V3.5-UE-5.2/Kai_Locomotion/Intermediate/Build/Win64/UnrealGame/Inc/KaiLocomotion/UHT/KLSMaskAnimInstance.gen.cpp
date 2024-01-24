// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/KLSMaskAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSMaskAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSMaskAnimInstance();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSMaskAnimInstance_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSMaskingData_NoRegister();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodesBonesData();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	void UKLSMaskAnimInstance::StaticRegisterNativesUKLSMaskAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSMaskAnimInstance);
	UClass* Z_Construct_UClass_UKLSMaskAnimInstance_NoRegister()
	{
		return UKLSMaskAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKLSMaskAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskingSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskingSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodesBonesData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNodesBonesData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSMaskAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/KLSMaskAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/KLSMaskAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_MaskingSet_MetaData[] = {
		{ "Category", "KLS|MaskingSet" },
		{ "ModuleRelativePath", "Public/Animation/KLSMaskAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_MaskingSet = { "MaskingSet", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskAnimInstance, MaskingSet), Z_Construct_UClass_UKLSMaskingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_MaskingSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_MaskingSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData[] = {
		{ "Category", "KLS|Anim Nodes Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSMaskAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_AnimNodesBonesData = { "AnimNodesBonesData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskAnimInstance, AnimNodesBonesData), Z_Construct_UScriptStruct_FAnimNodesBonesData, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData)) }; // 502211847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSMaskAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_MaskingSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskAnimInstance_Statics::NewProp_AnimNodesBonesData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSMaskAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSMaskAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSMaskAnimInstance_Statics::ClassParams = {
		&UKLSMaskAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKLSMaskAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSMaskAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UKLSMaskAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSMaskAnimInstance.OuterSingleton, Z_Construct_UClass_UKLSMaskAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSMaskAnimInstance.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSMaskAnimInstance>()
	{
		return UKLSMaskAnimInstance::StaticClass();
	}
	UKLSMaskAnimInstance::UKLSMaskAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSMaskAnimInstance);
	UKLSMaskAnimInstance::~UKLSMaskAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSMaskAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSMaskAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSMaskAnimInstance, UKLSMaskAnimInstance::StaticClass, TEXT("UKLSMaskAnimInstance"), &Z_Registration_Info_UClass_UKLSMaskAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSMaskAnimInstance), 559319635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSMaskAnimInstance_h_975761870(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSMaskAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSMaskAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
