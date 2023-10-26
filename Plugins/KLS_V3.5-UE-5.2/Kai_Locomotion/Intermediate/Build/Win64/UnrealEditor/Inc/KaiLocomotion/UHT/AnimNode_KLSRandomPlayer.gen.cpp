// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/AnimNode_KLSRandomPlayer.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KLSRandomPlayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSRandomPlayerEntries();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_KLSRandomPlayer>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_KLSRandomPlayer cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer;
class UScriptStruct* FAnimNode_KLSRandomPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("AnimNode_KLSRandomPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FAnimNode_KLSRandomPlayer>()
{
	return FAnimNode_KLSRandomPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSequences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[];
#endif
		static void NewProp_bShuffleMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSRandomPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KLSRandomPlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_RandomSequences_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** List of sequences to randomly step through */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSRandomPlayer.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "List of sequences to randomly step through" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_RandomSequences = { "RandomSequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KLSRandomPlayer, RandomSequences), Z_Construct_UScriptStruct_FKLSRandomPlayerEntries, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_RandomSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_RandomSequences_MetaData)) }; // 1298002105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\n\x09  * without visiting each sequence in turn (no repeats). Enabling this will ignore\n\x09  * ChanceToPlay for each entry\n\x09  */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNode_KLSRandomPlayer.h" },
		{ "ToolTip", "When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\nwithout visiting each sequence in turn (no repeats). Enabling this will ignore\nChanceToPlay for each entry" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode_SetBit(void* Obj)
	{
		((FAnimNode_KLSRandomPlayer*)Obj)->bShuffleMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode = { "bShuffleMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KLSRandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_RandomSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewProp_bShuffleMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_KLSRandomPlayer",
		sizeof(FAnimNode_KLSRandomPlayer),
		alignof(FAnimNode_KLSRandomPlayer),
		Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSRandomPlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSRandomPlayer_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_KLSRandomPlayer::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KLSRandomPlayer_Statics::NewStructOps, TEXT("AnimNode_KLSRandomPlayer"), &Z_Registration_Info_UScriptStruct_AnimNode_KLSRandomPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KLSRandomPlayer), 753690693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSRandomPlayer_h_1835215151(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSRandomPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_AnimNode_KLSRandomPlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
