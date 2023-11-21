// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Library/KLSLocomotionBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
#include "KaiLocomotion/Public/Data/KLSCharacterData.h"
#include "SequenceEvaluatorLibrary.h"
#include "SequencePlayerLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSLocomotionBlueprintLibrary() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceEvaluatorReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSLocomotionBlueprintLibrary();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimationInfo();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharacterData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCustomRotationData();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execGetMaskingGroupName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::GetMaskingGroupName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execTryLinkAnimLayer)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_UBOOL(Z_Param_UnlinkGroupIfInvalid);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKLSLocomotionBlueprintLibrary::TryLinkAnimLayer(Z_Param_Mesh,Z_Param_InClass,Z_Param_UnlinkGroupIfInvalid,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execPredictJumpPathDistance)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ApexLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LandLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_JumpStartLoc);
		P_GET_UBOOL_REF(Z_Param_Out_bObstacleHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKLSLocomotionBlueprintLibrary::PredictJumpPathDistance(Z_Param_MovementComponent,Z_Param_Out_ApexLocation,Z_Param_Out_LandLocation,Z_Param_Out_JumpStartLoc,Z_Param_Out_bObstacleHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execPredictProjectilePathCapsule)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FPredictProjectilePathParams,Z_Param_Out_PredictParams);
		P_GET_STRUCT_REF(FPredictProjectilePathResult,Z_Param_Out_PredictResult);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleHalfHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::PredictProjectilePathCapsule(Z_Param_WorldContextObject,Z_Param_Out_PredictParams,Z_Param_Out_PredictResult,Z_Param_CapsuleRadius,Z_Param_CapsuleHalfHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execFindLandLocation)
	{
		P_GET_OBJECT(ACharacter,Z_Param_CharacterOwner);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LandLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKLSLocomotionBlueprintLibrary::FindLandLocation(Z_Param_CharacterOwner,Z_Param_Out_LandLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execRotationMatching)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRotAlpha);
		P_GET_STRUCT_REF(FKLSCharacterData,Z_Param_Out_CharacterData);
		P_GET_STRUCT_REF(FKLSAnimationInfo,Z_Param_Out_AnimInfo);
		P_GET_STRUCT_REF(FKLSCustomRotationData,Z_Param_Out_RotationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::RotationMatching(Z_Param_DeltaTime,Z_Param_InterpSpeed,Z_Param_AnimRotAlpha,Z_Param_Out_CharacterData,Z_Param_Out_AnimInfo,Z_Param_Out_RotationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execPredictGroundMovementPivotLocation)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::PredictGroundMovementPivotLocation(Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execPredictGroundMovementStopLocation)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::PredictGroundMovementStopLocation(Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execSetPlayRateToMatchSpeed)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedToMatch);
		P_GET_STRUCT(FVector2D,Z_Param_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::SetPlayRateToMatchSpeed(Z_Param_Out_SequencePlayer,Z_Param_SpeedToMatch,Z_Param_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execDistanceMatchToTarget)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceToTarget);
		P_GET_STRUCT_REF(FKLSAnimData,Z_Param_Out_AnimData);
		P_GET_UBOOL(Z_Param_ShouldDistanceMatch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopDistanceThreshHold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimEndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::DistanceMatchToTarget(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_DistanceToTarget,Z_Param_Out_AnimData,Z_Param_ShouldDistanceMatch,Z_Param_StopDistanceThreshHold,Z_Param_AnimEndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execAdvanceTimeByDistanceMatching)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DesiredPlayRate);
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceTraveled);
		P_GET_STRUCT_REF(FKLSAnimData,Z_Param_Out_AnimData);
		P_GET_STRUCT(FVector2D,Z_Param_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::AdvanceTimeByDistanceMatching(Z_Param_Out_DesiredPlayRate,Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_DistanceTraveled,Z_Param_Out_AnimData,Z_Param_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execGetTimeAfterDistanceTraveled)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceTraveled);
		P_GET_STRUCT_REF(FKLSAnimData,Z_Param_Out_AnimData);
		P_GET_UBOOL(Z_Param_bAllowLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::GetTimeAfterDistanceTraveled(Z_Param_CurrentTime,Z_Param_DistanceTraveled,Z_Param_Out_AnimData,Z_Param_bAllowLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execGetOppositeCardinalDirectional)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CurrentDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKLSCardinalDirection*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::GetOppositeCardinalDirectional(EKLSCardinalDirection(Z_Param_CurrentDirection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execSelectCardinalDirectionFromAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeadZone);
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CurrentDirection);
		P_GET_UBOOL(Z_Param_bUseCurrentDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EKLSCardinalDirection*)Z_Param__Result=UKLSLocomotionBlueprintLibrary::SelectCardinalDirectionFromAngle(Z_Param_Angle,Z_Param_DeadZone,EKLSCardinalDirection(Z_Param_CurrentDirection),Z_Param_bUseCurrentDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execUpdateCustomRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CustomRotationWeight);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_STRUCT_REF(FKLSCustomRotationData,Z_Param_Out_RotationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKLSLocomotionBlueprintLibrary::UpdateCustomRotation(Z_Param_DeltaTime,Z_Param_CustomRotationWeight,Z_Param_InterpSpeed,Z_Param_IsStrafing,Z_Param_MovementComponent,Z_Param_Out_RotationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSLocomotionBlueprintLibrary::execUpdateCharacterData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_OBJECT(UAnimInstance,Z_Param_LinkedLayer);
		P_GET_OBJECT(UAnimInstance,Z_Param_MaskLinkedLayer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TurnInPlaceWeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_RotationDirection);
		P_GET_UBOOL(Z_Param_IsPivoting);
		P_GET_UBOOL(Z_Param_bIsAiming);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinLandingDistance);
		P_GET_STRUCT(FRotator,Z_Param_ControlRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StrafeAlpha);
		P_GET_STRUCT_REF(FKLSCharacterData,Z_Param_Out_CharacterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKLSLocomotionBlueprintLibrary::UpdateCharacterData(Z_Param_DeltaTime,Z_Param_MovementComponent,Z_Param_LinkedLayer,Z_Param_MaskLinkedLayer,Z_Param_TurnInPlaceWeight,Z_Param_RotationDirection,Z_Param_IsPivoting,Z_Param_bIsAiming,Z_Param_MinLandingDistance,Z_Param_ControlRotation,Z_Param_StrafeAlpha,Z_Param_Out_CharacterData);
		P_NATIVE_END;
	}
	void UKLSLocomotionBlueprintLibrary::StaticRegisterNativesUKLSLocomotionBlueprintLibrary()
	{
		UClass* Class = UKLSLocomotionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvanceTimeByDistanceMatching", &UKLSLocomotionBlueprintLibrary::execAdvanceTimeByDistanceMatching },
			{ "DistanceMatchToTarget", &UKLSLocomotionBlueprintLibrary::execDistanceMatchToTarget },
			{ "FindLandLocation", &UKLSLocomotionBlueprintLibrary::execFindLandLocation },
			{ "GetMaskingGroupName", &UKLSLocomotionBlueprintLibrary::execGetMaskingGroupName },
			{ "GetOppositeCardinalDirectional", &UKLSLocomotionBlueprintLibrary::execGetOppositeCardinalDirectional },
			{ "GetTimeAfterDistanceTraveled", &UKLSLocomotionBlueprintLibrary::execGetTimeAfterDistanceTraveled },
			{ "PredictGroundMovementPivotLocation", &UKLSLocomotionBlueprintLibrary::execPredictGroundMovementPivotLocation },
			{ "PredictGroundMovementStopLocation", &UKLSLocomotionBlueprintLibrary::execPredictGroundMovementStopLocation },
			{ "PredictJumpPathDistance", &UKLSLocomotionBlueprintLibrary::execPredictJumpPathDistance },
			{ "PredictProjectilePathCapsule", &UKLSLocomotionBlueprintLibrary::execPredictProjectilePathCapsule },
			{ "RotationMatching", &UKLSLocomotionBlueprintLibrary::execRotationMatching },
			{ "SelectCardinalDirectionFromAngle", &UKLSLocomotionBlueprintLibrary::execSelectCardinalDirectionFromAngle },
			{ "SetPlayRateToMatchSpeed", &UKLSLocomotionBlueprintLibrary::execSetPlayRateToMatchSpeed },
			{ "TryLinkAnimLayer", &UKLSLocomotionBlueprintLibrary::execTryLinkAnimLayer },
			{ "UpdateCharacterData", &UKLSLocomotionBlueprintLibrary::execUpdateCharacterData },
			{ "UpdateCustomRotation", &UKLSLocomotionBlueprintLibrary::execUpdateCustomRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms
		{
			float DesiredPlayRate;
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			float DistanceTraveled;
			FKLSAnimData AnimData;
			FVector2D PlayRateClamp;
			FSequenceEvaluatorReference ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTraveled_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTraveled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DesiredPlayRate = { "DesiredPlayRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, DesiredPlayRate), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled = { "DistanceTraveled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, DistanceTraveled), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_AnimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, AnimData), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_AnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_AnimData_MetaData)) }; // 1564066520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DesiredPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_DistanceTraveled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_AnimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "CPP_Default_PlayRateClamp", "(X=0.750,Y=1.250)" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "AdvanceTimeByDistanceMatching", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::KLSLocomotionBlueprintLibrary_eventAdvanceTimeByDistanceMatching_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			float DistanceToTarget;
			FKLSAnimData AnimData;
			bool ShouldDistanceMatch;
			float StopDistanceThreshHold;
			float AnimEndTime;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldDistanceMatch_MetaData[];
#endif
		static void NewProp_ShouldDistanceMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDistanceMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopDistanceThreshHold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopDistanceThreshHold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget = { "DistanceToTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, DistanceToTarget), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, AnimData), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimData_MetaData)) }; // 1564066520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms*)Obj)->ShouldDistanceMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch = { "ShouldDistanceMatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_StopDistanceThreshHold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_StopDistanceThreshHold = { "StopDistanceThreshHold", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, StopDistanceThreshHold), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_StopDistanceThreshHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_StopDistanceThreshHold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimEndTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimEndTime = { "AnimEndTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, AnimEndTime), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimEndTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_DistanceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ShouldDistanceMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_StopDistanceThreshHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_AnimEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "DistanceMatchToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::KLSLocomotionBlueprintLibrary_eventDistanceMatchToTarget_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventFindLandLocation_Parms
		{
			ACharacter* CharacterOwner;
			FVector LandLocation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventFindLandLocation_Parms, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::NewProp_LandLocation = { "LandLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventFindLandLocation_Parms, LandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::NewProp_LandLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "FindLandLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::KLSLocomotionBlueprintLibrary_eventFindLandLocation_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventGetMaskingGroupName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetMaskingGroupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "GetMaskingGroupName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::KLSLocomotionBlueprintLibrary_eventGetMaskingGroupName_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventGetOppositeCardinalDirectional_Parms
		{
			EKLSCardinalDirection CurrentDirection;
			EKLSCardinalDirection ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetOppositeCardinalDirectional_Parms, CurrentDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetOppositeCardinalDirectional_Parms, ReturnValue), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_CurrentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "GetOppositeCardinalDirectional", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::KLSLocomotionBlueprintLibrary_eventGetOppositeCardinalDirectional_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms
		{
			float CurrentTime;
			float DistanceTraveled;
			FKLSAnimData AnimData;
			bool bAllowLooping;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceTraveled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLooping_MetaData[];
#endif
		static void NewProp_bAllowLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLooping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms, CurrentTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_DistanceTraveled = { "DistanceTraveled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms, DistanceTraveled), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_AnimData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms, AnimData), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_AnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_AnimData_MetaData)) }; // 1564066520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms*)Obj)->bAllowLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping = { "bAllowLooping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_CurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_DistanceTraveled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_AnimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_bAllowLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions Taken From Epic's Libraries With Some Modifications\n" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
		{ "ToolTip", "Functions Taken From Epic's Libraries With Some Modifications" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "GetTimeAfterDistanceTraveled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::KLSLocomotionBlueprintLibrary_eventGetTimeAfterDistanceTraveled_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventPredictGroundMovementPivotLocation_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictGroundMovementPivotLocation_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictGroundMovementPivotLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "PredictGroundMovementPivotLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::KLSLocomotionBlueprintLibrary_eventPredictGroundMovementPivotLocation_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventPredictGroundMovementStopLocation_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictGroundMovementStopLocation_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictGroundMovementStopLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "PredictGroundMovementStopLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::KLSLocomotionBlueprintLibrary_eventPredictGroundMovementStopLocation_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms
		{
			UCharacterMovementComponent* MovementComponent;
			FVector ApexLocation;
			FVector LandLocation;
			FVector JumpStartLoc;
			bool bObstacleHit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApexLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpStartLoc;
		static void NewProp_bObstacleHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bObstacleHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_ApexLocation = { "ApexLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms, ApexLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_LandLocation = { "LandLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms, LandLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_JumpStartLoc = { "JumpStartLoc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms, JumpStartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_bObstacleHit_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms*)Obj)->bObstacleHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_bObstacleHit = { "bObstacleHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_bObstacleHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_ApexLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_LandLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_JumpStartLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::NewProp_bObstacleHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "PredictJumpPathDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::KLSLocomotionBlueprintLibrary_eventPredictJumpPathDistance_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms
		{
			const UObject* WorldContextObject;
			FPredictProjectilePathParams PredictParams;
			FPredictProjectilePathResult PredictResult;
			float CapsuleRadius;
			float CapsuleHalfHeight;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictParams = { "PredictParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms, PredictParams), Z_Construct_UScriptStruct_FPredictProjectilePathParams, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictParams_MetaData)) }; // 3860231298
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictResult = { "PredictResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms, PredictResult), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(nullptr, 0) }; // 995417648
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms, CapsuleRadius), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms, CapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleHalfHeight_MetaData)) };
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_PredictResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_CapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "PredictProjectilePathCapsule", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::KLSLocomotionBlueprintLibrary_eventPredictProjectilePathCapsule_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms
		{
			float DeltaTime;
			float InterpSpeed;
			float AnimRotAlpha;
			FKLSCharacterData CharacterData;
			FKLSAnimationInfo AnimInfo;
			FKLSCustomRotationData RotationData;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimRotAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRotAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, InterpSpeed), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimRotAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimRotAlpha = { "AnimRotAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, AnimRotAlpha), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimRotAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimRotAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_CharacterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, CharacterData), Z_Construct_UScriptStruct_FKLSCharacterData, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_CharacterData_MetaData)) }; // 4246693399
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimInfo = { "AnimInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, AnimInfo), Z_Construct_UScriptStruct_FKLSAnimationInfo, METADATA_PARAMS(nullptr, 0) }; // 3164191411
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_RotationData = { "RotationData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, RotationData), Z_Construct_UScriptStruct_FKLSCustomRotationData, METADATA_PARAMS(nullptr, 0) }; // 1484090974
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimRotAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_AnimInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_RotationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "Comment", "//End Of Functions Taken From Epic Libraries\n" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
		{ "ToolTip", "End Of Functions Taken From Epic Libraries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "RotationMatching", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::KLSLocomotionBlueprintLibrary_eventRotationMatching_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms
		{
			float Angle;
			float DeadZone;
			EKLSCardinalDirection CurrentDirection;
			bool bUseCurrentDirection;
			EKLSCardinalDirection ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentDirection_MetaData[];
#endif
		static void NewProp_bUseCurrentDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms, Angle), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_DeadZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms, DeadZone), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_DeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_DeadZone_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms, CurrentDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms*)Obj)->bUseCurrentDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection = { "bUseCurrentDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms, ReturnValue), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_DeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_CurrentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_bUseCurrentDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "SelectCardinalDirectionFromAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::KLSLocomotionBlueprintLibrary_eventSelectCardinalDirectionFromAngle_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms
		{
			FSequencePlayerReference SequencePlayer;
			float SpeedToMatch;
			FVector2D PlayRateClamp;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedToMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SpeedToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SpeedToMatch = { "SpeedToMatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms, SpeedToMatch), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SpeedToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SpeedToMatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_PlayRateClamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_PlayRateClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_PlayRateClamp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_SpeedToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "CPP_Default_PlayRateClamp", "(X=0.750,Y=1.250)" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "SetPlayRateToMatchSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::KLSLocomotionBlueprintLibrary_eventSetPlayRateToMatchSpeed_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms
		{
			USkeletalMeshComponent* Mesh;
			TSubclassOf<UAnimInstance>  InClass;
			bool UnlinkGroupIfInvalid;
			FName GroupName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static void NewProp_UnlinkGroupIfInvalid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnlinkGroupIfInvalid;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_UnlinkGroupIfInvalid_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms*)Obj)->UnlinkGroupIfInvalid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_UnlinkGroupIfInvalid = { "UnlinkGroupIfInvalid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_UnlinkGroupIfInvalid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_UnlinkGroupIfInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "TryLinkAnimLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::KLSLocomotionBlueprintLibrary_eventTryLinkAnimLayer_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms
		{
			float DeltaTime;
			const UCharacterMovementComponent* MovementComponent;
			UAnimInstance* LinkedLayer;
			UAnimInstance* MaskLinkedLayer;
			float TurnInPlaceWeight;
			int32 RotationDirection;
			bool IsPivoting;
			bool bIsAiming;
			float MinLandingDistance;
			FRotator ControlRotation;
			float StrafeAlpha;
			FKLSCharacterData CharacterData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskLinkedLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnInPlaceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPivoting_MetaData[];
#endif
		static void NewProp_IsPivoting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPivoting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLandingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLandingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrafeAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafeAlpha;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_LinkedLayer = { "LinkedLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, LinkedLayer), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MaskLinkedLayer = { "MaskLinkedLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, MaskLinkedLayer), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_TurnInPlaceWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_TurnInPlaceWeight = { "TurnInPlaceWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, TurnInPlaceWeight), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_TurnInPlaceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_TurnInPlaceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_RotationDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, RotationDirection), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_RotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_RotationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms*)Obj)->IsPivoting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting = { "IsPivoting", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MinLandingDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MinLandingDistance = { "MinLandingDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, MinLandingDistance), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MinLandingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MinLandingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_StrafeAlpha_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_StrafeAlpha = { "StrafeAlpha", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, StrafeAlpha), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_StrafeAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_StrafeAlpha_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms, CharacterData), Z_Construct_UScriptStruct_FKLSCharacterData, METADATA_PARAMS(nullptr, 0) }; // 4246693399
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_LinkedLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MaskLinkedLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_TurnInPlaceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_RotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_IsPivoting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_bIsAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_MinLandingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_StrafeAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::NewProp_CharacterData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "UpdateCharacterData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::KLSLocomotionBlueprintLibrary_eventUpdateCharacterData_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics
	{
		struct KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms
		{
			float DeltaTime;
			float CustomRotationWeight;
			float InterpSpeed;
			bool IsStrafing;
			const UCharacterMovementComponent* MovementComponent;
			FKLSCustomRotationData RotationData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomRotationWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRotationWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsStrafing_MetaData[];
#endif
		static void NewProp_IsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_CustomRotationWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_CustomRotationWeight = { "CustomRotationWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms, CustomRotationWeight), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_CustomRotationWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_CustomRotationWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms, InterpSpeed), METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms), &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_RotationData = { "RotationData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms, RotationData), Z_Construct_UScriptStruct_FKLSCustomRotationData, METADATA_PARAMS(nullptr, 0) }; // 1484090974
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_CustomRotationWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::NewProp_RotationData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Function Library" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, nullptr, "UpdateCustomRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::KLSLocomotionBlueprintLibrary_eventUpdateCustomRotation_Parms), Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSLocomotionBlueprintLibrary);
	UClass* Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_NoRegister()
	{
		return UKLSLocomotionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_AdvanceTimeByDistanceMatching, "AdvanceTimeByDistanceMatching" }, // 3103446382
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_DistanceMatchToTarget, "DistanceMatchToTarget" }, // 614694557
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_FindLandLocation, "FindLandLocation" }, // 2452360153
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetMaskingGroupName, "GetMaskingGroupName" }, // 2555665508
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetOppositeCardinalDirectional, "GetOppositeCardinalDirectional" }, // 3892791914
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_GetTimeAfterDistanceTraveled, "GetTimeAfterDistanceTraveled" }, // 1358221865
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementPivotLocation, "PredictGroundMovementPivotLocation" }, // 4022967393
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictGroundMovementStopLocation, "PredictGroundMovementStopLocation" }, // 4241617510
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictJumpPathDistance, "PredictJumpPathDistance" }, // 2176731943
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_PredictProjectilePathCapsule, "PredictProjectilePathCapsule" }, // 3333627757
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_RotationMatching, "RotationMatching" }, // 3000767579
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SelectCardinalDirectionFromAngle, "SelectCardinalDirectionFromAngle" }, // 3739186485
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_SetPlayRateToMatchSpeed, "SetPlayRateToMatchSpeed" }, // 2820597684
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_TryLinkAnimLayer, "TryLinkAnimLayer" }, // 1737071254
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCharacterData, "UpdateCharacterData" }, // 2628228182
		{ &Z_Construct_UFunction_UKLSLocomotionBlueprintLibrary_UpdateCustomRotation, "UpdateCustomRotation" }, // 771483768
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Library/KLSLocomotionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Library/KLSLocomotionBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSLocomotionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::ClassParams = {
		&UKLSLocomotionBlueprintLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSLocomotionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UKLSLocomotionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSLocomotionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSLocomotionBlueprintLibrary.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSLocomotionBlueprintLibrary>()
	{
		return UKLSLocomotionBlueprintLibrary::StaticClass();
	}
	UKLSLocomotionBlueprintLibrary::UKLSLocomotionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSLocomotionBlueprintLibrary);
	UKLSLocomotionBlueprintLibrary::~UKLSLocomotionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSLocomotionBlueprintLibrary, UKLSLocomotionBlueprintLibrary::StaticClass, TEXT("UKLSLocomotionBlueprintLibrary"), &Z_Registration_Info_UClass_UKLSLocomotionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSLocomotionBlueprintLibrary), 3374035463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_852896180(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
