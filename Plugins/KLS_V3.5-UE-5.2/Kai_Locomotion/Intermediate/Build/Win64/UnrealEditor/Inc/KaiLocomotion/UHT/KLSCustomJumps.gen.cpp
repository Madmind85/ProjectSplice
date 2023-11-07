// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Data/KLSCustomJumps.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSCustomJumps() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCustomJumps();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCustomJumps_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCustomLand();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCustomLand_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSelectorInfo();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSLandSelectorInfo();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo;
class UScriptStruct* FKLSJumpSelectorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSJumpSelectorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSJumpSelectorInfo>()
{
	return FKLSJumpSelectorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpSpeed2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpSpeed2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleOverHead_MetaData[];
#endif
		static void NewProp_ObstacleOverHead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ObstacleOverHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictedJumpApexLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedJumpApexLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStartLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpStartLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictedJumpLandLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedJumpLandLoc;
		static const UECodeGen_Private::FBytePropertyParams NewProp_JumpDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_JumpDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//structs\n" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
		{ "ToolTip", "structs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSJumpSelectorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((FKLSJumpSelectorInfo*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSJumpSelectorInfo), &Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpSpeed2D_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpSpeed2D = { "JumpSpeed2D", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, JumpSpeed2D), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpSpeed2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpSpeed2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((FKLSJumpSelectorInfo*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSJumpSelectorInfo), &Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead_SetBit(void* Obj)
	{
		((FKLSJumpSelectorInfo*)Obj)->ObstacleOverHead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead = { "ObstacleOverHead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSJumpSelectorInfo), &Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpApexLoc_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpApexLoc = { "PredictedJumpApexLoc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, PredictedJumpApexLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpApexLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpApexLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpStartLoc_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpStartLoc = { "JumpStartLoc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, JumpStartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpStartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpStartLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpLandLoc_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpLandLoc = { "PredictedJumpLandLoc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, PredictedJumpLandLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpLandLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpLandLoc_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection = { "JumpDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSJumpSelectorInfo, JumpDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpSpeed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_ObstacleOverHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpApexLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpStartLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_PredictedJumpLandLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewProp_JumpDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSJumpSelectorInfo",
		sizeof(FKLSJumpSelectorInfo),
		alignof(FKLSJumpSelectorInfo),
		Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSelectorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.InnerSingleton, Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo;
class UScriptStruct* FKLSLandSelectorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSLandSelectorInfo, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSLandSelectorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSLandSelectorInfo>()
{
	return FKLSLandSelectorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandFallSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandFallSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandFallDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandFallDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpAnimTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSLandSelectorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSLandSelectorInfo, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((FKLSLandSelectorInfo*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSLandSelectorInfo), &Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallSpeed_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallSpeed = { "LandFallSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSLandSelectorInfo, LandFallSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallDistance_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallDistance = { "LandFallDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSLandSelectorInfo, LandFallDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection = { "LandDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSLandSelectorInfo, LandDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_JumpAnimTag_MetaData[] = {
		{ "Category", "JumpInfo" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_JumpAnimTag = { "JumpAnimTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSLandSelectorInfo, JumpAnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_JumpAnimTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_JumpAnimTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandFallDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_LandDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewProp_JumpAnimTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSLandSelectorInfo",
		sizeof(FKLSLandSelectorInfo),
		alignof(FKLSLandSelectorInfo),
		Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSLandSelectorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.InnerSingleton, Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UKLSCustomJumps::execSelectJumpAnimations)
	{
		P_GET_STRUCT_REF(FKLSJumpSelectorInfo,Z_Param_Out_JumpInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->SelectJumpAnimations_Implementation(Z_Param_Out_JumpInfo);
		P_NATIVE_END;
	}
	struct KLSCustomJumps_eventSelectJumpAnimations_Parms
	{
		FKLSJumpSelectorInfo JumpInfo;
		FGameplayTag ReturnValue;
	};
	static FName NAME_UKLSCustomJumps_SelectJumpAnimations = FName(TEXT("SelectJumpAnimations"));
	FGameplayTag UKLSCustomJumps::SelectJumpAnimations(FKLSJumpSelectorInfo const& JumpInfo)
	{
		KLSCustomJumps_eventSelectJumpAnimations_Parms Parms;
		Parms.JumpInfo=JumpInfo;
		ProcessEvent(FindFunctionChecked(NAME_UKLSCustomJumps_SelectJumpAnimations),&Parms);
		return Parms.ReturnValue;
	}
	void UKLSCustomJumps::StaticRegisterNativesUKLSCustomJumps()
	{
		UClass* Class = UKLSCustomJumps::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectJumpAnimations", &UKLSCustomJumps::execSelectJumpAnimations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_JumpInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_JumpInfo = { "JumpInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCustomJumps_eventSelectJumpAnimations_Parms, JumpInfo), Z_Construct_UScriptStruct_FKLSJumpSelectorInfo, METADATA_PARAMS(Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_JumpInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_JumpInfo_MetaData)) }; // 1251360823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCustomJumps_eventSelectJumpAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_JumpInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kai Animation Library" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCustomJumps, nullptr, "SelectJumpAnimations", nullptr, nullptr, sizeof(KLSCustomJumps_eventSelectJumpAnimations_Parms), Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSCustomJumps);
	UClass* Z_Construct_UClass_UKLSCustomJumps_NoRegister()
	{
		return UKLSCustomJumps::StaticClass();
	}
	struct Z_Construct_UClass_UKLSCustomJumps_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSCustomJumps_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSCustomJumps_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSCustomJumps_SelectJumpAnimations, "SelectJumpAnimations" }, // 994233599
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCustomJumps_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//classes\n" },
		{ "IncludePath", "Data/KLSCustomJumps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
		{ "ToolTip", "classes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSCustomJumps_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSCustomJumps>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSCustomJumps_Statics::ClassParams = {
		&UKLSCustomJumps::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSCustomJumps_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCustomJumps_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSCustomJumps()
	{
		if (!Z_Registration_Info_UClass_UKLSCustomJumps.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSCustomJumps.OuterSingleton, Z_Construct_UClass_UKLSCustomJumps_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSCustomJumps.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSCustomJumps>()
	{
		return UKLSCustomJumps::StaticClass();
	}
	UKLSCustomJumps::UKLSCustomJumps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSCustomJumps);
	UKLSCustomJumps::~UKLSCustomJumps() {}
	DEFINE_FUNCTION(UKLSCustomLand::execSelectLandAnimation)
	{
		P_GET_STRUCT_REF(FKLSLandSelectorInfo,Z_Param_Out_LandInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->SelectLandAnimation_Implementation(Z_Param_Out_LandInfo);
		P_NATIVE_END;
	}
	struct KLSCustomLand_eventSelectLandAnimation_Parms
	{
		FKLSLandSelectorInfo LandInfo;
		FGameplayTag ReturnValue;
	};
	static FName NAME_UKLSCustomLand_SelectLandAnimation = FName(TEXT("SelectLandAnimation"));
	FGameplayTag UKLSCustomLand::SelectLandAnimation(FKLSLandSelectorInfo const& LandInfo)
	{
		KLSCustomLand_eventSelectLandAnimation_Parms Parms;
		Parms.LandInfo=LandInfo;
		ProcessEvent(FindFunctionChecked(NAME_UKLSCustomLand_SelectLandAnimation),&Parms);
		return Parms.ReturnValue;
	}
	void UKLSCustomLand::StaticRegisterNativesUKLSCustomLand()
	{
		UClass* Class = UKLSCustomLand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectLandAnimation", &UKLSCustomLand::execSelectLandAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_LandInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_LandInfo = { "LandInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCustomLand_eventSelectLandAnimation_Parms, LandInfo), Z_Construct_UScriptStruct_FKLSLandSelectorInfo, METADATA_PARAMS(Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_LandInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_LandInfo_MetaData)) }; // 2556149588
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCustomLand_eventSelectLandAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_LandInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kai Animation Library" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCustomLand, nullptr, "SelectLandAnimation", nullptr, nullptr, sizeof(KLSCustomLand_eventSelectLandAnimation_Parms), Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSCustomLand);
	UClass* Z_Construct_UClass_UKLSCustomLand_NoRegister()
	{
		return UKLSCustomLand::StaticClass();
	}
	struct Z_Construct_UClass_UKLSCustomLand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSCustomLand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSCustomLand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSCustomLand_SelectLandAnimation, "SelectLandAnimation" }, // 2362001676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCustomLand_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/KLSCustomJumps.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCustomJumps.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSCustomLand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSCustomLand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSCustomLand_Statics::ClassParams = {
		&UKLSCustomLand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSCustomLand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCustomLand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSCustomLand()
	{
		if (!Z_Registration_Info_UClass_UKLSCustomLand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSCustomLand.OuterSingleton, Z_Construct_UClass_UKLSCustomLand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSCustomLand.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSCustomLand>()
	{
		return UKLSCustomLand::StaticClass();
	}
	UKLSCustomLand::UKLSCustomLand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSCustomLand);
	UKLSCustomLand::~UKLSCustomLand() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ScriptStructInfo[] = {
		{ FKLSJumpSelectorInfo::StaticStruct, Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics::NewStructOps, TEXT("KLSJumpSelectorInfo"), &Z_Registration_Info_UScriptStruct_KLSJumpSelectorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSJumpSelectorInfo), 1251360823U) },
		{ FKLSLandSelectorInfo::StaticStruct, Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics::NewStructOps, TEXT("KLSLandSelectorInfo"), &Z_Registration_Info_UScriptStruct_KLSLandSelectorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSLandSelectorInfo), 2556149588U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSCustomJumps, UKLSCustomJumps::StaticClass, TEXT("UKLSCustomJumps"), &Z_Registration_Info_UClass_UKLSCustomJumps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSCustomJumps), 2298587762U) },
		{ Z_Construct_UClass_UKLSCustomLand, UKLSCustomLand::StaticClass, TEXT("UKLSCustomLand"), &Z_Registration_Info_UClass_UKLSCustomLand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSCustomLand), 771240796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_2457584197(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
