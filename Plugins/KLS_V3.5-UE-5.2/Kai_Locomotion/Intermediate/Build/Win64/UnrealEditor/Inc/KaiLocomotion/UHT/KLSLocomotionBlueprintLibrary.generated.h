// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/KLSLocomotionBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class UAnimInstance;
class UCharacterMovementComponent;
class UObject;
class USkeletalMeshComponent;
enum class EKLSCardinalDirection : uint8;
struct FAnimUpdateContext;
struct FKLSAnimationInfo;
struct FKLSAnimData;
struct FKLSCharacterData;
struct FKLSCustomRotationData;
struct FPredictProjectilePathParams;
struct FPredictProjectilePathResult;
struct FSequenceEvaluatorReference;
struct FSequencePlayerReference;
#ifdef KAILOCOMOTION_KLSLocomotionBlueprintLibrary_generated_h
#error "KLSLocomotionBlueprintLibrary.generated.h already included, missing '#pragma once' in KLSLocomotionBlueprintLibrary.h"
#endif
#define KAILOCOMOTION_KLSLocomotionBlueprintLibrary_generated_h

#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_SPARSE_DATA
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaskingGroupName); \
	DECLARE_FUNCTION(execTryLinkAnimLayer); \
	DECLARE_FUNCTION(execPredictJumpPathDistance); \
	DECLARE_FUNCTION(execPredictProjectilePathCapsule); \
	DECLARE_FUNCTION(execFindLandLocation); \
	DECLARE_FUNCTION(execRotationMatching); \
	DECLARE_FUNCTION(execPredictGroundMovementPivotLocation); \
	DECLARE_FUNCTION(execPredictGroundMovementStopLocation); \
	DECLARE_FUNCTION(execSetPlayRateToMatchSpeed); \
	DECLARE_FUNCTION(execDistanceMatchToTarget); \
	DECLARE_FUNCTION(execAdvanceTimeByDistanceMatching); \
	DECLARE_FUNCTION(execGetTimeAfterDistanceTraveled); \
	DECLARE_FUNCTION(execGetOppositeCardinalDirectional); \
	DECLARE_FUNCTION(execSelectCardinalDirectionFromAngle); \
	DECLARE_FUNCTION(execUpdateCustomRotation); \
	DECLARE_FUNCTION(execUpdateCharacterData);


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaskingGroupName); \
	DECLARE_FUNCTION(execTryLinkAnimLayer); \
	DECLARE_FUNCTION(execPredictJumpPathDistance); \
	DECLARE_FUNCTION(execPredictProjectilePathCapsule); \
	DECLARE_FUNCTION(execFindLandLocation); \
	DECLARE_FUNCTION(execRotationMatching); \
	DECLARE_FUNCTION(execPredictGroundMovementPivotLocation); \
	DECLARE_FUNCTION(execPredictGroundMovementStopLocation); \
	DECLARE_FUNCTION(execSetPlayRateToMatchSpeed); \
	DECLARE_FUNCTION(execDistanceMatchToTarget); \
	DECLARE_FUNCTION(execAdvanceTimeByDistanceMatching); \
	DECLARE_FUNCTION(execGetTimeAfterDistanceTraveled); \
	DECLARE_FUNCTION(execGetOppositeCardinalDirectional); \
	DECLARE_FUNCTION(execSelectCardinalDirectionFromAngle); \
	DECLARE_FUNCTION(execUpdateCustomRotation); \
	DECLARE_FUNCTION(execUpdateCharacterData);


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_ACCESSORS
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSLocomotionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UKLSLocomotionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSLocomotionBlueprintLibrary)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUKLSLocomotionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UKLSLocomotionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UKLSLocomotionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSLocomotionBlueprintLibrary)


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSLocomotionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSLocomotionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSLocomotionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSLocomotionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSLocomotionBlueprintLibrary(UKLSLocomotionBlueprintLibrary&&); \
	NO_API UKLSLocomotionBlueprintLibrary(const UKLSLocomotionBlueprintLibrary&); \
public: \
	NO_API virtual ~UKLSLocomotionBlueprintLibrary();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSLocomotionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSLocomotionBlueprintLibrary(UKLSLocomotionBlueprintLibrary&&); \
	NO_API UKLSLocomotionBlueprintLibrary(const UKLSLocomotionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSLocomotionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSLocomotionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSLocomotionBlueprintLibrary) \
	NO_API virtual ~UKLSLocomotionBlueprintLibrary();


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_20_PROLOG
#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_RPC_WRAPPERS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_INCLASS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_SPARSE_DATA \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_ACCESSORS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSLocomotionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Library_KLSLocomotionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
