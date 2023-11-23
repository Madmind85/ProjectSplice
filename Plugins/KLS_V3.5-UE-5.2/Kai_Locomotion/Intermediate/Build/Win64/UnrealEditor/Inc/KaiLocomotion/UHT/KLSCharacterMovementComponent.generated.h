// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/KLSCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKLSBaseAnimInstance;
#ifdef KAILOCOMOTION_KLSCharacterMovementComponent_generated_h
#error "KLSCharacterMovementComponent.generated.h already included, missing '#pragma once' in KLSCharacterMovementComponent.h"
#endif
#define KAILOCOMOTION_KLSCharacterMovementComponent_generated_h

#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_SPARSE_DATA
#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCustomRotation); \
	DECLARE_FUNCTION(execOnRep_StrafeRotAlpha); \
	DECLARE_FUNCTION(execOnRep_IsStrafing); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execRotationBetween); \
	DECLARE_FUNCTION(execSetMaxGroundSpeed); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execToggleAiming); \
	DECLARE_FUNCTION(execRotationModeChanged); \
	DECLARE_FUNCTION(execIsStrafing); \
	DECLARE_FUNCTION(execToggleStrafing); \
	DECLARE_FUNCTION(execGetReplicatedControlRotation);


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCustomRotation); \
	DECLARE_FUNCTION(execOnRep_StrafeRotAlpha); \
	DECLARE_FUNCTION(execOnRep_IsStrafing); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execRotationBetween); \
	DECLARE_FUNCTION(execSetMaxGroundSpeed); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execToggleAiming); \
	DECLARE_FUNCTION(execRotationModeChanged); \
	DECLARE_FUNCTION(execIsStrafing); \
	DECLARE_FUNCTION(execToggleStrafing); \
	DECLARE_FUNCTION(execGetReplicatedControlRotation);


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_ACCESSORS
#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKLSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UKLSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UKLSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxGroundSpeed=NETFIELD_REP_START, \
		RotationDirection, \
		bIsPivoting, \
		ReplicatedAcceleration, \
		bIsStrafing, \
		bIsAiming, \
		ReplicatedControlRotation, \
		StrafeRotAlpha, \
		NETFIELD_REP_END=StrafeRotAlpha	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_INCLASS \
private: \
	static void StaticRegisterNativesUKLSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UKLSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UKLSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KaiLocomotion"), NO_API) \
	DECLARE_SERIALIZER(UKLSCharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxGroundSpeed=NETFIELD_REP_START, \
		RotationDirection, \
		bIsPivoting, \
		ReplicatedAcceleration, \
		bIsStrafing, \
		bIsAiming, \
		ReplicatedControlRotation, \
		StrafeRotAlpha, \
		NETFIELD_REP_END=StrafeRotAlpha	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKLSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCharacterMovementComponent(UKLSCharacterMovementComponent&&); \
	NO_API UKLSCharacterMovementComponent(const UKLSCharacterMovementComponent&); \
public: \
	NO_API virtual ~UKLSCharacterMovementComponent();


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKLSCharacterMovementComponent(UKLSCharacterMovementComponent&&); \
	NO_API UKLSCharacterMovementComponent(const UKLSCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKLSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKLSCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKLSCharacterMovementComponent) \
	NO_API virtual ~UKLSCharacterMovementComponent();


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_85_PROLOG
#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_SPARSE_DATA \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_RPC_WRAPPERS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_ACCESSORS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_INCLASS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_SPARSE_DATA \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_ACCESSORS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_INCLASS_NO_PURE_DECLS \
	FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KAILOCOMOTION_API UClass* StaticClass<class UKLSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Chiyako_Documents_GitHub_ProjectSplice_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Character_KLSCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
