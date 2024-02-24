// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/KLSDataAssets.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EKLSCardinalDirection : uint8;
enum class EKLSSpeedGait : uint8;
struct FGameplayTag;
struct FKLSAnimData;
struct FKLSDefaultAnimSet;
struct FKLSDefaultPivotAnimSet;
struct FKLSInterpolationSpeeds;
struct FKLSJumpSelectorInfo;
struct FKLSJumpSet;
struct FKLSPivotAnimSet;
struct FKLSRotatingAnimSet;
struct FKLSRotatingPivotAnimSet;
#ifdef KAILOCOMOTION_KLSDataAssets_generated_h
#error "KLSDataAssets.generated.h already included, missing '#pragma once' in KLSDataAssets.h"
#endif
#define KAILOCOMOTION_KLSDataAssets_generated_h

#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_SPARSE_DATA
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInterpolationSpeeds); \
	DECLARE_FUNCTION(execSelectJumpSet); \
	DECLARE_FUNCTION(execSelectCrouchTurnInPlaceAnimation); \
	DECLARE_FUNCTION(execSelectTurnInPlaceAnimation); \
	DECLARE_FUNCTION(execSelectCrouchPivotSet); \
	DECLARE_FUNCTION(execSelectPivotSet); \
	DECLARE_FUNCTION(execSelectCrouchStopAnimation); \
	DECLARE_FUNCTION(execSelectStopAnimation); \
	DECLARE_FUNCTION(execSelectCrouchStartAnimation); \
	DECLARE_FUNCTION(execSelectStartAnimation); \
	DECLARE_FUNCTION(execGetStrafingPivotSet); \
	DECLARE_FUNCTION(execGetRotatingPivotSet); \
	DECLARE_FUNCTION(execGetStrafingAnim); \
	DECLARE_FUNCTION(execGetRotatingAnim); \
	DECLARE_FUNCTION(execGetGaitAlphaFromSpeed); \
	DECLARE_FUNCTION(execGetSpeedGaitFromAlpha); \
	DECLARE_FUNCTION(execGetSpeedGaitFromSpeed); \
	DECLARE_FUNCTION(execGetPlayRateClamp);


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInterpolationSpeeds); \
	DECLARE_FUNCTION(execSelectJumpSet); \
	DECLARE_FUNCTION(execSelectCrouchTurnInPlaceAnimation); \
	DECLARE_FUNCTION(execSelectTurnInPlaceAnimation); \
	DECLARE_FUNCTION(execSelectCrouchPivotSet); \
	DECLARE_FUNCTION(execSelectPivotSet); \
	DECLARE_FUNCTION(execSelectCrouchStopAnimation); \
	DECLARE_FUNCTION(execSelectStopAnimation); \
	DECLARE_FUNCTION(execSelectCrouchStartAnimation); \
	DECLARE_FUNCTION(execSelectStartAnimation); \
	DECLARE_FUNCTION(execGetStrafingPivotSet); \
	DECLARE_FUNCTION(execGetRotatingPivotSet); \
	DECLARE_FUNCTION(execGetStrafingAnim); \
	DECLARE_FUNCTION(execGetRotatingAnim); \
	DECLARE_FUNCTION(execGetGaitAlphaFromSpeed); \
	DECLARE_FUNCTION(execGetSpeedGaitFromAlpha); \
	DECLARE_FUNCTION(execGetSpeedGaitFromSpeed); \
	DECLARE_FUNCTION(execGetPlayRateClamp);


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_ACCESSORS
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSLocomotionData(); \
	friend struct Z_Construct_UClass_UKLSLocomotionData_Statics; \
public: \
	DECLARE_CLASS(UKLSLocomotionData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSLocomotionData)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUKLSLocomotionData(); \
	friend struct Z_Construct_UClass_UKLSLocomotionData_Statics; \
public: \
	DECLARE_CLASS(UKLSLocomotionData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSLocomotionData)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSLocomotionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSLocomotionData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSLocomotionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSLocomotionData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSLocomotionData(UKLSLocomotionData&&); \
	NO_API UKLSLocomotionData(const UKLSLocomotionData&); \
public: \
	NO_API virtual ~UKLSLocomotionData();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSLocomotionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSLocomotionData(UKLSLocomotionData&&); \
	NO_API UKLSLocomotionData(const UKLSLocomotionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSLocomotionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSLocomotionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSLocomotionData) \
	NO_API virtual ~UKLSLocomotionData();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_20_PROLOG
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_RPC_WRAPPERS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_INCLASS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSLocomotionData>();

#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_SPARSE_DATA
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_RPC_WRAPPERS
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_ACCESSORS
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSMaskingData(); \
	friend struct Z_Construct_UClass_UKLSMaskingData_Statics; \
public: \
	DECLARE_CLASS(UKLSMaskingData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSMaskingData)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUKLSMaskingData(); \
	friend struct Z_Construct_UClass_UKLSMaskingData_Statics; \
public: \
	DECLARE_CLASS(UKLSMaskingData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSMaskingData)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSMaskingData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSMaskingData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSMaskingData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSMaskingData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSMaskingData(UKLSMaskingData&&); \
	NO_API UKLSMaskingData(const UKLSMaskingData&); \
public: \
	NO_API virtual ~UKLSMaskingData();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSMaskingData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSMaskingData(UKLSMaskingData&&); \
	NO_API UKLSMaskingData(const UKLSMaskingData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSMaskingData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSMaskingData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSMaskingData) \
	NO_API virtual ~UKLSMaskingData();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_108_PROLOG
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_RPC_WRAPPERS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_INCLASS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_INCLASS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSMaskingData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSDataAssets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
