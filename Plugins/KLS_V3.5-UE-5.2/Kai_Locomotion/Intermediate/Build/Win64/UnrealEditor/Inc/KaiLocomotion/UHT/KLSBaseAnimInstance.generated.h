// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/KLSBaseAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimUpdateContext;
struct FSequencePlayerReference;
#ifdef KAILOCOMOTION_KLSBaseAnimInstance_generated_h
#error "KLSBaseAnimInstance.generated.h already included, missing '#pragma once' in KLSBaseAnimInstance.h"
#endif
#define KAILOCOMOTION_KLSBaseAnimInstance_generated_h

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSBaseAnimBPData_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSBaseAnimBPData>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_SPARSE_DATA
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCustomRotationWeight); \
	DECLARE_FUNCTION(execUpdateLandAdditiveWeight); \
	DECLARE_FUNCTION(execUpdateLandingState); \
	DECLARE_FUNCTION(execSetupLandingAnimation); \
	DECLARE_FUNCTION(execSetupLandingState);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCustomRotationWeight); \
	DECLARE_FUNCTION(execUpdateLandAdditiveWeight); \
	DECLARE_FUNCTION(execUpdateLandingState); \
	DECLARE_FUNCTION(execSetupLandingAnimation); \
	DECLARE_FUNCTION(execSetupLandingState);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_ACCESSORS
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UKLSBaseAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKLSBaseAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSBaseAnimInstance)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUKLSBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UKLSBaseAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UKLSBaseAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSBaseAnimInstance)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSBaseAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSBaseAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSBaseAnimInstance(UKLSBaseAnimInstance&&); \
	NO_API UKLSBaseAnimInstance(const UKLSBaseAnimInstance&); \
public: \
	NO_API virtual ~UKLSBaseAnimInstance();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSBaseAnimInstance(UKLSBaseAnimInstance&&); \
	NO_API UKLSBaseAnimInstance(const UKLSBaseAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSBaseAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSBaseAnimInstance) \
	NO_API virtual ~UKLSBaseAnimInstance();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_73_PROLOG
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_RPC_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_INCLASS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSBaseAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Animation_KLSBaseAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
