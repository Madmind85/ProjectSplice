// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_SlotCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SlotCustom() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Slot();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SlotCustom();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SlotCustom>() == std::is_polymorphic<FAnimNode_Slot>(), "USTRUCT FAnimNode_SlotCustom cannot be polymorphic unless super FAnimNode_Slot is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom;
class UScriptStruct* FAnimNode_SlotCustom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SlotCustom, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_SlotCustom"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_SlotCustom>()
{
	return FAnimNode_SlotCustom::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_SlotCustom.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SlotCustom>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_Slot,
		&NewStructOps,
		"AnimNode_SlotCustom",
		sizeof(FAnimNode_SlotCustom),
		alignof(FAnimNode_SlotCustom),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SlotCustom()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_SlotCustom_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_SlotCustom_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SlotCustom::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SlotCustom_Statics::NewStructOps, TEXT("AnimNode_SlotCustom"), &Z_Registration_Info_UScriptStruct_AnimNode_SlotCustom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SlotCustom), 3286865335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_SlotCustom_h_1361614120(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_SlotCustom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_SlotCustom_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
