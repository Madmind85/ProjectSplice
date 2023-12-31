// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Data/KLSDataAssets.h"
#include "GameplayTagContainer.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
#include "KaiLocomotion/Public/Data/KLSCustomJumps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSDataAssets() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSLocomotionData();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSLocomotionData_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSMaskingData();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSMaskingData_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCrouchAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSDataSettings();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSDefaultAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSDefaultPivotAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSGaitMask();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSInterpolationSpeeds();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSelectorInfo();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSLocomotionJump();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSMaskAnimation();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSPivotAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSRotatingAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSRotatingPivotAnimSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSStandingAnimations();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	DEFINE_FUNCTION(UKLSLocomotionData::execGetInterpolationSpeeds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSInterpolationSpeeds*)Z_Param__Result=P_THIS->GetInterpolationSpeeds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectJumpSet)
	{
		P_GET_STRUCT_REF(FKLSJumpSelectorInfo,Z_Param_Out_JumpSelectInfo);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_JumpTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSJumpSet*)Z_Param__Result=P_THIS->SelectJumpSet(Z_Param_Out_JumpSelectInfo,Z_Param_Out_JumpTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectCrouchTurnInPlaceAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TurnDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectCrouchTurnInPlaceAnimation(Z_Param_TurnDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectTurnInPlaceAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TurnDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectTurnInPlaceAnimation(Z_Param_TurnDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectCrouchPivotSet)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_VelocityCardinalDirection);
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_InputCardinalDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_GET_UBOOL_REF(Z_Param_Out_SoftPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSPivotAnimSet*)Z_Param__Result=P_THIS->SelectCrouchPivotSet((EKLSCardinalDirection&)(Z_Param_Out_VelocityCardinalDirection),(EKLSCardinalDirection&)(Z_Param_Out_InputCardinalDirection),Z_Param_Direction,Z_Param_IsStrafing,Z_Param_bIsLeftFootUp,Z_Param_Out_SoftPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectPivotSet)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_VelocityCardinalDirection);
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_InputCardinalDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_GET_ENUM_REF(EKLSSpeedGait,Z_Param_Out_SpeedGait);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_GET_UBOOL_REF(Z_Param_Out_SoftPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSPivotAnimSet*)Z_Param__Result=P_THIS->SelectPivotSet((EKLSCardinalDirection&)(Z_Param_Out_VelocityCardinalDirection),(EKLSCardinalDirection&)(Z_Param_Out_InputCardinalDirection),Z_Param_Direction,Z_Param_IsStrafing,(EKLSSpeedGait&)(Z_Param_Out_SpeedGait),Z_Param_bIsLeftFootUp,Z_Param_Out_SoftPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectCrouchStopAnimation)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_CardinalDirection);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectCrouchStopAnimation((EKLSCardinalDirection&)(Z_Param_Out_CardinalDirection),Z_Param_bIsLeftFootUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectStopAnimation)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_CardinalDirection);
		P_GET_ENUM_REF(EKLSSpeedGait,Z_Param_Out_SpeedGait);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectStopAnimation((EKLSCardinalDirection&)(Z_Param_Out_CardinalDirection),(EKLSSpeedGait&)(Z_Param_Out_SpeedGait),Z_Param_bIsLeftFootUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectCrouchStartAnimation)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_CardinalDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectCrouchStartAnimation((EKLSCardinalDirection&)(Z_Param_Out_CardinalDirection),Z_Param_Direction,Z_Param_IsStrafing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execSelectStartAnimation)
	{
		P_GET_ENUM_REF(EKLSCardinalDirection,Z_Param_Out_CardinalDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_GET_ENUM_REF(EKLSSpeedGait,Z_Param_Out_SpeedGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectStartAnimation((EKLSCardinalDirection&)(Z_Param_Out_CardinalDirection),Z_Param_Direction,Z_Param_IsStrafing,(EKLSSpeedGait&)(Z_Param_Out_SpeedGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetStrafingPivotSet)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_STRUCT_REF(FKLSDefaultPivotAnimSet,Z_Param_Out_AnimSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSPivotAnimSet*)Z_Param__Result=P_THIS->GetStrafingPivotSet(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Out_AnimSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetRotatingPivotSet)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_STRUCT_REF(FKLSRotatingPivotAnimSet,Z_Param_Out_AnimSet);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSPivotAnimSet*)Z_Param__Result=P_THIS->GetRotatingPivotSet(Z_Param_Direction,Z_Param_Out_AnimSet,Z_Param_bIsLeftFootUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetStrafingAnim)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_STRUCT_REF(FKLSDefaultAnimSet,Z_Param_Out_AnimSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->GetStrafingAnim(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Out_AnimSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetRotatingAnim)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_STRUCT_REF(FKLSRotatingAnimSet,Z_Param_Out_AnimSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->GetRotatingAnim(Z_Param_Direction,Z_Param_Out_AnimSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetGaitAlphaFromSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGaitAlphaFromSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetSpeedGaitFromAlpha)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKLSSpeedGait*)Z_Param__Result=P_THIS->GetSpeedGaitFromAlpha(Z_Param_SpeedAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetSpeedGaitFromSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKLSSpeedGait*)Z_Param__Result=P_THIS->GetSpeedGaitFromSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionData::execGetPlayRateClamp)
	{
		P_GET_UBOOL(Z_Param_Crouching);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetPlayRateClamp(Z_Param_Crouching);
		P_NATIVE_END;
	}
	void UKLSLocomotionData::StaticRegisterNativesUKLSLocomotionData()
	{
		UClass* Class = UKLSLocomotionData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGaitAlphaFromSpeed", &UKLSLocomotionData::execGetGaitAlphaFromSpeed },
			{ "GetInterpolationSpeeds", &UKLSLocomotionData::execGetInterpolationSpeeds },
			{ "GetPlayRateClamp", &UKLSLocomotionData::execGetPlayRateClamp },
			{ "GetRotatingAnim", &UKLSLocomotionData::execGetRotatingAnim },
			{ "GetRotatingPivotSet", &UKLSLocomotionData::execGetRotatingPivotSet },
			{ "GetSpeedGaitFromAlpha", &UKLSLocomotionData::execGetSpeedGaitFromAlpha },
			{ "GetSpeedGaitFromSpeed", &UKLSLocomotionData::execGetSpeedGaitFromSpeed },
			{ "GetStrafingAnim", &UKLSLocomotionData::execGetStrafingAnim },
			{ "GetStrafingPivotSet", &UKLSLocomotionData::execGetStrafingPivotSet },
			{ "SelectCrouchPivotSet", &UKLSLocomotionData::execSelectCrouchPivotSet },
			{ "SelectCrouchStartAnimation", &UKLSLocomotionData::execSelectCrouchStartAnimation },
			{ "SelectCrouchStopAnimation", &UKLSLocomotionData::execSelectCrouchStopAnimation },
			{ "SelectCrouchTurnInPlaceAnimation", &UKLSLocomotionData::execSelectCrouchTurnInPlaceAnimation },
			{ "SelectJumpSet", &UKLSLocomotionData::execSelectJumpSet },
			{ "SelectPivotSet", &UKLSLocomotionData::execSelectPivotSet },
			{ "SelectStartAnimation", &UKLSLocomotionData::execSelectStartAnimation },
			{ "SelectStopAnimation", &UKLSLocomotionData::execSelectStopAnimation },
			{ "SelectTurnInPlaceAnimation", &UKLSLocomotionData::execSelectTurnInPlaceAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics
	{
		struct KLSLocomotionData_eventGetGaitAlphaFromSpeed_Parms
		{
			float Speed;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetGaitAlphaFromSpeed_Parms, Speed), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetGaitAlphaFromSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetGaitAlphaFromSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::KLSLocomotionData_eventGetGaitAlphaFromSpeed_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics
	{
		struct KLSLocomotionData_eventGetInterpolationSpeeds_Parms
		{
			FKLSInterpolationSpeeds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetInterpolationSpeeds_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSInterpolationSpeeds, METADATA_PARAMS(nullptr, 0) }; // 3856928015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetInterpolationSpeeds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::KLSLocomotionData_eventGetInterpolationSpeeds_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics
	{
		struct KLSLocomotionData_eventGetPlayRateClamp_Parms
		{
			bool Crouching;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouching_MetaData[];
#endif
		static void NewProp_Crouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crouching;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventGetPlayRateClamp_Parms*)Obj)->Crouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching = { "Crouching", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventGetPlayRateClamp_Parms), &Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetPlayRateClamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_Crouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "Comment", "//Helper Functions\n" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
		{ "ToolTip", "Helper Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetPlayRateClamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::KLSLocomotionData_eventGetPlayRateClamp_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics
	{
		struct KLSLocomotionData_eventGetRotatingAnim_Parms
		{
			float Direction;
			FKLSRotatingAnimSet AnimSet;
			FKLSAnimData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingAnim_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_AnimSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_AnimSet = { "AnimSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingAnim_Parms, AnimSet), Z_Construct_UScriptStruct_FKLSRotatingAnimSet, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_AnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_AnimSet_MetaData)) }; // 920557042
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingAnim_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_AnimSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetRotatingAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::KLSLocomotionData_eventGetRotatingAnim_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics
	{
		struct KLSLocomotionData_eventGetRotatingPivotSet_Parms
		{
			float Direction;
			FKLSRotatingPivotAnimSet AnimSet;
			bool bIsLeftFootUp;
			FKLSPivotAnimSet ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingPivotSet_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_AnimSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_AnimSet = { "AnimSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingPivotSet_Parms, AnimSet), Z_Construct_UScriptStruct_FKLSRotatingPivotAnimSet, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_AnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_AnimSet_MetaData)) }; // 2837288170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventGetRotatingPivotSet_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventGetRotatingPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetRotatingPivotSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSPivotAnimSet, METADATA_PARAMS(nullptr, 0) }; // 2908252243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_AnimSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetRotatingPivotSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::KLSLocomotionData_eventGetRotatingPivotSet_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics
	{
		struct KLSLocomotionData_eventGetSpeedGaitFromAlpha_Parms
		{
			float SpeedAlpha;
			EKLSSpeedGait ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_SpeedAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_SpeedAlpha = { "SpeedAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetSpeedGaitFromAlpha_Parms, SpeedAlpha), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_SpeedAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_SpeedAlpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetSpeedGaitFromAlpha_Parms, ReturnValue), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(nullptr, 0) }; // 2494966342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_SpeedAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetSpeedGaitFromAlpha", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::KLSLocomotionData_eventGetSpeedGaitFromAlpha_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics
	{
		struct KLSLocomotionData_eventGetSpeedGaitFromSpeed_Parms
		{
			float Speed;
			EKLSSpeedGait ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetSpeedGaitFromSpeed_Parms, Speed), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetSpeedGaitFromSpeed_Parms, ReturnValue), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(nullptr, 0) }; // 2494966342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetSpeedGaitFromSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::KLSLocomotionData_eventGetSpeedGaitFromSpeed_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics
	{
		struct KLSLocomotionData_eventGetStrafingAnim_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			FKLSDefaultAnimSet AnimSet;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingAnim_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_AnimSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_AnimSet = { "AnimSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingAnim_Parms, AnimSet), Z_Construct_UScriptStruct_FKLSDefaultAnimSet, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_AnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_AnimSet_MetaData)) }; // 2196413265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingAnim_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_AnimSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetStrafingAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::KLSLocomotionData_eventGetStrafingAnim_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics
	{
		struct KLSLocomotionData_eventGetStrafingPivotSet_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			FKLSDefaultPivotAnimSet AnimSet;
			FKLSPivotAnimSet ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSet;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingPivotSet_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_AnimSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_AnimSet = { "AnimSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingPivotSet_Parms, AnimSet), Z_Construct_UScriptStruct_FKLSDefaultPivotAnimSet, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_AnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_AnimSet_MetaData)) }; // 3791292692
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventGetStrafingPivotSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSPivotAnimSet, METADATA_PARAMS(nullptr, 0) }; // 2908252243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_AnimSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "GetStrafingPivotSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::KLSLocomotionData_eventGetStrafingPivotSet_Parms), Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics
	{
		struct KLSLocomotionData_eventSelectCrouchPivotSet_Parms
		{
			EKLSCardinalDirection VelocityCardinalDirection;
			EKLSCardinalDirection InputCardinalDirection;
			float Direction;
			bool IsStrafing;
			bool bIsLeftFootUp;
			bool SoftPivot;
			FKLSPivotAnimSet ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityCardinalDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputCardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
		static void NewProp_SoftPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SoftPivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection = { "VelocityCardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchPivotSet_Parms, VelocityCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection = { "InputCardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchPivotSet_Parms, InputCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchPivotSet_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectCrouchPivotSet_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectCrouchPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectCrouchPivotSet_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectCrouchPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData)) };
	void Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_SoftPivot_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectCrouchPivotSet_Parms*)Obj)->SoftPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_SoftPivot = { "SoftPivot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectCrouchPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_SoftPivot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchPivotSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSPivotAnimSet, METADATA_PARAMS(nullptr, 0) }; // 2908252243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_VelocityCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_InputCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_SoftPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectCrouchPivotSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::KLSLocomotionData_eventSelectCrouchPivotSet_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectCrouchStartAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			float Direction;
			bool IsStrafing;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchStartAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchStartAnimation_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectCrouchStartAnimation_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectCrouchStartAnimation_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchStartAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectCrouchStartAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::KLSLocomotionData_eventSelectCrouchStartAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectCrouchStopAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			bool bIsLeftFootUp;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchStopAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectCrouchStopAnimation_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectCrouchStopAnimation_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchStopAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectCrouchStopAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::KLSLocomotionData_eventSelectCrouchStopAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectCrouchTurnInPlaceAnimation_Parms
		{
			float TurnDirection;
			FKLSAnimData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_TurnDirection = { "TurnDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchTurnInPlaceAnimation_Parms, TurnDirection), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectCrouchTurnInPlaceAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_TurnDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectCrouchTurnInPlaceAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::KLSLocomotionData_eventSelectCrouchTurnInPlaceAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics
	{
		struct KLSLocomotionData_eventSelectJumpSet_Parms
		{
			FKLSJumpSelectorInfo JumpSelectInfo;
			FGameplayTag JumpTag;
			FKLSJumpSet ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpSelectInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpSelectInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpSelectInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpSelectInfo = { "JumpSelectInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectJumpSet_Parms, JumpSelectInfo), Z_Construct_UScriptStruct_FKLSJumpSelectorInfo, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpSelectInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpSelectInfo_MetaData)) }; // 1251360823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpTag = { "JumpTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectJumpSet_Parms, JumpTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectJumpSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSJumpSet, METADATA_PARAMS(nullptr, 0) }; // 1383416261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpSelectInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_JumpTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectJumpSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::KLSLocomotionData_eventSelectJumpSet_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics
	{
		struct KLSLocomotionData_eventSelectPivotSet_Parms
		{
			EKLSCardinalDirection VelocityCardinalDirection;
			EKLSCardinalDirection InputCardinalDirection;
			float Direction;
			bool IsStrafing;
			EKLSSpeedGait SpeedGait;
			bool bIsLeftFootUp;
			bool SoftPivot;
			FKLSPivotAnimSet ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityCardinalDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputCardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
		static void NewProp_SoftPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SoftPivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection = { "VelocityCardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectPivotSet_Parms, VelocityCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection = { "InputCardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectPivotSet_Parms, InputCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectPivotSet_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectPivotSet_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectPivotSet_Parms, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait_MetaData)) }; // 2494966342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectPivotSet_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp_MetaData)) };
	void Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SoftPivot_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectPivotSet_Parms*)Obj)->SoftPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SoftPivot = { "SoftPivot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectPivotSet_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SoftPivot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectPivotSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSPivotAnimSet, METADATA_PARAMS(nullptr, 0) }; // 2908252243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_VelocityCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_InputCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_SoftPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectPivotSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::KLSLocomotionData_eventSelectPivotSet_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectStartAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			float Direction;
			bool IsStrafing;
			EKLSSpeedGait SpeedGait;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStartAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStartAnimation_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectStartAnimation_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectStartAnimation_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStartAnimation_Parms, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait_MetaData)) }; // 2494966342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStartAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "Comment", "//Animations Selectors\n" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
		{ "ToolTip", "Animations Selectors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectStartAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::KLSLocomotionData_eventSelectStartAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectStopAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			EKLSSpeedGait SpeedGait;
			bool bIsLeftFootUp;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStopAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStopAnimation_Parms, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait_MetaData)) }; // 2494966342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSLocomotionData_eventSelectStopAnimation_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionData_eventSelectStopAnimation_Parms), &Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectStopAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectStopAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::KLSLocomotionData_eventSelectStopAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics
	{
		struct KLSLocomotionData_eventSelectTurnInPlaceAnimation_Parms
		{
			float TurnDirection;
			FKLSAnimData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_TurnDirection = { "TurnDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectTurnInPlaceAnimation_Parms, TurnDirection), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_TurnDirection_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionData_eventSelectTurnInPlaceAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_TurnDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|AnimationSelection" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionData, nullptr, "SelectTurnInPlaceAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::KLSLocomotionData_eventSelectTurnInPlaceAnimation_Parms), Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSLocomotionData);
	UClass* Z_Construct_UClass_UKLSLocomotionData_NoRegister()
	{
		return UKLSLocomotionData::StaticClass();
	}
	struct Z_Construct_UClass_UKLSLocomotionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandingAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAnimSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchAnimSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSLocomotionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSLocomotionData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetGaitAlphaFromSpeed, "GetGaitAlphaFromSpeed" }, // 3261551423
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetInterpolationSpeeds, "GetInterpolationSpeeds" }, // 2337977279
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetPlayRateClamp, "GetPlayRateClamp" }, // 504492564
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetRotatingAnim, "GetRotatingAnim" }, // 2899817623
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetRotatingPivotSet, "GetRotatingPivotSet" }, // 161662695
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromAlpha, "GetSpeedGaitFromAlpha" }, // 199051
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetSpeedGaitFromSpeed, "GetSpeedGaitFromSpeed" }, // 23076763
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetStrafingAnim, "GetStrafingAnim" }, // 3494750477
		{ &Z_Construct_UFunction_UKLSLocomotionData_GetStrafingPivotSet, "GetStrafingPivotSet" }, // 1839561460
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchPivotSet, "SelectCrouchPivotSet" }, // 1277924587
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStartAnimation, "SelectCrouchStartAnimation" }, // 4238196006
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchStopAnimation, "SelectCrouchStopAnimation" }, // 945625315
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectCrouchTurnInPlaceAnimation, "SelectCrouchTurnInPlaceAnimation" }, // 1863489915
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectJumpSet, "SelectJumpSet" }, // 133872285
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectPivotSet, "SelectPivotSet" }, // 2786493724
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectStartAnimation, "SelectStartAnimation" }, // 2356661503
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectStopAnimation, "SelectStopAnimation" }, // 63743647
		{ &Z_Construct_UFunction_UKLSLocomotionData_SelectTurnInPlaceAnimation, "SelectTurnInPlaceAnimation" }, // 672733542
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///Base Locomotion data Asset\n" },
		{ "IncludePath", "Data/KLSDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
		{ "ToolTip", "Base Locomotion data Asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSLocomotionData, Settings), Z_Construct_UScriptStruct_FKLSDataSettings, METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_Settings_MetaData)) }; // 978798090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_StandingAnimations_MetaData[] = {
		{ "Category", "Standing" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_StandingAnimations = { "StandingAnimations", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSLocomotionData, StandingAnimations), Z_Construct_UScriptStruct_FKLSStandingAnimations, METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_StandingAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_StandingAnimations_MetaData)) }; // 2632824352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_JumpAnimations_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_JumpAnimations = { "JumpAnimations", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSLocomotionData, JumpAnimations), Z_Construct_UScriptStruct_FKLSLocomotionJump, METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_JumpAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_JumpAnimations_MetaData)) }; // 1686324718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_CrouchAnimSet_MetaData[] = {
		{ "Category", "Crouch" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_CrouchAnimSet = { "CrouchAnimSet", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSLocomotionData, CrouchAnimSet), Z_Construct_UScriptStruct_FKLSCrouchAnimSet, METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_CrouchAnimSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_CrouchAnimSet_MetaData)) }; // 3690604934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSLocomotionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_StandingAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_JumpAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSLocomotionData_Statics::NewProp_CrouchAnimSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSLocomotionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSLocomotionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSLocomotionData_Statics::ClassParams = {
		&UKLSLocomotionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKLSLocomotionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSLocomotionData()
	{
		if (!Z_Registration_Info_UClass_UKLSLocomotionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSLocomotionData.OuterSingleton, Z_Construct_UClass_UKLSLocomotionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSLocomotionData.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSLocomotionData>()
	{
		return UKLSLocomotionData::StaticClass();
	}
	UKLSLocomotionData::UKLSLocomotionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSLocomotionData);
	UKLSLocomotionData::~UKLSLocomotionData() {}
	void UKLSMaskingData::StaticRegisterNativesUKLSMaskingData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSMaskingData);
	UClass* Z_Construct_UClass_UKLSMaskingData_NoRegister()
	{
		return UKLSMaskingData::StaticClass();
	}
	struct Z_Construct_UClass_UKLSMaskingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdleMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WalkMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RunMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchIdleMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchIdleMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAimMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchAimMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAimBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchAimBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAimBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchAimBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMovingMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchMovingMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpingMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpingMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallingMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FallingMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSMaskingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/KLSDataAssets.h" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_IdleMask_MetaData[] = {
		{ "Category", "Stand | Idle" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_IdleMask = { "IdleMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, IdleMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_IdleMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_IdleMask_MetaData)) }; // 1488872049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimMask_MetaData[] = {
		{ "Category", "Stand | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimMask = { "AimMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, AimMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimMask_MetaData)) }; // 1488872049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendInTime_MetaData[] = {
		{ "Category", "Stand | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendInTime = { "AimBlendInTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, AimBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendOutTime_MetaData[] = {
		{ "Category", "Stand | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendOutTime = { "AimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, AimBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_WalkMask_MetaData[] = {
		{ "Category", "Stand | Moving | Walk" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_WalkMask = { "WalkMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, WalkMask), Z_Construct_UScriptStruct_FKLSGaitMask, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_WalkMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_WalkMask_MetaData)) }; // 2468520539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_RunMask_MetaData[] = {
		{ "Category", "Stand | Moving | Run" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_RunMask = { "RunMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, RunMask), Z_Construct_UScriptStruct_FKLSGaitMask, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_RunMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_RunMask_MetaData)) }; // 2468520539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_SprintMask_MetaData[] = {
		{ "Category", "Stand | Moving | Sprint" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_SprintMask = { "SprintMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, SprintMask), Z_Construct_UScriptStruct_FKLSGaitMask, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_SprintMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_SprintMask_MetaData)) }; // 2468520539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchIdleMask_MetaData[] = {
		{ "Category", "Crouch | Idle" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchIdleMask = { "CrouchIdleMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, CrouchIdleMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchIdleMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchIdleMask_MetaData)) }; // 1488872049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimMask_MetaData[] = {
		{ "Category", "Crouch | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimMask = { "CrouchAimMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, CrouchAimMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimMask_MetaData)) }; // 1488872049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendInTime_MetaData[] = {
		{ "Category", "Crouch | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendInTime = { "CrouchAimBlendInTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, CrouchAimBlendInTime), METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendOutTime_MetaData[] = {
		{ "Category", "Crouch | Aim" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendOutTime = { "CrouchAimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, CrouchAimBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchMovingMask_MetaData[] = {
		{ "Category", "Crouch | Moving" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchMovingMask = { "CrouchMovingMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, CrouchMovingMask), Z_Construct_UScriptStruct_FKLSGaitMask, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchMovingMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchMovingMask_MetaData)) }; // 2468520539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_JumpingMask_MetaData[] = {
		{ "Category", "In Air" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_JumpingMask = { "JumpingMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, JumpingMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_JumpingMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_JumpingMask_MetaData)) }; // 1488872049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_FallingMask_MetaData[] = {
		{ "Category", "In Air" },
		{ "ModuleRelativePath", "Public/Data/KLSDataAssets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_FallingMask = { "FallingMask", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSMaskingData, FallingMask), Z_Construct_UScriptStruct_FKLSMaskAnimation, METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_FallingMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_FallingMask_MetaData)) }; // 1488872049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSMaskingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_IdleMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_AimBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_WalkMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_RunMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_SprintMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchIdleMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchAimBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_CrouchMovingMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_JumpingMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSMaskingData_Statics::NewProp_FallingMask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSMaskingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSMaskingData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSMaskingData_Statics::ClassParams = {
		&UKLSMaskingData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKLSMaskingData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSMaskingData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSMaskingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSMaskingData()
	{
		if (!Z_Registration_Info_UClass_UKLSMaskingData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSMaskingData.OuterSingleton, Z_Construct_UClass_UKLSMaskingData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSMaskingData.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSMaskingData>()
	{
		return UKLSMaskingData::StaticClass();
	}
	UKLSMaskingData::UKLSMaskingData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSMaskingData);
	UKLSMaskingData::~UKLSMaskingData() {}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSLocomotionData, UKLSLocomotionData::StaticClass, TEXT("UKLSLocomotionData"), &Z_Registration_Info_UClass_UKLSLocomotionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSLocomotionData), 1817894972U) },
		{ Z_Construct_UClass_UKLSMaskingData, UKLSMaskingData::StaticClass, TEXT("UKLSMaskingData"), &Z_Registration_Info_UClass_UKLSMaskingData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSMaskingData), 676979790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_763298484(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
