// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Character/KLSCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSCharacterMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCharacterMovementComponent();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execUpdateCustomRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCustomRotation(Z_Param_DeltaTime,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execOnRep_StrafeRotAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StrafeRotAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execOnRep_IsStrafing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsStrafing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execOnRep_ReplicatedAcceleration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedAcceleration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execRotationBetween)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_v2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->RotationBetween(Z_Param_Out_v1,Z_Param_Out_v2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execSetMaxGroundSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxGroundSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxGroundSpeed(Z_Param_NewMaxGroundSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execToggleAiming)
	{
		P_GET_UBOOL(Z_Param_Aim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleAiming(Z_Param_Aim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execRotationModeChanged)
	{
		P_GET_UBOOL(Z_Param_Strafe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotationModeChanged(Z_Param_Strafe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execIsStrafing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStrafing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execToggleStrafing)
	{
		P_GET_UBOOL(Z_Param_Strafe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleStrafing(Z_Param_Strafe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSCharacterMovementComponent::execGetReplicatedControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetReplicatedControlRotation();
		P_NATIVE_END;
	}
	void UKLSCharacterMovementComponent::StaticRegisterNativesUKLSCharacterMovementComponent()
	{
		UClass* Class = UKLSCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetReplicatedControlRotation", &UKLSCharacterMovementComponent::execGetReplicatedControlRotation },
			{ "IsAiming", &UKLSCharacterMovementComponent::execIsAiming },
			{ "IsStrafing", &UKLSCharacterMovementComponent::execIsStrafing },
			{ "OnRep_IsStrafing", &UKLSCharacterMovementComponent::execOnRep_IsStrafing },
			{ "OnRep_ReplicatedAcceleration", &UKLSCharacterMovementComponent::execOnRep_ReplicatedAcceleration },
			{ "OnRep_StrafeRotAlpha", &UKLSCharacterMovementComponent::execOnRep_StrafeRotAlpha },
			{ "RotationBetween", &UKLSCharacterMovementComponent::execRotationBetween },
			{ "RotationModeChanged", &UKLSCharacterMovementComponent::execRotationModeChanged },
			{ "SetMaxGroundSpeed", &UKLSCharacterMovementComponent::execSetMaxGroundSpeed },
			{ "ToggleAiming", &UKLSCharacterMovementComponent::execToggleAiming },
			{ "ToggleStrafing", &UKLSCharacterMovementComponent::execToggleStrafing },
			{ "UpdateCustomRotation", &UKLSCharacterMovementComponent::execUpdateCustomRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics
	{
		struct KLSCharacterMovementComponent_eventGetReplicatedControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventGetReplicatedControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Rotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "GetReplicatedControlRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::KLSCharacterMovementComponent_eventGetReplicatedControlRotation_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics
	{
		struct KLSCharacterMovementComponent_eventIsAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KLSCharacterMovementComponent_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSCharacterMovementComponent_eventIsAiming_Parms), &Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Rotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "IsAiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::KLSCharacterMovementComponent_eventIsAiming_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics
	{
		struct KLSCharacterMovementComponent_eventIsStrafing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KLSCharacterMovementComponent_eventIsStrafing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSCharacterMovementComponent_eventIsStrafing_Parms), &Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Rotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "IsStrafing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::KLSCharacterMovementComponent_eventIsStrafing_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "OnRep_IsStrafing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "OnRep_StrafeRotAlpha", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics
	{
		struct KLSCharacterMovementComponent_eventRotationBetween_Parms
		{
			FVector v1;
			FVector v2;
			FRotator ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_v1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_v1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_v2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_v2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v1 = { "v1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventRotationBetween_Parms, v1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v2 = { "v2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventRotationBetween_Parms, v2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventRotationBetween_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_v2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS Helpers" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "RotationBetween", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::KLSCharacterMovementComponent_eventRotationBetween_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics
	{
		struct KLSCharacterMovementComponent_eventRotationModeChanged_Parms
		{
			bool Strafe;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strafe_MetaData[];
#endif
		static void NewProp_Strafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Strafe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe_SetBit(void* Obj)
	{
		((KLSCharacterMovementComponent_eventRotationModeChanged_Parms*)Obj)->Strafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe = { "Strafe", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSCharacterMovementComponent_eventRotationModeChanged_Parms), &Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::NewProp_Strafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "RotationModeChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::KLSCharacterMovementComponent_eventRotationModeChanged_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics
	{
		struct KLSCharacterMovementComponent_eventSetMaxGroundSpeed_Parms
		{
			float NewMaxGroundSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxGroundSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::NewProp_NewMaxGroundSpeed = { "NewMaxGroundSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventSetMaxGroundSpeed_Parms, NewMaxGroundSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::NewProp_NewMaxGroundSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Speed" },
		{ "Comment", "// Custom Movement Speed\n" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
		{ "ToolTip", "Custom Movement Speed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "SetMaxGroundSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::KLSCharacterMovementComponent_eventSetMaxGroundSpeed_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics
	{
		struct KLSCharacterMovementComponent_eventToggleAiming_Parms
		{
			bool Aim;
		};
		static void NewProp_Aim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Aim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::NewProp_Aim_SetBit(void* Obj)
	{
		((KLSCharacterMovementComponent_eventToggleAiming_Parms*)Obj)->Aim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::NewProp_Aim = { "Aim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSCharacterMovementComponent_eventToggleAiming_Parms), &Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::NewProp_Aim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::NewProp_Aim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Rotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "ToggleAiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::KLSCharacterMovementComponent_eventToggleAiming_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics
	{
		struct KLSCharacterMovementComponent_eventToggleStrafing_Parms
		{
			bool Strafe;
		};
		static void NewProp_Strafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Strafe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::NewProp_Strafe_SetBit(void* Obj)
	{
		((KLSCharacterMovementComponent_eventToggleStrafing_Parms*)Obj)->Strafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::NewProp_Strafe = { "Strafe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSCharacterMovementComponent_eventToggleStrafing_Parms), &Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::NewProp_Strafe_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::NewProp_Strafe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS | Rotation" },
		{ "Comment", "// Strafing Functions\n" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
		{ "ToolTip", "Strafing Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "ToggleStrafing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::KLSCharacterMovementComponent_eventToggleStrafing_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics
	{
		struct KLSCharacterMovementComponent_eventUpdateCustomRotation_Parms
		{
			float DeltaTime;
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventUpdateCustomRotation_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSCharacterMovementComponent_eventUpdateCustomRotation_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSCharacterMovementComponent, nullptr, "UpdateCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::KLSCharacterMovementComponent_eventUpdateCustomRotation_Parms), Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSCharacterMovementComponent);
	UClass* Z_Construct_UClass_UKLSCharacterMovementComponent_NoRegister()
	{
		return UKLSCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKLSCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseKLSReplicatedSpeed_MetaData[];
#endif
		static void NewProp_UseKLSReplicatedSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseKLSReplicatedSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchMaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchMaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStrafeWhenAiming_MetaData[];
#endif
		static void NewProp_AutoStrafeWhenAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoStrafeWhenAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPivoting_MetaData[];
#endif
		static void NewProp_bIsPivoting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPivoting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStrafing_MetaData[];
#endif
		static void NewProp_bIsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeRotAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeRotAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrafeRotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PivotMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasStrafing_MetaData[];
#endif
		static void NewProp_WasStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstRotationUpdate_MetaData[];
#endif
		static void NewProp_FirstRotationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstRotationUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_GetReplicatedControlRotation, "GetReplicatedControlRotation" }, // 4052939482
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_IsAiming, "IsAiming" }, // 2937220052
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_IsStrafing, "IsStrafing" }, // 4110417918
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_IsStrafing, "OnRep_IsStrafing" }, // 420616760
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 404620127
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_OnRep_StrafeRotAlpha, "OnRep_StrafeRotAlpha" }, // 3254728933
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationBetween, "RotationBetween" }, // 2850611584
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_RotationModeChanged, "RotationModeChanged" }, // 3224576880
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_SetMaxGroundSpeed, "SetMaxGroundSpeed" }, // 2466045871
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleAiming, "ToggleAiming" }, // 3756596489
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_ToggleStrafing, "ToggleStrafing" }, // 2843649624
		{ &Z_Construct_UFunction_UKLSCharacterMovementComponent_UpdateCustomRotation, "UpdateCustomRotation" }, // 2223848013
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/KLSCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed_MetaData[] = {
		{ "Category", "KLS|MovementSpeeds" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->UseKLSReplicatedSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed = { "UseKLSReplicatedSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_MaxGroundSpeed_MetaData[] = {
		{ "Category", "KLS|MovementSpeeds" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_MaxGroundSpeed = { "MaxGroundSpeed", nullptr, (EPropertyFlags)0x0010000000010025, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, MaxGroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_MaxGroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_MaxGroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CrouchMaxAcceleration_MetaData[] = {
		{ "Category", "KLS|MovementSpeeds" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CrouchMaxAcceleration = { "CrouchMaxAcceleration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, CrouchMaxAcceleration), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CrouchMaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CrouchMaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CustomRotationYaw_MetaData[] = {
		{ "Category", "KLS|AnimRotation" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CustomRotationYaw = { "CustomRotationYaw", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, CustomRotationYaw), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CustomRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CustomRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming_MetaData[] = {
		{ "Category", "KLS|AnimRotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->AutoStrafeWhenAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming = { "AutoStrafeWhenAiming", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_RotationDirection_MetaData[] = {
		{ "Category", "KLS|AnimData" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, RotationDirection), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_RotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_RotationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting_MetaData[] = {
		{ "Category", "KLS|AnimData" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->bIsPivoting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting = { "bIsPivoting", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, ReplicatedAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->bIsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing = { "bIsStrafing", "OnRep_IsStrafing", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedControlRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedControlRotation = { "ReplicatedControlRotation", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, ReplicatedControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotAlpha = { "StrafeRotAlpha", "OnRep_StrafeRotAlpha", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, StrafeRotAlpha), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotationRate_MetaData[] = {
		{ "Category", "KLS|Rotation" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotationRate = { "StrafeRotationRate", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, StrafeRotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_PivotMultiplier_MetaData[] = {
		{ "Category", "Pivot" },
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_PivotMultiplier = { "PivotMultiplier", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSCharacterMovementComponent, PivotMultiplier), METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_PivotMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_PivotMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->WasStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing = { "WasStrafing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->FirstRotationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate = { "FirstRotationUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/KLSCharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UKLSCharacterMovementComponent*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UKLSCharacterMovementComponent), &Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_UseKLSReplicatedSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_MaxGroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CrouchMaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_CustomRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_AutoStrafeWhenAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_RotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsPivoting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_ReplicatedControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_StrafeRotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_PivotMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_WasStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_FirstRotationUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::NewProp_bIsAccelerating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::ClassParams = {
		&UKLSCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UKLSCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UKLSCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSCharacterMovementComponent.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSCharacterMovementComponent>()
	{
		return UKLSCharacterMovementComponent::StaticClass();
	}

	void UKLSCharacterMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MaxGroundSpeed(TEXT("MaxGroundSpeed"));
		static const FName Name_RotationDirection(TEXT("RotationDirection"));
		static const FName Name_bIsPivoting(TEXT("bIsPivoting"));
		static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));
		static const FName Name_bIsStrafing(TEXT("bIsStrafing"));
		static const FName Name_bIsAiming(TEXT("bIsAiming"));
		static const FName Name_ReplicatedControlRotation(TEXT("ReplicatedControlRotation"));
		static const FName Name_StrafeRotAlpha(TEXT("StrafeRotAlpha"));

		const bool bIsValid = true
			&& Name_MaxGroundSpeed == ClassReps[(int32)ENetFields_Private::MaxGroundSpeed].Property->GetFName()
			&& Name_RotationDirection == ClassReps[(int32)ENetFields_Private::RotationDirection].Property->GetFName()
			&& Name_bIsPivoting == ClassReps[(int32)ENetFields_Private::bIsPivoting].Property->GetFName()
			&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName()
			&& Name_bIsStrafing == ClassReps[(int32)ENetFields_Private::bIsStrafing].Property->GetFName()
			&& Name_bIsAiming == ClassReps[(int32)ENetFields_Private::bIsAiming].Property->GetFName()
			&& Name_ReplicatedControlRotation == ClassReps[(int32)ENetFields_Private::ReplicatedControlRotation].Property->GetFName()
			&& Name_StrafeRotAlpha == ClassReps[(int32)ENetFields_Private::StrafeRotAlpha].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UKLSCharacterMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSCharacterMovementComponent);
	UKLSCharacterMovementComponent::~UKLSCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSCharacterMovementComponent, UKLSCharacterMovementComponent::StaticClass, TEXT("UKLSCharacterMovementComponent"), &Z_Registration_Info_UClass_UKLSCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSCharacterMovementComponent), 2054478537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_1460858845(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
