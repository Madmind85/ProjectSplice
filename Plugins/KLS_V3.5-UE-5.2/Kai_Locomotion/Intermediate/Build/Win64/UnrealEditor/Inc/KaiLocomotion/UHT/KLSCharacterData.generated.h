// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/KLSCharacterData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAILOCOMOTION_KLSCharacterData_generated_h
#error "KLSCharacterData.generated.h already included, missing '#pragma once' in KLSCharacterData.h"
#endif
#define KAILOCOMOTION_KLSCharacterData_generated_h

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSCharMovement_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSCharMovement>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSCharStates_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSCharStates>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_171_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSCharRotations_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSCharRotations>();

#define FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKLSCharacterData_Statics; \
	KAILOCOMOTION_API static class UScriptStruct* StaticStruct();


template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<struct FKLSCharacterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h


#define FOREACH_ENUM_EKLSSPEEDGAIT(op) \
	op(EKLSSpeedGait::EWalk) \
	op(EKLSSpeedGait::ERun) \
	op(EKLSSpeedGait::ESprint) 

enum class EKLSSpeedGait : uint8;
template<> struct TIsUEnumClass<EKLSSpeedGait> { enum { Value = true }; };
template<> KAILOCOMOTION_API UEnum* StaticEnum<EKLSSpeedGait>();

#define FOREACH_ENUM_EKLSCARDINALDIRECTION(op) \
	op(EKLSCardinalDirection::EFwd) \
	op(EKLSCardinalDirection::ERight) \
	op(EKLSCardinalDirection::ELeft) \
	op(EKLSCardinalDirection::EBwd) 

enum class EKLSCardinalDirection : uint8;
template<> struct TIsUEnumClass<EKLSCardinalDirection> { enum { Value = true }; };
template<> KAILOCOMOTION_API UEnum* StaticEnum<EKLSCardinalDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
