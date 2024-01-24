// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/KLSBaseLinkedAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterMovementComponent;
class UKLSBaseAnimInstance;
enum class EKLSCardinalDirection : uint8;
enum class EKLSGroundAnimState : uint8;
enum class EKLSSpeedGait : uint8;
struct FAnimUpdateContext;
struct FKLSAnimData;
struct FKLSLoopAnim;
struct FSequenceEvaluatorReference;
struct FSequencePlayerReference;
#ifdef KAILOCOMOTION_KLSBaseLinkedAnimInstance_generated_h
#error "KLSBaseLinkedAnimInstance.generated.h already included, missing '#pragma once' in KLSBaseLinkedAnimInstance.h"
#endif
#define KAILOCOMOTION_KLSBaseLinkedAnimInstance_generated_h

#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_SPARSE_DATA
#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupFallLoopState); \
	DECLARE_FUNCTION(execUpdateJumpApexState); \
	DECLARE_FUNCTION(execSetupJumpApexState); \
	DECLARE_FUNCTION(execUpdateLandingPredictionState); \
	DECLARE_FUNCTION(execSetupLandingPredictionState); \
	DECLARE_FUNCTION(execUpdateJumpingState); \
	DECLARE_FUNCTION(execSetupJumpingState); \
	DECLARE_FUNCTION(execUpdateInAirState); \
	DECLARE_FUNCTION(execSetupInAirState); \
	DECLARE_FUNCTION(execUpdateCrouchingStopState); \
	DECLARE_FUNCTION(execSetupCrouchingStopState); \
	DECLARE_FUNCTION(execSetupCrouchingTipRecoveryState); \
	DECLARE_FUNCTION(execUpdateCrouchingTipState); \
	DECLARE_FUNCTION(execSetupCrouchingTipState); \
	DECLARE_FUNCTION(execSetupCrouchingIdleState); \
	DECLARE_FUNCTION(execUpdateLoopState); \
	DECLARE_FUNCTION(execSetupLoopState); \
	DECLARE_FUNCTION(execUpdateStandingPostPivotState); \
	DECLARE_FUNCTION(execSetupStandingPostPivotState); \
	DECLARE_FUNCTION(execUpdateStandingPrePivotState); \
	DECLARE_FUNCTION(execSetupStandingPrePivotState); \
	DECLARE_FUNCTION(execUpdateStandingStopState); \
	DECLARE_FUNCTION(execSetupStopState); \
	DECLARE_FUNCTION(execSetupStandingStopState); \
	DECLARE_FUNCTION(execUpdateStandingStartState); \
	DECLARE_FUNCTION(execSetupStandingStartState); \
	DECLARE_FUNCTION(execSetupStandingTipRecoveryState); \
	DECLARE_FUNCTION(execUpdateStandingTipState); \
	DECLARE_FUNCTION(execSetupStandingTipState); \
	DECLARE_FUNCTION(execSetupStandingIdleState); \
	DECLARE_FUNCTION(execSetStandingState); \
	DECLARE_FUNCTION(execUpdateLinkedLayersValues); \
	DECLARE_FUNCTION(execSelectStopAnimation); \
	DECLARE_FUNCTION(execSelectStandingSprintAnimation); \
	DECLARE_FUNCTION(execSelectStandingRunAnimation); \
	DECLARE_FUNCTION(execSelectStandingWalkAnimation); \
	DECLARE_FUNCTION(execSelectStartAnimation); \
	DECLARE_FUNCTION(execGetCurrentInterpSpeed);


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupFallLoopState); \
	DECLARE_FUNCTION(execUpdateJumpApexState); \
	DECLARE_FUNCTION(execSetupJumpApexState); \
	DECLARE_FUNCTION(execUpdateLandingPredictionState); \
	DECLARE_FUNCTION(execSetupLandingPredictionState); \
	DECLARE_FUNCTION(execUpdateJumpingState); \
	DECLARE_FUNCTION(execSetupJumpingState); \
	DECLARE_FUNCTION(execUpdateInAirState); \
	DECLARE_FUNCTION(execSetupInAirState); \
	DECLARE_FUNCTION(execUpdateCrouchingStopState); \
	DECLARE_FUNCTION(execSetupCrouchingStopState); \
	DECLARE_FUNCTION(execSetupCrouchingTipRecoveryState); \
	DECLARE_FUNCTION(execUpdateCrouchingTipState); \
	DECLARE_FUNCTION(execSetupCrouchingTipState); \
	DECLARE_FUNCTION(execSetupCrouchingIdleState); \
	DECLARE_FUNCTION(execUpdateLoopState); \
	DECLARE_FUNCTION(execSetupLoopState); \
	DECLARE_FUNCTION(execUpdateStandingPostPivotState); \
	DECLARE_FUNCTION(execSetupStandingPostPivotState); \
	DECLARE_FUNCTION(execUpdateStandingPrePivotState); \
	DECLARE_FUNCTION(execSetupStandingPrePivotState); \
	DECLARE_FUNCTION(execUpdateStandingStopState); \
	DECLARE_FUNCTION(execSetupStopState); \
	DECLARE_FUNCTION(execSetupStandingStopState); \
	DECLARE_FUNCTION(execUpdateStandingStartState); \
	DECLARE_FUNCTION(execSetupStandingStartState); \
	DECLARE_FUNCTION(execSetupStandingTipRecoveryState); \
	DECLARE_FUNCTION(execUpdateStandingTipState); \
	DECLARE_FUNCTION(execSetupStandingTipState); \
	DECLARE_FUNCTION(execSetupStandingIdleState); \
	DECLARE_FUNCTION(execSetStandingState); \
	DECLARE_FUNCTION(execUpdateLinkedLayersValues); \
	DECLARE_FUNCTION(execSelectStopAnimation); \
	DECLARE_FUNCTION(execSelectStandingSprintAnimation); \
	DECLARE_FUNCTION(execSelectStandingRunAnimation); \
	DECLARE_FUNCTION(execSelectStandingWalkAnimation); \
	DECLARE_FUNCTION(execSelectStartAnimation); \
	DECLARE_FUNCTION(execGetCurrentInterpSpeed);


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_ACCESSORS
#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSBaseLinkedAnimInstance(); \
	friend struct Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKLSBaseLinkedAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSBaseLinkedAnimInstance)


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUKLSBaseLinkedAnimInstance(); \
	friend struct Z_Construct_UClass_UKLSBaseLinkedAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKLSBaseLinkedAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSBaseLinkedAnimInstance)


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSBaseLinkedAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSBaseLinkedAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSBaseLinkedAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSBaseLinkedAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSBaseLinkedAnimInstance(UKLSBaseLinkedAnimInstance&&); \
	NO_API UKLSBaseLinkedAnimInstance(const UKLSBaseLinkedAnimInstance&); \
public: \
	NO_API virtual ~UKLSBaseLinkedAnimInstance();


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSBaseLinkedAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSBaseLinkedAnimInstance(UKLSBaseLinkedAnimInstance&&); \
	NO_API UKLSBaseLinkedAnimInstance(const UKLSBaseLinkedAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSBaseLinkedAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSBaseLinkedAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSBaseLinkedAnimInstance) \
	NO_API virtual ~UKLSBaseLinkedAnimInstance();


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_19_PROLOG
#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_SPARSE_DATA \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_RPC_WRAPPERS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_ACCESSORS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_INCLASS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_SPARSE_DATA \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_ACCESSORS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSBaseLinkedAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjectsSC_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseLinkedAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
