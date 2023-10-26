//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "KLSCharacterData.generated.h"

class UAnimInstance;


///Enums

UENUM(BlueprintType)
enum class EKLSSpeedGait : uint8
{
	EWalk                      UMETA(DisplayName = "Walk"),
	ERun		                UMETA(DisplayName = "Run"),
	ESprint		            UMETA(DisplayName = "Sprint")//,
};
UENUM(BlueprintType)
enum class EKLSCardinalDirection : uint8
{
	EFwd     UMETA(DisplayName = "Forward"),
	ERight	 UMETA(DisplayName = "Right"),
	ELeft    UMETA(DisplayName = "Left"),
	EBwd     UMETA(DisplayName = "Backward")
};

USTRUCT(BlueprintType)
struct FKLSCharMovement
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector Location = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float FrameDisplacement = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector Velocity = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector Velocity2D = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector LocalVelocity2D = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float Speed2D = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float MaxSpeed2D = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float DisplacementSpeed2D = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector Acceleration = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector LocalPivotAcceleration = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector LocalAcceleration2D = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector PivotAcceleration2D = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float EffectiveSpeedScaler = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	EKLSSpeedGait SpeedGait = EKLSSpeedGait::EWalk;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FVector LandingLocation = FVector::ZeroVector;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float TotalJumpTime = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float CurrentJumpTime = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float JumpAlpha = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float LandPredictAlpha = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float MinLandingDistance = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float FallZSpeed = 0.0f;

	float LastZVelocity = 0.0f;
	
};

USTRUCT(BlueprintType)
struct FKLSCharStates
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsGrounded = false;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsMoving = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bWasMoving = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsAccelerating = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bWasAccelerating = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsCrouching = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bWasCrouching = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsJumping = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsFalling = false;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bCanPivot = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsPivoting = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bWasIsPivoting = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bTurnInPlace = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsTurningInPlace = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bTurnInPlaceRecovery = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bChangedRotationMode = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bCanLand = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bHasLanded = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bChangedLinkedLayer = false;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsAiming = false;
};

USTRUCT(BlueprintType)
struct FKLSCharRotations
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FRotator DesiredRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FRotator ControlRotation = FRotator::ZeroRotator;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FRotator AimOffsetRotation = FRotator::ZeroRotator;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FRotator ActorRotation = FRotator::ZeroRotator;

	UPROPERTY(BlueprintReadOnly,Category = "Movement")
	float FrameYawDelta = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "Movement")
	float YawDeltaSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly,Category = "Movement")
	float ControlRotationSpeed = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float LocalVelocityDirection = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float LocalAccelerationDirection = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float OrientationWarpingAngle = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	EKLSCardinalDirection VelocityCardinalDirection = EKLSCardinalDirection::EFwd;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	EKLSCardinalDirection InputCardinalDirection = EKLSCardinalDirection::EFwd;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float VelocityDirection = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float RotationOffset = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float RotationDirection = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bIsStrafing = false;

	
	
};

USTRUCT(BlueprintType)
struct FKLSCharacterData
{
	GENERATED_BODY()
	

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FKLSCharMovement Movement;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FKLSCharStates State;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	FKLSCharRotations Rotations;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool FirstUpdate = true;

	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool UseMaskAim = false;

	UPROPERTY()
	TObjectPtr<UAnimInstance> LastLinkedLayer;

};

