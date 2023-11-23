// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../../Users/Chiyako/Documents/GitHub/ProjectSplice/Plugins/KLS_V3.5-UE-5.2/Kai_Locomotion/Source/KaiLocomotionEditor/Public/AnimGraphNode_KLSOrientationWarping.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSOrientationWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_KLSOrientationWarping() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping();
	KAILOCOMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping();
	KAILOCOMOTIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotionEditor();
// End Cross Module References
	void UAnimGraphNode_KLSOrientationWarping::StaticRegisterNativesUAnimGraphNode_KLSOrientationWarping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_KLSOrientationWarping);
	UClass* Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_NoRegister()
	{
		return UAnimGraphNode_KLSOrientationWarping::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_KLSOrientationWarping.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KLSOrientationWarping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_KLSOrientationWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_KLSOrientationWarping, Node), Z_Construct_UScriptStruct_FAnimNode_KLSOrientationWarping, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::NewProp_Node_MetaData)) }; // 666715964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_KLSOrientationWarping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::ClassParams = {
		&UAnimGraphNode_KLSOrientationWarping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_KLSOrientationWarping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_KLSOrientationWarping.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_KLSOrientationWarping.OuterSingleton;
	}
	template<> KAILOCOMOTIONEDITOR_API UClass* StaticClass<UAnimGraphNode_KLSOrientationWarping>()
	{
		return UAnimGraphNode_KLSOrientationWarping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_KLSOrientationWarping);
	UAnimGraphNode_KLSOrientationWarping::~UAnimGraphNode_KLSOrientationWarping() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSOrientationWarping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSOrientationWarping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_KLSOrientationWarping, UAnimGraphNode_KLSOrientationWarping::StaticClass, TEXT("UAnimGraphNode_KLSOrientationWarping"), &Z_Registration_Info_UClass_UAnimGraphNode_KLSOrientationWarping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_KLSOrientationWarping), 1196663369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSOrientationWarping_h_4095877481(TEXT("/Script/KaiLocomotionEditor"),
		Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSOrientationWarping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotionEditor_Public_AnimGraphNode_KLSOrientationWarping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
