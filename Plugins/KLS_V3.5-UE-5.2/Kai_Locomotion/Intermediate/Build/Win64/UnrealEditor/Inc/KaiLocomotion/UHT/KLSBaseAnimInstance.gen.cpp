// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/KLSBaseAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
#include "KaiLocomotion/Public/Data/KLSCharacterData.h"
#include "SequencePlayerLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSBaseAnimInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseAnimInstance();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSGroundAnimState();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodesBonesData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimCurveNames();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSBaseAnimBPData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharacterData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCustomRotationData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSLandSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSLocomotionJump();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSPivotAnimSet();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData;
class UScriptStruct* FKLSBaseAnimBPData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSBaseAnimBPData, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSBaseAnimBPData"));
	}
	return Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSBaseAnimBPData>()
{
	return FKLSBaseAnimBPData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingPivotTargetAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StandingPivotTargetAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingStartBlendToLoop_MetaData[];
#endif
		static void NewProp_StandingStartBlendToLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StandingStartBlendToLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingPostPivotBlendToLoop_MetaData[];
#endif
		static void NewProp_StandingPostPivotBlendToLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StandingPostPivotBlendToLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingStopBlendToLoop_MetaData[];
#endif
		static void NewProp_StandingStopBlendToLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StandingStopBlendToLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJumpSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentJumpSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnimTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpAnimTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStandingPivotSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentStandingPivotSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJumpAnims_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentJumpAnims;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLandSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLandSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsInApex_MetaData[];
#endif
		static void NewProp_IsInApex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInApex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsLanding_MetaData[];
#endif
		static void NewProp_IsLanding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLanding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpApexLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpApexLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandAdditiveAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandAdditiveAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLandingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLandingDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSBaseAnimBPData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_TurnInPlaceAngle_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_TurnInPlaceAngle = { "TurnInPlaceAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, TurnInPlaceAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_TurnInPlaceAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_TurnInPlaceAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPivotTargetAngle_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPivotTargetAngle = { "StandingPivotTargetAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, StandingPivotTargetAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPivotTargetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPivotTargetAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop_SetBit(void* Obj)
	{
		((FKLSBaseAnimBPData*)Obj)->StandingStartBlendToLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop = { "StandingStartBlendToLoop", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSBaseAnimBPData), &Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop_SetBit(void* Obj)
	{
		((FKLSBaseAnimBPData*)Obj)->StandingPostPivotBlendToLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop = { "StandingPostPivotBlendToLoop", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSBaseAnimBPData), &Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop_SetBit(void* Obj)
	{
		((FKLSBaseAnimBPData*)Obj)->StandingStopBlendToLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop = { "StandingStopBlendToLoop", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSBaseAnimBPData), &Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpSet = { "CurrentJumpSet", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, CurrentJumpSet), Z_Construct_UScriptStruct_FKLSJumpSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpSet_MetaData)) }; // 1383416261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpAnimTag_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpAnimTag = { "JumpAnimTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, JumpAnimTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpAnimTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpAnimTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentStandingPivotSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentStandingPivotSet = { "CurrentStandingPivotSet", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, CurrentStandingPivotSet), Z_Construct_UScriptStruct_FKLSPivotAnimSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentStandingPivotSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentStandingPivotSet_MetaData)) }; // 2908252243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpAnims_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpAnims = { "CurrentJumpAnims", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, CurrentJumpAnims), Z_Construct_UScriptStruct_FKLSLocomotionJump, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpAnims_MetaData)) }; // 1686324718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentLandSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentLandSet = { "CurrentLandSet", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, CurrentLandSet), Z_Construct_UScriptStruct_FKLSLandSet, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentLandSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentLandSet_MetaData)) }; // 4263250518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex_SetBit(void* Obj)
	{
		((FKLSBaseAnimBPData*)Obj)->IsInApex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex = { "IsInApex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSBaseAnimBPData), &Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding_SetBit(void* Obj)
	{
		((FKLSBaseAnimBPData*)Obj)->IsLanding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding = { "IsLanding", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSBaseAnimBPData), &Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpApexLocation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpApexLocation = { "JumpApexLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, JumpApexLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpApexLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpApexLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_LandAdditiveAlpha_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_LandAdditiveAlpha = { "LandAdditiveAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, LandAdditiveAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_LandAdditiveAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_LandAdditiveAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_MinLandingDistance_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_MinLandingDistance = { "MinLandingDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSBaseAnimBPData, MinLandingDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_MinLandingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_MinLandingDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_TurnInPlaceAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPivotTargetAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStartBlendToLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingPostPivotBlendToLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_StandingStopBlendToLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpAnimTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentStandingPivotSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentJumpAnims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_CurrentLandSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsInApex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_IsLanding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_JumpApexLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_LandAdditiveAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewProp_MinLandingDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSBaseAnimBPData",
		sizeof(FKLSBaseAnimBPData),
		alignof(FKLSBaseAnimBPData),
		Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSBaseAnimBPData()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.InnerSingleton, Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData.InnerSingleton;
	}
	DEFINE_FUNCTION(UKLSBaseAnimInstance::execGetCustomRotationWeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCustomRotationWeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseAnimInstance::execUpdateLandAdditiveWeight)
	{
		P_GET_STRUCT(FAnimUpdateContext,Z_Param_UpdateContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLandAdditiveWeight(Z_Param_UpdateContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseAnimInstance::execUpdateLandingState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->UpdateLandingState(Z_Param_Out_SequencePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseAnimInstance::execSetupLandingAnimation)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupLandingAnimation(Z_Param_Out_SequencePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseAnimInstance::execSetupLandingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupLandingState();
		P_NATIVE_END;
	}
	void UKLSBaseAnimInstance::StaticRegisterNativesUKLSBaseAnimInstance()
	{
		UClass* Class = UKLSBaseAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomRotationWeight", &UKLSBaseAnimInstance::execGetCustomRotationWeight },
			{ "SetupLandingAnimation", &UKLSBaseAnimInstance::execSetupLandingAnimation },
			{ "SetupLandingState", &UKLSBaseAnimInstance::execSetupLandingState },
			{ "UpdateLandAdditiveWeight", &UKLSBaseAnimInstance::execUpdateLandAdditiveWeight },
			{ "UpdateLandingState", &UKLSBaseAnimInstance::execUpdateLandingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics
	{
		struct KLSBaseAnimInstance_eventGetCustomRotationWeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventGetCustomRotationWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseAnimInstance, nullptr, "GetCustomRotationWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::KLSBaseAnimInstance_eventGetCustomRotationWeight_Parms), Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics
	{
		struct KLSBaseAnimInstance_eventSetupLandingAnimation_Parms
		{
			FSequencePlayerReference SequencePlayer;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventSetupLandingAnimation_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventSetupLandingAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseAnimInstance, nullptr, "SetupLandingAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::KLSBaseAnimInstance_eventSetupLandingAnimation_Parms), Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseAnimInstance, nullptr, "SetupLandingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics
	{
		struct KLSBaseAnimInstance_eventUpdateLandAdditiveWeight_Parms
		{
			FAnimUpdateContext UpdateContext;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventUpdateLandAdditiveWeight_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::NewProp_UpdateContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseAnimInstance, nullptr, "UpdateLandAdditiveWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::KLSBaseAnimInstance_eventUpdateLandAdditiveWeight_Parms), Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics
	{
		struct KLSBaseAnimInstance_eventUpdateLandingState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventUpdateLandingState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseAnimInstance_eventUpdateLandingState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseAnimInstance, nullptr, "UpdateLandingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::KLSBaseAnimInstance_eventUpdateLandingState_Parms), Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSBaseAnimInstance);
	UClass* Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister()
	{
		return UKLSBaseAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKLSBaseAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodesBonesData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNodesBonesData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopsBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopsBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchingBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAnimBPData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAnimBPData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomRotationData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StandingAnimState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingAnimState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StandingAnimState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationCurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSBaseAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSBaseAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSBaseAnimInstance_GetCustomRotationWeight, "GetCustomRotationWeight" }, // 1239714316
		{ &Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingAnimation, "SetupLandingAnimation" }, // 3808821135
		{ &Z_Construct_UFunction_UKLSBaseAnimInstance_SetupLandingState, "SetupLandingState" }, // 1647652421
		{ &Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandAdditiveWeight, "UpdateLandAdditiveWeight" }, // 1473741412
		{ &Z_Construct_UFunction_UKLSBaseAnimInstance_UpdateLandingState, "UpdateLandingState" }, // 3186867247
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/KLSBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimNodesBonesData = { "AnimNodesBonesData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, AnimNodesBonesData), Z_Construct_UScriptStruct_FAnimNodesBonesData, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData)) }; // 502211847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_LoopsBlendTime_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_LoopsBlendTime = { "LoopsBlendTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, LoopsBlendTime), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_LoopsBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_LoopsBlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendInTime_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendInTime = { "CrouchingBlendInTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, CrouchingBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendOutTime_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendOutTime = { "CrouchingBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, CrouchingBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, CharacterData), Z_Construct_UScriptStruct_FKLSCharacterData, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CharacterData_MetaData)) }; // 4246693399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_BaseAnimBPData_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_BaseAnimBPData = { "BaseAnimBPData", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, BaseAnimBPData), Z_Construct_UScriptStruct_FKLSBaseAnimBPData, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_BaseAnimBPData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_BaseAnimBPData_MetaData)) }; // 3987853629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationData_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationData = { "CustomRotationData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, CustomRotationData), Z_Construct_UScriptStruct_FKLSCustomRotationData, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationData_MetaData)) }; // 1484090974
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState_MetaData[] = {
		{ "Category", "KLS|StatesData" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState = { "StandingAnimState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, StandingAnimState), Z_Construct_UEnum_KaiLocomotion_EKLSGroundAnimState, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState_MetaData)) }; // 2933957810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, RotationAlpha), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationYaw_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "HideDefault", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationYaw = { "CustomRotationYaw", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, CustomRotationYaw), METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimationCurveNames_MetaData[] = {
		{ "Category", "KLS|Animation BP Data" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimationCurveNames = { "AnimationCurveNames", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseAnimInstance, AnimationCurveNames), Z_Construct_UScriptStruct_FKLSAnimCurveNames, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimationCurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimationCurveNames_MetaData)) }; // 1873118006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSBaseAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimNodesBonesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_LoopsBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CrouchingBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_BaseAnimBPData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_StandingAnimState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_CustomRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseAnimInstance_Statics::NewProp_AnimationCurveNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSBaseAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSBaseAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSBaseAnimInstance_Statics::ClassParams = {
		&UKLSBaseAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKLSBaseAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSBaseAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UKLSBaseAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UKLSBaseAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSBaseAnimInstance.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSBaseAnimInstance>()
	{
		return UKLSBaseAnimInstance::StaticClass();
	}
	UKLSBaseAnimInstance::UKLSBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSBaseAnimInstance);
	UKLSBaseAnimInstance::~UKLSBaseAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FKLSBaseAnimBPData::StaticStruct, Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics::NewStructOps, TEXT("KLSBaseAnimBPData"), &Z_Registration_Info_UScriptStruct_KLSBaseAnimBPData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSBaseAnimBPData), 3987853629U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSBaseAnimInstance, UKLSBaseAnimInstance::StaticClass, TEXT("UKLSBaseAnimInstance"), &Z_Registration_Info_UClass_UKLSBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSBaseAnimInstance), 2010477925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_958983480(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
