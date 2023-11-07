// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KaiLocomotion/Public/Data/KLSCharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKLSCharacterData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection();
	KAILOCOMOTION_API UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharacterData();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharMovement();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharRotations();
	KAILOCOMOTION_API UScriptStruct* Z_Construct_UScriptStruct_FKLSCharStates();
	UPackage* Z_Construct_UPackage__Script_KaiLocomotion();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKLSSpeedGait;
	static UEnum* EKLSSpeedGait_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKLSSpeedGait.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKLSSpeedGait.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("EKLSSpeedGait"));
		}
		return Z_Registration_Info_UEnum_EKLSSpeedGait.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UEnum* StaticEnum<EKLSSpeedGait>()
	{
		return EKLSSpeedGait_StaticEnum();
	}
	struct Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enumerators[] = {
		{ "EKLSSpeedGait::EWalk", (int64)EKLSSpeedGait::EWalk },
		{ "EKLSSpeedGait::ERun", (int64)EKLSSpeedGait::ERun },
		{ "EKLSSpeedGait::ESprint", (int64)EKLSSpeedGait::ESprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///Enums\n" },
		{ "ERun.DisplayName", "Run" },
		{ "ERun.Name", "EKLSSpeedGait::ERun" },
		{ "ESprint.DisplayName", "Sprint" },
		{ "ESprint.Name", "EKLSSpeedGait::ESprint" },
		{ "EWalk.DisplayName", "Walk" },
		{ "EWalk.Name", "EKLSSpeedGait::EWalk" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
		{ "ToolTip", "Enums" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		"EKLSSpeedGait",
		"EKLSSpeedGait",
		Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait()
	{
		if (!Z_Registration_Info_UEnum_EKLSSpeedGait.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKLSSpeedGait.InnerSingleton, Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKLSSpeedGait.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKLSCardinalDirection;
	static UEnum* EKLSCardinalDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKLSCardinalDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKLSCardinalDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("EKLSCardinalDirection"));
		}
		return Z_Registration_Info_UEnum_EKLSCardinalDirection.OuterSingleton;
	}
	template<> KAILOCOMOTION_API UEnum* StaticEnum<EKLSCardinalDirection>()
	{
		return EKLSCardinalDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enumerators[] = {
		{ "EKLSCardinalDirection::EFwd", (int64)EKLSCardinalDirection::EFwd },
		{ "EKLSCardinalDirection::ERight", (int64)EKLSCardinalDirection::ERight },
		{ "EKLSCardinalDirection::ELeft", (int64)EKLSCardinalDirection::ELeft },
		{ "EKLSCardinalDirection::EBwd", (int64)EKLSCardinalDirection::EBwd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBwd.DisplayName", "Backward" },
		{ "EBwd.Name", "EKLSCardinalDirection::EBwd" },
		{ "EFwd.DisplayName", "Forward" },
		{ "EFwd.Name", "EKLSCardinalDirection::EFwd" },
		{ "ELeft.DisplayName", "Left" },
		{ "ELeft.Name", "EKLSCardinalDirection::ELeft" },
		{ "ERight.DisplayName", "Right" },
		{ "ERight.Name", "EKLSCardinalDirection::ERight" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		"EKLSCardinalDirection",
		"EKLSCardinalDirection",
		Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection()
	{
		if (!Z_Registration_Info_UEnum_EKLSCardinalDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKLSCardinalDirection.InnerSingleton, Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKLSCardinalDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSCharMovement;
class UScriptStruct* FKLSCharMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSCharMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSCharMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSCharMovement, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSCharMovement"));
	}
	return Z_Registration_Info_UScriptStruct_KLSCharMovement.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSCharMovement>()
{
	return FKLSCharMovement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSCharMovement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDisplacement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDisplacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVelocity2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVelocity2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementSpeed2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementSpeed2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPivotAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPivotAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalAcceleration2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalAcceleration2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotAcceleration2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PivotAcceleration2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveSpeedScaler_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveSpeedScaler;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpeedGait_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedGait_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpeedGait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandingLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPredictAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLandingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLandingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallZSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallZSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSCharMovement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FrameDisplacement_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FrameDisplacement = { "FrameDisplacement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, FrameDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FrameDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FrameDisplacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity2D = { "Velocity2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, Velocity2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalVelocity2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalVelocity2D = { "LocalVelocity2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, LocalVelocity2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalVelocity2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalVelocity2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Speed2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Speed2D = { "Speed2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, Speed2D), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Speed2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Speed2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MaxSpeed2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MaxSpeed2D = { "MaxSpeed2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, MaxSpeed2D), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MaxSpeed2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MaxSpeed2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_DisplacementSpeed2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_DisplacementSpeed2D = { "DisplacementSpeed2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, DisplacementSpeed2D), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_DisplacementSpeed2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_DisplacementSpeed2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalPivotAcceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalPivotAcceleration = { "LocalPivotAcceleration", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, LocalPivotAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalPivotAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalPivotAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalAcceleration2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalAcceleration2D = { "LocalAcceleration2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, LocalAcceleration2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalAcceleration2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalAcceleration2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_PivotAcceleration2D_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_PivotAcceleration2D = { "PivotAcceleration2D", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, PivotAcceleration2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_PivotAcceleration2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_PivotAcceleration2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_EffectiveSpeedScaler_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_EffectiveSpeedScaler = { "EffectiveSpeedScaler", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, EffectiveSpeedScaler), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_EffectiveSpeedScaler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_EffectiveSpeedScaler_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait = { "SpeedGait", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, SpeedGait), Z_Construct_UEnum_KaiLocomotion_EKLSSpeedGait, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait_MetaData)) }; // 2494966342
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandingLocation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandingLocation = { "LandingLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, LandingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandingLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_TotalJumpTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_TotalJumpTime = { "TotalJumpTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, TotalJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_TotalJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_TotalJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_CurrentJumpTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_CurrentJumpTime = { "CurrentJumpTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, CurrentJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_CurrentJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_CurrentJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_JumpAlpha_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_JumpAlpha = { "JumpAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, JumpAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_JumpAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_JumpAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandPredictAlpha_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandPredictAlpha = { "LandPredictAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, LandPredictAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandPredictAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandPredictAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MinLandingDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MinLandingDistance = { "MinLandingDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, MinLandingDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MinLandingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MinLandingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FallZSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FallZSpeed = { "FallZSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharMovement, FallZSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FallZSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FallZSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSCharMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FrameDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Velocity2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalVelocity2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Speed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MaxSpeed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_DisplacementSpeed2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalPivotAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LocalAcceleration2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_PivotAcceleration2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_EffectiveSpeedScaler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_SpeedGait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_TotalJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_CurrentJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_JumpAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_LandPredictAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_MinLandingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewProp_FallZSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSCharMovement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSCharMovement",
		sizeof(FKLSCharMovement),
		alignof(FKLSCharMovement),
		Z_Construct_UScriptStruct_FKLSCharMovement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharMovement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSCharMovement()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSCharMovement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSCharMovement.InnerSingleton, Z_Construct_UScriptStruct_FKLSCharMovement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSCharMovement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSCharStates;
class UScriptStruct* FKLSCharStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSCharStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSCharStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSCharStates, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSCharStates"));
	}
	return Z_Registration_Info_UScriptStruct_KLSCharStates.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSCharStates>()
{
	return FKLSCharStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSCharStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static void NewProp_bIsGrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasMoving_MetaData[];
#endif
		static void NewProp_bWasMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasAccelerating_MetaData[];
#endif
		static void NewProp_bWasAccelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAccelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasCrouching_MetaData[];
#endif
		static void NewProp_bWasCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPivot_MetaData[];
#endif
		static void NewProp_bCanPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPivoting_MetaData[];
#endif
		static void NewProp_bIsPivoting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPivoting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasIsPivoting_MetaData[];
#endif
		static void NewProp_bWasIsPivoting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasIsPivoting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnInPlace_MetaData[];
#endif
		static void NewProp_bTurnInPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurningInPlace_MetaData[];
#endif
		static void NewProp_bIsTurningInPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurningInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnInPlaceRecovery_MetaData[];
#endif
		static void NewProp_bTurnInPlaceRecovery_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnInPlaceRecovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangedRotationMode_MetaData[];
#endif
		static void NewProp_bChangedRotationMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedRotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanLand_MetaData[];
#endif
		static void NewProp_bCanLand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasLanded_MetaData[];
#endif
		static void NewProp_bHasLanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChangedLinkedLayer_MetaData[];
#endif
		static void NewProp_bChangedLinkedLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedLinkedLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSCharStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsGrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bWasMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving = { "bWasMoving", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bWasAccelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating = { "bWasAccelerating", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bWasCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching = { "bWasCrouching", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bCanPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot = { "bCanPivot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsPivoting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting = { "bIsPivoting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bWasIsPivoting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting = { "bWasIsPivoting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bTurnInPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace = { "bTurnInPlace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsTurningInPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace = { "bIsTurningInPlace", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bTurnInPlaceRecovery = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery = { "bTurnInPlaceRecovery", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bChangedRotationMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode = { "bChangedRotationMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bCanLand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand = { "bCanLand", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bHasLanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded = { "bHasLanded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bChangedLinkedLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer = { "bChangedLinkedLayer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((FKLSCharStates*)Obj)->bIsAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharStates), &Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSCharStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasAccelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsPivoting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bWasIsPivoting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsTurningInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bTurnInPlaceRecovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedRotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bCanLand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bHasLanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bChangedLinkedLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewProp_bIsAiming,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSCharStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSCharStates",
		sizeof(FKLSCharStates),
		alignof(FKLSCharStates),
		Z_Construct_UScriptStruct_FKLSCharStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSCharStates()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSCharStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSCharStates.InnerSingleton, Z_Construct_UScriptStruct_FKLSCharStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSCharStates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSCharRotations;
class UScriptStruct* FKLSCharRotations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSCharRotations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSCharRotations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSCharRotations, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSCharRotations"));
	}
	return Z_Registration_Info_UScriptStruct_KLSCharRotations.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSCharRotations>()
{
	return FKLSCharRotations::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSCharRotations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameYawDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameYawDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDeltaSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDeltaSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlRotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalVelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalAccelerationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalAccelerationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationWarpingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientationWarpingAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityCardinalDirection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputCardinalDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCardinalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputCardinalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStrafing_MetaData[];
#endif
		static void NewProp_bIsStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStrafing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSCharRotations>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_AimOffsetRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_AimOffsetRotation = { "AimOffsetRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, AimOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_AimOffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_AimOffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ActorRotation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ActorRotation = { "ActorRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, ActorRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ActorRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ActorRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_FrameYawDelta_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_FrameYawDelta = { "FrameYawDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, FrameYawDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_FrameYawDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_FrameYawDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_YawDeltaSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_YawDeltaSpeed = { "YawDeltaSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, YawDeltaSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_YawDeltaSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_YawDeltaSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotationSpeed = { "ControlRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, ControlRotationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalVelocityDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalVelocityDirection = { "LocalVelocityDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, LocalVelocityDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalVelocityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalVelocityDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalAccelerationDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalAccelerationDirection = { "LocalAccelerationDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, LocalAccelerationDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalAccelerationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalAccelerationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_OrientationWarpingAngle_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_OrientationWarpingAngle = { "OrientationWarpingAngle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, OrientationWarpingAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_OrientationWarpingAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_OrientationWarpingAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection = { "VelocityCardinalDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, VelocityCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection_MetaData)) }; // 2793232699
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection = { "InputCardinalDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, InputCardinalDirection), Z_Construct_UEnum_KaiLocomotion_EKLSCardinalDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection_MetaData)) }; // 2793232699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityDirection = { "VelocityDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, VelocityDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, RotationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationDirection = { "RotationDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharRotations, RotationDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing_SetBit(void* Obj)
	{
		((FKLSCharRotations*)Obj)->bIsStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing = { "bIsStrafing", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharRotations), &Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSCharRotations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_AimOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ActorRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_FrameYawDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_YawDeltaSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_ControlRotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalVelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_LocalAccelerationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_OrientationWarpingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_InputCardinalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_VelocityDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_RotationDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewProp_bIsStrafing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSCharRotations_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSCharRotations",
		sizeof(FKLSCharRotations),
		alignof(FKLSCharRotations),
		Z_Construct_UScriptStruct_FKLSCharRotations_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharRotations_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSCharRotations()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSCharRotations.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSCharRotations.InnerSingleton, Z_Construct_UScriptStruct_FKLSCharRotations_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSCharRotations.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KLSCharacterData;
class UScriptStruct* FKLSCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KLSCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KLSCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKLSCharacterData, (UObject*)Z_Construct_UPackage__Script_KaiLocomotion(), TEXT("KLSCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_KLSCharacterData.OuterSingleton;
}
template<> KAILOCOMOTION_API UScriptStruct* StaticStruct<FKLSCharacterData>()
{
	return FKLSCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKLSCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotations_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstUpdate_MetaData[];
#endif
		static void NewProp_FirstUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMaskAim_MetaData[];
#endif
		static void NewProp_UseMaskAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMaskAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLinkedLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastLinkedLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKLSCharacterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharacterData, Movement), Z_Construct_UScriptStruct_FKLSCharMovement, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Movement_MetaData)) }; // 923049236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharacterData, State), Z_Construct_UScriptStruct_FKLSCharStates, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_State_MetaData)) }; // 1297766415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Rotations_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharacterData, Rotations), Z_Construct_UScriptStruct_FKLSCharRotations, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Rotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Rotations_MetaData)) }; // 1852574587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate_SetBit(void* Obj)
	{
		((FKLSCharacterData*)Obj)->FirstUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate = { "FirstUpdate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharacterData), &Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim_SetBit(void* Obj)
	{
		((FKLSCharacterData*)Obj)->UseMaskAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim = { "UseMaskAim", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKLSCharacterData), &Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_LastLinkedLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/KLSCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_LastLinkedLayer = { "LastLinkedLayer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKLSCharacterData, LastLinkedLayer), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_LastLinkedLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_LastLinkedLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKLSCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Movement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_Rotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_FirstUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_UseMaskAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewProp_LastLinkedLayer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKLSCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KaiLocomotion,
		nullptr,
		&NewStructOps,
		"KLSCharacterData",
		sizeof(FKLSCharacterData),
		alignof(FKLSCharacterData),
		Z_Construct_UScriptStruct_FKLSCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKLSCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKLSCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_KLSCharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KLSCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FKLSCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KLSCharacterData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::EnumInfo[] = {
		{ EKLSSpeedGait_StaticEnum, TEXT("EKLSSpeedGait"), &Z_Registration_Info_UEnum_EKLSSpeedGait, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2494966342U) },
		{ EKLSCardinalDirection_StaticEnum, TEXT("EKLSCardinalDirection"), &Z_Registration_Info_UEnum_EKLSCardinalDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2793232699U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::ScriptStructInfo[] = {
		{ FKLSCharMovement::StaticStruct, Z_Construct_UScriptStruct_FKLSCharMovement_Statics::NewStructOps, TEXT("KLSCharMovement"), &Z_Registration_Info_UScriptStruct_KLSCharMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSCharMovement), 923049236U) },
		{ FKLSCharStates::StaticStruct, Z_Construct_UScriptStruct_FKLSCharStates_Statics::NewStructOps, TEXT("KLSCharStates"), &Z_Registration_Info_UScriptStruct_KLSCharStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSCharStates), 1297766415U) },
		{ FKLSCharRotations::StaticStruct, Z_Construct_UScriptStruct_FKLSCharRotations_Statics::NewStructOps, TEXT("KLSCharRotations"), &Z_Registration_Info_UScriptStruct_KLSCharRotations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSCharRotations), 1852574587U) },
		{ FKLSCharacterData::StaticStruct, Z_Construct_UScriptStruct_FKLSCharacterData_Statics::NewStructOps, TEXT("KLSCharacterData"), &Z_Registration_Info_UScriptStruct_KLSCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKLSCharacterData), 4246693399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_1001705815(TEXT("/Script/KaiLocomotion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjectsSC_SpliceHitReaction_Plugins_KLS_V3_5_UE_5_2_Kai_Locomotion_Source_KaiLocomotion_Public_Data_KLSCharacterData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
