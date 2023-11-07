// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/KLSCustomJumps.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FKLSJumpSelectorInfo;
struct FKLSLandSelectorInfo;
#ifdef KAILOCOMOTION_KLSCustomJumps_generated_h
#error "KLSCustomJumps.generated.h already included, missing '#pragma once' in KLSCustomJumps.h"
#endif
#define KAILOCOMOTION_KLSCustomJumps_generated_h

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSJumpSelectorInfo_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSJumpSelectorInfo>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSLandSelectorInfo_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSLandSelectorInfo>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_SPARSE_DATA
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_RPC_WRAPPERS \
	virtual FGameplayTag SelectJumpAnimations_Implementation(FKLSJumpSelectorInfo const& JumpInfo); \
 \
	DECLARE_FUNCTION(execSelectJumpAnimations);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTag SelectJumpAnimations_Implementation(FKLSJumpSelectorInfo const& JumpInfo); \
 \
	DECLARE_FUNCTION(execSelectJumpAnimations);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_ACCESSORS
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_CALLBACK_WRAPPERS
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSCustomJumps(); \
	friend struct Z_Construct_UClass_UKLSCustomJumps_Statics; \
public: \
	DECLARE_CLASS(UKLSCustomJumps, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCustomJumps)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUKLSCustomJumps(); \
	friend struct Z_Construct_UClass_UKLSCustomJumps_Statics; \
public: \
	DECLARE_CLASS(UKLSCustomJumps, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCustomJumps)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSCustomJumps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCustomJumps) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCustomJumps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCustomJumps); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCustomJumps(UKLSCustomJumps&&); \
	NO_API UKLSCustomJumps(const UKLSCustomJumps&); \
public: \
	NO_API virtual ~UKLSCustomJumps();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSCustomJumps(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCustomJumps(UKLSCustomJumps&&); \
	NO_API UKLSCustomJumps(const UKLSCustomJumps&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCustomJumps); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCustomJumps); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCustomJumps) \
	NO_API virtual ~UKLSCustomJumps();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_78_PROLOG
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_RPC_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_CALLBACK_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_INCLASS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_CALLBACK_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSCustomJumps>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_SPARSE_DATA
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_RPC_WRAPPERS \
	virtual FGameplayTag SelectLandAnimation_Implementation(FKLSLandSelectorInfo const& LandInfo); \
 \
	DECLARE_FUNCTION(execSelectLandAnimation);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FGameplayTag SelectLandAnimation_Implementation(FKLSLandSelectorInfo const& LandInfo); \
 \
	DECLARE_FUNCTION(execSelectLandAnimation);


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_ACCESSORS
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_CALLBACK_WRAPPERS
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSCustomLand(); \
	friend struct Z_Construct_UClass_UKLSCustomLand_Statics; \
public: \
	DECLARE_CLASS(UKLSCustomLand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCustomLand)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUKLSCustomLand(); \
	friend struct Z_Construct_UClass_UKLSCustomLand_Statics; \
public: \
	DECLARE_CLASS(UKLSCustomLand, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCustomLand)


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSCustomLand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCustomLand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCustomLand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCustomLand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCustomLand(UKLSCustomLand&&); \
	NO_API UKLSCustomLand(const UKLSCustomLand&); \
public: \
	NO_API virtual ~UKLSCustomLand();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSCustomLand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCustomLand(UKLSCustomLand&&); \
	NO_API UKLSCustomLand(const UKLSCustomLand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCustomLand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCustomLand); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCustomLand) \
	NO_API virtual ~UKLSCustomLand();


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_93_PROLOG
#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_RPC_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_CALLBACK_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_INCLASS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_SPARSE_DATA \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_ACCESSORS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_CALLBACK_WRAPPERS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSCustomLand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCustomJumps_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
