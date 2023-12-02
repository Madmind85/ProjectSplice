// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H:/ProjectSplice/Plugins/KLS_V3.5-UE-5.2/Kai_Locomotion/Source/KaiLocomotionEditor/Public/AnimGraphNode_KLSAimOffset.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSAimOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_KLSAimOffset() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset();
	KAILOCOMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_KLSAimOffset();
	KAILOCOMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotionEditor();
// End Cross Module References
	void UAnimGraphNode_KLSAimOffset::StaticRegisterNativesUAnimGraphNode_KLSAimOffset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_KLSAimOffset);
	UClass* Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_NoRegister()
	{
		return UAnimGraphNode_KLSAimOffset::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_KLSAimOffset.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KLSAimOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KLSAimOffset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_KLSAimOffset, Node), Z_Construct_UScriptStruct_FAnimNode_KLSAimOffset, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::NewProp_Node_MetaData)) }; // 1518290128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_KLSAimOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::ClassParams = {
		&UAnimGraphNode_KLSAimOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_KLSAimOffset()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_KLSAimOffset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_KLSAimOffset.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_KLSAimOffset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_KLSAimOffset.OuterSingleton;
	}
	template<> KAILOCOMOTIONEDITOR_API UClass* StaticClass<UAnimGraphNode_KLSAimOffset>()
	{
		return UAnimGraphNode_KLSAimOffset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_KLSAimOffset);
	UAnimGraphNode_KLSAimOffset::~UAnimGraphNode_KLSAimOffset() {}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSAimOffset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSAimOffset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_KLSAimOffset, UAnimGraphNode_KLSAimOffset::StaticClass, TEXT("UAnimGraphNode_KLSAimOffset"), &Z_Registration_Info_UClass_UAnimGraphNode_KLSAimOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_KLSAimOffset), 2940388427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSAimOffset_h_1922319283(TEXT("/Script/KaiLocomotionEditor"),
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSAimOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSAimOffset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
