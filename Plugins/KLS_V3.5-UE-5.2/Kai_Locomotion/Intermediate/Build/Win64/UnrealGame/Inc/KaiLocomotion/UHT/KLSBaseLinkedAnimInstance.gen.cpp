// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Animation/KLSBaseLinkedAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "KaiLocomotion/Public/Data/KLSAnimationData.h"
#include "SequenceEvaluatorLibrary.h"
#include "SequencePlayerLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSBaseLinkedAnimInstance() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceEvaluatorReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseLinkedAnimInstance();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSBaseLinkedAnimInstance_NoRegister();
	KAILOCOMOTION_API UClass* Z_Construct_UClass_UKLSLocomotionData_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSGroundAnimState();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodesBonesData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSAnimData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSGroundedAnimationSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSJumpSet();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSLoopAnim();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupFallLoopState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupFallLoopState(Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateJumpApexState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateJumpApexState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupJumpApexState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupJumpApexState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateLandingPredictionState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateLandingPredictionState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupLandingPredictionState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupLandingPredictionState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateJumpingState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateJumpingState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupJumpingState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupJumpingState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateInAirState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInAirState(Z_Param_Out_UpdateContext,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupInAirState)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CharacterMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInAirState(Z_Param_BaseAnimInstance,Z_Param_CharacterMovement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateCrouchingStopState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateCrouchingStopState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupCrouchingStopState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupCrouchingStopState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupCrouchingTipRecoveryState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupCrouchingTipRecoveryState(Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateCrouchingTipState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->UpdateCrouchingTipState(Z_Param_Out_UpdateContext,Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupCrouchingTipState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupCrouchingTipState(Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupCrouchingIdleState)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCrouchingIdleState(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateLoopState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLoopState(Z_Param_Out_UpdateContext,Z_Param_MovementComponent,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupLoopState)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupLoopState(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateStandingPostPivotState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateStandingPostPivotState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_MovementComponent,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingPostPivotState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupStandingPostPivotState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateStandingPrePivotState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateStandingPrePivotState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingPrePivotState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupStandingPrePivotState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateStandingStopState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateStandingStopState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStopState)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupStopState(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingStopState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupStandingStopState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateStandingStartState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_MovementComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->UpdateStandingStartState(Z_Param_Out_UpdateContext,Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance,Z_Param_MovementComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingStartState)
	{
		P_GET_STRUCT_REF(FSequenceEvaluatorReference,Z_Param_Out_SequenceEvaluator);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequenceEvaluatorReference*)Z_Param__Result=P_THIS->SetupStandingStartState(Z_Param_Out_SequenceEvaluator,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingTipRecoveryState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupStandingTipRecoveryState(Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateStandingTipState)
	{
		P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->UpdateStandingTipState(Z_Param_Out_UpdateContext,Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingTipState)
	{
		P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencePlayerReference*)Z_Param__Result=P_THIS->SetupStandingTipState(Z_Param_Out_SequencePlayer,Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetupStandingIdleState)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupStandingIdleState(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSetStandingState)
	{
		P_GET_ENUM(EKLSGroundAnimState,Z_Param_StandingState);
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStandingState(EKLSGroundAnimState(Z_Param_StandingState),Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execUpdateLinkedLayersValues)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLinkedLayersValues(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSelectStopAnimation)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_ENUM(EKLSSpeedGait,Z_Param_SpeedGait);
		P_GET_UBOOL(Z_Param_bIsLeftFootUp);
		P_GET_UBOOL(Z_Param_Crouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectStopAnimation(EKLSCardinalDirection(Z_Param_CardinalDirection),EKLSSpeedGait(Z_Param_SpeedGait),Z_Param_bIsLeftFootUp,Z_Param_Crouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSelectStandingSprintAnimation)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSLoopAnim*)Z_Param__Result=P_THIS->SelectStandingSprintAnimation(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Out_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSelectStandingRunAnimation)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSLoopAnim*)Z_Param__Result=P_THIS->SelectStandingRunAnimation(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Out_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSelectStandingWalkAnimation)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PlayRateClamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSLoopAnim*)Z_Param__Result=P_THIS->SelectStandingWalkAnimation(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Out_PlayRateClamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execSelectStartAnimation)
	{
		P_GET_ENUM(EKLSCardinalDirection,Z_Param_CardinalDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Direction);
		P_GET_UBOOL(Z_Param_IsStrafing);
		P_GET_UBOOL(Z_Param_IsCrouching);
		P_GET_ENUM(EKLSSpeedGait,Z_Param_SpeedGait);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKLSAnimData*)Z_Param__Result=P_THIS->SelectStartAnimation(EKLSCardinalDirection(Z_Param_CardinalDirection),Z_Param_Direction,Z_Param_IsStrafing,Z_Param_IsCrouching,EKLSSpeedGait(Z_Param_SpeedGait));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKLSBaseLinkedAnimInstance::execGetCurrentInterpSpeed)
	{
		P_GET_OBJECT(UKLSBaseAnimInstance,Z_Param_BaseAnimInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentInterpSpeed(Z_Param_BaseAnimInstance);
		P_NATIVE_END;
	}
	void UKLSBaseLinkedAnimInstance::StaticRegisterNativesUKLSBaseLinkedAnimInstance()
	{
		UClass* Class = UKLSBaseLinkedAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentInterpSpeed", &UKLSBaseLinkedAnimInstance::execGetCurrentInterpSpeed },
			{ "SelectStandingRunAnimation", &UKLSBaseLinkedAnimInstance::execSelectStandingRunAnimation },
			{ "SelectStandingSprintAnimation", &UKLSBaseLinkedAnimInstance::execSelectStandingSprintAnimation },
			{ "SelectStandingWalkAnimation", &UKLSBaseLinkedAnimInstance::execSelectStandingWalkAnimation },
			{ "SelectStartAnimation", &UKLSBaseLinkedAnimInstance::execSelectStartAnimation },
			{ "SelectStopAnimation", &UKLSBaseLinkedAnimInstance::execSelectStopAnimation },
			{ "SetStandingState", &UKLSBaseLinkedAnimInstance::execSetStandingState },
			{ "SetupCrouchingIdleState", &UKLSBaseLinkedAnimInstance::execSetupCrouchingIdleState },
			{ "SetupCrouchingStopState", &UKLSBaseLinkedAnimInstance::execSetupCrouchingStopState },
			{ "SetupCrouchingTipRecoveryState", &UKLSBaseLinkedAnimInstance::execSetupCrouchingTipRecoveryState },
			{ "SetupCrouchingTipState", &UKLSBaseLinkedAnimInstance::execSetupCrouchingTipState },
			{ "SetupFallLoopState", &UKLSBaseLinkedAnimInstance::execSetupFallLoopState },
			{ "SetupInAirState", &UKLSBaseLinkedAnimInstance::execSetupInAirState },
			{ "SetupJumpApexState", &UKLSBaseLinkedAnimInstance::execSetupJumpApexState },
			{ "SetupJumpingState", &UKLSBaseLinkedAnimInstance::execSetupJumpingState },
			{ "SetupLandingPredictionState", &UKLSBaseLinkedAnimInstance::execSetupLandingPredictionState },
			{ "SetupLoopState", &UKLSBaseLinkedAnimInstance::execSetupLoopState },
			{ "SetupStandingIdleState", &UKLSBaseLinkedAnimInstance::execSetupStandingIdleState },
			{ "SetupStandingPostPivotState", &UKLSBaseLinkedAnimInstance::execSetupStandingPostPivotState },
			{ "SetupStandingPrePivotState", &UKLSBaseLinkedAnimInstance::execSetupStandingPrePivotState },
			{ "SetupStandingStartState", &UKLSBaseLinkedAnimInstance::execSetupStandingStartState },
			{ "SetupStandingStopState", &UKLSBaseLinkedAnimInstance::execSetupStandingStopState },
			{ "SetupStandingTipRecoveryState", &UKLSBaseLinkedAnimInstance::execSetupStandingTipRecoveryState },
			{ "SetupStandingTipState", &UKLSBaseLinkedAnimInstance::execSetupStandingTipState },
			{ "SetupStopState", &UKLSBaseLinkedAnimInstance::execSetupStopState },
			{ "UpdateCrouchingStopState", &UKLSBaseLinkedAnimInstance::execUpdateCrouchingStopState },
			{ "UpdateCrouchingTipState", &UKLSBaseLinkedAnimInstance::execUpdateCrouchingTipState },
			{ "UpdateInAirState", &UKLSBaseLinkedAnimInstance::execUpdateInAirState },
			{ "UpdateJumpApexState", &UKLSBaseLinkedAnimInstance::execUpdateJumpApexState },
			{ "UpdateJumpingState", &UKLSBaseLinkedAnimInstance::execUpdateJumpingState },
			{ "UpdateLandingPredictionState", &UKLSBaseLinkedAnimInstance::execUpdateLandingPredictionState },
			{ "UpdateLinkedLayersValues", &UKLSBaseLinkedAnimInstance::execUpdateLinkedLayersValues },
			{ "UpdateLoopState", &UKLSBaseLinkedAnimInstance::execUpdateLoopState },
			{ "UpdateStandingPostPivotState", &UKLSBaseLinkedAnimInstance::execUpdateStandingPostPivotState },
			{ "UpdateStandingPrePivotState", &UKLSBaseLinkedAnimInstance::execUpdateStandingPrePivotState },
			{ "UpdateStandingStartState", &UKLSBaseLinkedAnimInstance::execUpdateStandingStartState },
			{ "UpdateStandingStopState", &UKLSBaseLinkedAnimInstance::execUpdateStandingStopState },
			{ "UpdateStandingTipState", &UKLSBaseLinkedAnimInstance::execUpdateStandingTipState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventGetCurrentInterpSpeed_Parms
		{
			const UKLSBaseAnimInstance* BaseAnimInstance;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_BaseAnimInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventGetCurrentInterpSpeed_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_BaseAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_BaseAnimInstance_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventGetCurrentInterpSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "GetCurrentInterpSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::KLSBaseLinkedAnimInstance_eventGetCurrentInterpSpeed_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSelectStandingRunAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			FVector2D PlayRateClamp;
			FKLSLoopAnim ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingRunAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingRunAnimation_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingRunAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSLoopAnim, METADATA_PARAMS(nullptr, 0) }; // 1417082327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SelectStandingRunAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::KLSBaseLinkedAnimInstance_eventSelectStandingRunAnimation_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSelectStandingSprintAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			FVector2D PlayRateClamp;
			FKLSLoopAnim ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingSprintAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingSprintAnimation_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingSprintAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSLoopAnim, METADATA_PARAMS(nullptr, 0) }; // 1417082327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SelectStandingSprintAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::KLSBaseLinkedAnimInstance_eventSelectStandingSprintAnimation_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSelectStandingWalkAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			FVector2D PlayRateClamp;
			FKLSLoopAnim ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRateClamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingWalkAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_PlayRateClamp = { "PlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingWalkAnimation_Parms, PlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStandingWalkAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSLoopAnim, METADATA_PARAMS(nullptr, 0) }; // 1417082327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_PlayRateClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SelectStandingWalkAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::KLSBaseLinkedAnimInstance_eventSelectStandingWalkAnimation_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			float Direction;
			bool IsStrafing;
			bool IsCrouching;
			EKLSSpeedGait SpeedGait;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsCrouching_MetaData[];
#endif
		static void NewProp_IsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCrouching;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms, Direction), METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing_SetBit(void* Obj)
	{
		((KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms*)Obj)->IsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing = { "IsStrafing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms), &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching_SetBit(void* Obj)
	{
		((KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms*)Obj)->IsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching = { "IsCrouching", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms), &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(nullptr, 0) }; // 2494966342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_IsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SelectStartAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::KLSBaseLinkedAnimInstance_eventSelectStartAnimation_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms
		{
			EKLSCardinalDirection CardinalDirection;
			EKLSSpeedGait SpeedGait;
			bool bIsLeftFootUp;
			bool Crouch;
			FKLSAnimData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CardinalDirection_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CardinalDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftFootUp_MetaData[];
#endif
		static void NewProp_bIsLeftFootUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftFootUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crouch_MetaData[];
#endif
		static void NewProp_Crouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Crouch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_CardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_CardinalDirection = { "CardinalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms, CardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(nullptr, 0) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(nullptr, 0) }; // 2494966342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit(void* Obj)
	{
		((KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms*)Obj)->bIsLeftFootUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp = { "bIsLeftFootUp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms), &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch_SetBit(void* Obj)
	{
		((KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms*)Obj)->Crouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch = { "Crouch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms), &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FKLSAnimData, METADATA_PARAMS(nullptr, 0) }; // 1564066520
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_CardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_CardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_bIsLeftFootUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_Crouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SelectStopAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::KLSBaseLinkedAnimInstance_eventSelectStopAnimation_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetStandingState_Parms
		{
			EKLSGroundAnimState StandingState;
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StandingState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StandingState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_StandingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_StandingState = { "StandingState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetStandingState_Parms, StandingState), Z_Construct_UEnum_KaiLocomotion_EKLSGroundAnimState, METADATA_PARAMS(nullptr, 0) }; // 2933957810
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetStandingState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_StandingState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_StandingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetStandingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::KLSBaseLinkedAnimInstance_eventSetStandingState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupCrouchingIdleState_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingIdleState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupCrouchingIdleState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::KLSBaseLinkedAnimInstance_eventSetupCrouchingIdleState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Crouching States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupCrouchingStopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::KLSBaseLinkedAnimInstance_eventSetupCrouchingStopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupCrouchingTipRecoveryState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipRecoveryState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipRecoveryState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipRecoveryState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupCrouchingTipRecoveryState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::KLSBaseLinkedAnimInstance_eventSetupCrouchingTipRecoveryState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupCrouchingTipState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupCrouchingTipState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupCrouchingTipState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::KLSBaseLinkedAnimInstance_eventSetupCrouchingTipState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupFallLoopState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupFallLoopState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupFallLoopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupFallLoopState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupFallLoopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::KLSBaseLinkedAnimInstance_eventSetupFallLoopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupInAirState_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* CharacterMovement;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupInAirState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_CharacterMovement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_CharacterMovement = { "CharacterMovement", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupInAirState_Parms, CharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_CharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_CharacterMovement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::NewProp_CharacterMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupInAirState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::KLSBaseLinkedAnimInstance_eventSetupInAirState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupJumpApexState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpApexState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpApexState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpApexState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupJumpApexState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::KLSBaseLinkedAnimInstance_eventSetupJumpApexState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupJumpingState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpingState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpingState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupJumpingState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupJumpingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::KLSBaseLinkedAnimInstance_eventSetupJumpingState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupLandingPredictionState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupLandingPredictionState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupLandingPredictionState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupLandingPredictionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupLandingPredictionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::KLSBaseLinkedAnimInstance_eventSetupLandingPredictionState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupLoopState_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupLoopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupLoopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::KLSBaseLinkedAnimInstance_eventSetupLoopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingIdleState_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingIdleState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingIdleState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingIdleState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingPostPivotState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPostPivotState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPostPivotState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPostPivotState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingPostPivotState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingPostPivotState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingPrePivotState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingPrePivotState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingStartState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStartState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStartState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStartState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingStartState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingStartState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingStopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingStopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingTipRecoveryState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipRecoveryState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipRecoveryState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipRecoveryState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingTipRecoveryState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingTipRecoveryState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStandingTipState_Parms
		{
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStandingTipState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStandingTipState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::KLSBaseLinkedAnimInstance_eventSetupStandingTipState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventSetupStopState_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventSetupStopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "SetupStopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::KLSBaseLinkedAnimInstance_eventSetupStopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Crouching States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateCrouchingStopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::KLSBaseLinkedAnimInstance_eventUpdateCrouchingStopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateCrouchingTipState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::KLSBaseLinkedAnimInstance_eventUpdateCrouchingTipState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateInAirState_Parms
		{
			FAnimUpdateContext UpdateContext;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateInAirState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateInAirState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateInAirState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::NewProp_MovementComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateInAirState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::KLSBaseLinkedAnimInstance_eventUpdateInAirState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateJumpApexState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::KLSBaseLinkedAnimInstance_eventUpdateJumpApexState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateJumpingState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::KLSBaseLinkedAnimInstance_eventUpdateJumpingState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateLandingPredictionState_Parms
		{
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequenceEvaluatorReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEvaluator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEvaluator;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLandingPredictionState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLandingPredictionState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLandingPredictionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|In Air States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateLandingPredictionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::KLSBaseLinkedAnimInstance_eventUpdateLandingPredictionState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateLinkedLayersValues_Parms
		{
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLinkedLayersValues_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Character Data Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateLinkedLayersValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::KLSBaseLinkedAnimInstance_eventUpdateLinkedLayersValues_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateLoopState_Parms
		{
			FAnimUpdateContext UpdateContext;
			UCharacterMovementComponent* MovementComponent;
			UKLSBaseAnimInstance* BaseAnimInstance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLoopState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLoopState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateLoopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::NewProp_BaseAnimInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateLoopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::KLSBaseLinkedAnimInstance_eventUpdateLoopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UCharacterMovementComponent* MovementComponent;
			UKLSBaseAnimInstance* BaseAnimInstance;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateStandingPostPivotState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::KLSBaseLinkedAnimInstance_eventUpdateStandingPostPivotState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateStandingPrePivotState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::KLSBaseLinkedAnimInstance_eventUpdateStandingPrePivotState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateStandingStartState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::KLSBaseLinkedAnimInstance_eventUpdateStandingStartState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequenceEvaluatorReference SequenceEvaluator;
			UKLSBaseAnimInstance* BaseAnimInstance;
			UCharacterMovementComponent* MovementComponent;
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
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_SequenceEvaluator = { "SequenceEvaluator", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms, SequenceEvaluator), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_SequenceEvaluator_MetaData)) }; // 1982540663
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_MovementComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequenceEvaluatorReference, METADATA_PARAMS(nullptr, 0) }; // 1982540663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_SequenceEvaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateStandingStopState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::KLSBaseLinkedAnimInstance_eventUpdateStandingStopState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics
	{
		struct KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms
		{
			FAnimUpdateContext UpdateContext;
			FSequencePlayerReference SequencePlayer;
			UKLSBaseAnimInstance* BaseAnimInstance;
			FSequencePlayerReference ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimInstance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_UpdateContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_UpdateContext_MetaData)) }; // 2136872881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_SequencePlayer_MetaData)) }; // 4112037832
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_BaseAnimInstance = { "BaseAnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms, BaseAnimInstance), Z_Construct_UClass_UKLSBaseAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(nullptr, 0) }; // 4112037832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_UpdateContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_SequencePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_BaseAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "KLS|Standing States Updates" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKLSBaseLinkedAnimInstance, nullptr, "UpdateStandingTipState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::KLSBaseLinkedAnimInstance_eventUpdateStandingTipState_Parms), Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKLSBaseLinkedAnimInstance);
	UClass* Z_Construct_UClass_UKLSBaseLinkedAnimInstance_NoRegister()
	{
		return UKLSBaseLinkedAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MotionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNodesBonesData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNodesBonesData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StandingAnimsData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StandingAnimsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchingAnimsData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrouchingAnimsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJumpSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentJumpSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRateClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPlayRateClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_GetCurrentInterpSpeed, "GetCurrentInterpSpeed" }, // 551813950
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingRunAnimation, "SelectStandingRunAnimation" }, // 376595746
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingSprintAnimation, "SelectStandingSprintAnimation" }, // 173069876
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStandingWalkAnimation, "SelectStandingWalkAnimation" }, // 3410222938
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStartAnimation, "SelectStartAnimation" }, // 924421247
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SelectStopAnimation, "SelectStopAnimation" }, // 2573624378
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetStandingState, "SetStandingState" }, // 123535416
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingIdleState, "SetupCrouchingIdleState" }, // 3905458685
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingStopState, "SetupCrouchingStopState" }, // 2374948477
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipRecoveryState, "SetupCrouchingTipRecoveryState" }, // 2907716090
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupCrouchingTipState, "SetupCrouchingTipState" }, // 1455578812
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupFallLoopState, "SetupFallLoopState" }, // 1678740290
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupInAirState, "SetupInAirState" }, // 1360788262
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpApexState, "SetupJumpApexState" }, // 937043116
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupJumpingState, "SetupJumpingState" }, // 3708265541
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLandingPredictionState, "SetupLandingPredictionState" }, // 2630966858
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupLoopState, "SetupLoopState" }, // 1967799854
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingIdleState, "SetupStandingIdleState" }, // 153427663
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPostPivotState, "SetupStandingPostPivotState" }, // 3239587335
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingPrePivotState, "SetupStandingPrePivotState" }, // 1989695941
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStartState, "SetupStandingStartState" }, // 1364476586
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingStopState, "SetupStandingStopState" }, // 1591954101
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipRecoveryState, "SetupStandingTipRecoveryState" }, // 2225565361
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStandingTipState, "SetupStandingTipState" }, // 2675098121
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_SetupStopState, "SetupStopState" }, // 425934700
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingStopState, "UpdateCrouchingStopState" }, // 948649800
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateCrouchingTipState, "UpdateCrouchingTipState" }, // 3448880445
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateInAirState, "UpdateInAirState" }, // 2188900624
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpApexState, "UpdateJumpApexState" }, // 1058280877
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateJumpingState, "UpdateJumpingState" }, // 1134471446
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLandingPredictionState, "UpdateLandingPredictionState" }, // 3850724611
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLinkedLayersValues, "UpdateLinkedLayersValues" }, // 3982869416
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateLoopState, "UpdateLoopState" }, // 1947243917
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPostPivotState, "UpdateStandingPostPivotState" }, // 586239610
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingPrePivotState, "UpdateStandingPrePivotState" }, // 4032833091
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStartState, "UpdateStandingStartState" }, // 2387640025
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingStopState, "UpdateStandingStopState" }, // 1214701111
		{ &Z_Construct_UFunction_UKLSBaseLinkedAnimInstance_UpdateStandingTipState, "UpdateStandingTipState" }, // 1684256363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/KLSBaseLinkedAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_MotionSet_MetaData[] = {
		{ "Category", "KLS|MotionSet" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_MotionSet = { "MotionSet", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, MotionSet), Z_Construct_UClass_UKLSLocomotionData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_MotionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_MotionSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData[] = {
		{ "Category", "KLS|Anim Nodes Data" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimNodesBonesData = { "AnimNodesBonesData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, AnimNodesBonesData), Z_Construct_UScriptStruct_FAnimNodesBonesData, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimNodesBonesData_MetaData)) }; // 502211847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_StandingAnimsData_MetaData[] = {
		{ "Category", "KLS|StatesData" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_StandingAnimsData = { "StandingAnimsData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, StandingAnimsData), Z_Construct_UScriptStruct_FKLSGroundedAnimationSet, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_StandingAnimsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_StandingAnimsData_MetaData)) }; // 1450757331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CrouchingAnimsData_MetaData[] = {
		{ "Category", "KLS|StatesData" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CrouchingAnimsData = { "CrouchingAnimsData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, CrouchingAnimsData), Z_Construct_UScriptStruct_FKLSGroundedAnimationSet, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CrouchingAnimsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CrouchingAnimsData_MetaData)) }; // 1450757331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CurrentJumpSet_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CurrentJumpSet = { "CurrentJumpSet", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, CurrentJumpSet), Z_Construct_UScriptStruct_FKLSJumpSet, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CurrentJumpSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CurrentJumpSet_MetaData)) }; // 1383416261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimPlayRateClamp_MetaData[] = {
		{ "Category", "KLS|StatesData" },
		{ "HideInDetailPanel", "" },
		{ "ModuleRelativePath", "Public/Animation/KLSBaseLinkedAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimPlayRateClamp = { "AnimPlayRateClamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKLSBaseLinkedAnimInstance, AnimPlayRateClamp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimPlayRateClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimPlayRateClamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_MotionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimNodesBonesData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_StandingAnimsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CrouchingAnimsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_CurrentJumpSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::NewProp_AnimPlayRateClamp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKLSBaseLinkedAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::ClassParams = {
		&UKLSBaseLinkedAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKLSBaseLinkedAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UKLSBaseLinkedAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKLSBaseLinkedAnimInstance.OuterSingleton, Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKLSBaseLinkedAnimInstance.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UClass* StaticClass<UKLSBaseLinkedAnimInstance>()
	{
		return UKLSBaseLinkedAnimInstance::StaticClass();
	}
	UKLSBaseLinkedAnimInstance::UKLSBaseLinkedAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKLSBaseLinkedAnimInstance);
	UKLSBaseLinkedAnimInstance::~UKLSBaseLinkedAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKLSBaseLinkedAnimInstance, UKLSBaseLinkedAnimInstance::StaticClass, TEXT("UKLSBaseLinkedAnimInstance"), &Z_Registration_Info_UClass_UKLSBaseLinkedAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKLSBaseLinkedAnimInstance), 3915046872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_448218298(TEXT("/Script/KaiLocomotion"),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
