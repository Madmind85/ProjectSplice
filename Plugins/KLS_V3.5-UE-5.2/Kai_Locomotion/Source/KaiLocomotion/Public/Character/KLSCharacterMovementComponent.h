// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KLSCharacterMovementComponent.generated.h"

class UKLSBaseAnimInstance;
/**
 * 
 */
class FKLSNetworkMoveData : public FCharacterNetworkMoveData
{
public:
	typedef FCharacterNetworkMoveData Super;

	virtual void ClientFillNetworkMoveData(const FSavedMove_Character& ClientMove, ENetworkMoveType MoveType) override;
	virtual bool Serialize(UCharacterMovementComponent& CharacterMovement, FArchive& Ar, UPackageMap* PackageMap, ENetworkMoveType MoveType) override;

	float SavedNetworkCustomRotationYaw = 0.f;
	float SavedNetworkMaxGroundSpeed = 450.0f;
	uint8 SavedNetworkCustomFlags;
		
};

class FKLSCharacterNetworkMoveDataContainer : public FCharacterNetworkMoveDataContainer
{
	
public:

	//typedef FCharacterNetworkMoveDataContainer Super;

	FKLSCharacterNetworkMoveDataContainer();

	FKLSNetworkMoveData CustomDefaultMoveData[3];
};

class FKLSSavedMove : public FSavedMove_Character
{
public:

	typedef FSavedMove_Character Super;
		
		
	///@brief Resets all saved variables.
	virtual void Clear() override;

	///@brief Store input commands in the compressed flags.
	virtual uint8 GetCompressedFlags() const override;

	///@brief This is used to check whether or not two moves can be combined into one.
	///Basically you just check to make sure that the saved variables are the same.
	virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;

	///@brief Sets up the move before sending it to the server. 
	virtual void SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData) override;
	///@brief Sets variables on character movement component before making a predictive correction.
	virtual void PrepMoveFor(class ACharacter* Character) override;

	

		
	//all Saved Variables are put here in case of Packet Drop
	
	float SavedCustomRotationYaw = 0.f;
	float SavedMaxGroundSpeed;
	uint8 SavedCustomFlags;
	
};

class FKLSNetworkPredictionData_Client : public FNetworkPredictionData_Client_Character
{
public:
	FKLSNetworkPredictionData_Client(const UCharacterMovementComponent& ClientMovement);

	typedef FNetworkPredictionData_Client_Character Super;

	///@brief Allocates a new copy of our custom saved move
	virtual FSavedMovePtr AllocateNewMove() override;
};



UCLASS()
class KAILOCOMOTION_API UKLSCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
	friend class FKLSSavedMove;

public:
	
	UKLSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

	FKLSCharacterNetworkMoveDataContainer NetworkMoveDataContainer;

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="KLS|MovementSpeeds")
	bool UseKLSReplicatedSpeed = true;
	
	UPROPERTY(Replicated,BlueprintReadWrite,EditDefaultsOnly,Category="KLS|MovementSpeeds")
	float MaxGroundSpeed = 450.f;

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="KLS|MovementSpeeds")
	float CrouchMaxAcceleration = 250.0f;
	
	UPROPERTY(BlueprintReadOnly,Category="KLS|AnimRotation",meta=(HideInDetailPanel))
	float CustomRotationYaw = 0.f;

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="KLS|AnimRotation")
	bool AutoStrafeWhenAiming = true;

	UPROPERTY(Replicated, BlueprintReadOnly,Category="KLS|AnimData",meta=(HideInDetailPanel))
	int32 RotationDirection = 1;
	
	UPROPERTY(Replicated, BlueprintReadOnly,Category="KLS|AnimData",meta=(HideInDetailPanel))
	bool bIsPivoting = false;
	
	enum ECustomMovementFlags
	{
		CFLAG_Strafing = 1 << 0,
		CFLAG_UseAnimCustomRot = 2 << 0,
		CFLAG_Aiming = 3 << 0,
	};
	
	uint8 CustomMovementFlags = 0;
	
	
	UPROPERTY(Transient, ReplicatedUsing = OnRep_ReplicatedAcceleration)
	FVector ReplicatedAcceleration;
	
	UPROPERTY(Transient, ReplicatedUsing = OnRep_IsStrafing)
	bool bIsStrafing = false;

	UPROPERTY(Transient, Replicated)
	bool bIsAiming = false;

	UPROPERTY(Transient, Replicated)
	FRotator ReplicatedControlRotation;

	UPROPERTY(ReplicatedUsing = OnRep_StrafeRotAlpha)
	float StrafeRotAlpha = 0;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="KLS|Rotation")
	FRotator StrafeRotationRate = FRotator{0.0f,-1.0f,0.0};
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Pivot")
	float PivotMultiplier = 0.5;

	UPROPERTY()
	bool WasStrafing;
	
	

	virtual void ActivateCustomMovementFlag(ECustomMovementFlags Flag);
	virtual void ClearCustomMovementFlag(ECustomMovementFlags Flag);
	virtual bool IsCustomFlagSet (ECustomMovementFlags Flag) const {return (CustomMovementFlags >> Flag & 1U) != 0;}
	
	//Override Functions
	virtual void BeginPlay() override;
	virtual void MoveAutonomous(float ClientTimeStamp, float DeltaTime, uint8 CompressedFlags, const FVector& NewAccel) override;
	virtual void UpdateCharacterStateBeforeMovement(float DeltaSeconds) override;
	virtual void SimulateMovement(float DeltaTime) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;
	virtual float GetMaxSpeed() const override;
	virtual float GetMaxAcceleration() const override;
	virtual void PhysicsRotation(float DeltaTime) override;
	virtual void PhysWalking(float deltaTime, int32 Iterations) override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual FRotator GetDeltaRotation(float DeltaTime) const override;

	UFUNCTION(BlueprintPure,Category="KLS | Rotation")
	FRotator GetReplicatedControlRotation() const {return ReplicatedControlRotation;};
	
	// Strafing Functions

	UFUNCTION(BlueprintCallable,Category="KLS | Rotation")
	void ToggleStrafing(bool Strafe);

	UFUNCTION(BlueprintCallable,Category="KLS | Rotation")
	bool IsStrafing() const {return bIsStrafing;}

	UFUNCTION()
	void RotationModeChanged(const bool Strafe);


	UFUNCTION(BlueprintCallable,Category="KLS | Rotation")
	void ToggleAiming(bool Aim);

	UFUNCTION(BlueprintCallable,Category="KLS | Rotation")
	bool IsAiming() const {return bIsAiming;}

	// Custom Movement Speed

	UFUNCTION(BlueprintCallable,Category="KLS | Speed")
	void SetMaxGroundSpeed(float NewMaxGroundSpeed);

	UFUNCTION(BlueprintPure,Category = "KLS Helpers")
	FRotator RotationBetween(const FVector& v1,const FVector& v2) const;

private:
	UFUNCTION() void OnRep_ReplicatedAcceleration();
	UFUNCTION() void OnRep_IsStrafing();
	UFUNCTION() void OnRep_StrafeRotAlpha() const;

	UFUNCTION()
	void UpdateCustomRotation(const float DeltaTime, UKLSBaseAnimInstance* BaseAnimInstance) ;
	UPROPERTY( )bool FirstRotationUpdate = false;
	UPROPERTY() bool bIsAccelerating;
};







