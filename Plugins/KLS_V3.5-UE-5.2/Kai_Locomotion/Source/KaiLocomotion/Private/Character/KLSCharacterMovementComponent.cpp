// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/KLSCharacterMovementComponent.h"

#include "KismetAnimationLibrary.h"
#include "Animation/KLSBaseAnimInstance.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "Net/UnrealNetwork.h"


#pragma region (Saved Move Class)

void FKLSSavedMove::Clear()
{
	FSavedMove_Character::Clear();
	SavedCustomFlags &= ~0;
}

uint8 FKLSSavedMove::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();
	return Result;
}

bool FKLSSavedMove::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	FKLSSavedMove* NewMovePtr = static_cast<FKLSSavedMove*>(NewMove.Get());
	if (SavedMaxGroundSpeed!= NewMovePtr->SavedMaxGroundSpeed)
	{
		return false; 
	}
	if (SavedCustomFlags != NewMovePtr->SavedCustomFlags)
	{
		return false; 
	}

	if(SavedCustomRotationYaw != NewMovePtr->SavedCustomRotationYaw)
	{
		return false; 
	}
	return FSavedMove_Character::CanCombineWith(NewMove, Character, MaxDelta);
}

void FKLSSavedMove::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel,FNetworkPredictionData_Client_Character& ClientData)
{
	FSavedMove_Character::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);
	if (const UKLSCharacterMovementComponent* CharacterMovement = Cast<UKLSCharacterMovementComponent>(Character->GetCharacterMovement()))
	{
		
		SavedCustomRotationYaw = CharacterMovement->CustomRotationYaw;
		SavedMaxGroundSpeed = CharacterMovement->MaxGroundSpeed;
		SavedCustomFlags = CharacterMovement->CustomMovementFlags;
	}
}

void FKLSSavedMove::PrepMoveFor(ACharacter* Character)
{
	FSavedMove_Character::PrepMoveFor(Character);
	if (UKLSCharacterMovementComponent* CharacterMovement = Cast<UKLSCharacterMovementComponent>(Character->GetCharacterMovement()))
	{
		
		CharacterMovement->CustomRotationYaw = SavedCustomRotationYaw;
		CharacterMovement->MaxGroundSpeed = SavedMaxGroundSpeed;
		CharacterMovement->CustomMovementFlags = SavedCustomFlags;
	}
}

#pragma endregion

void FKLSNetworkMoveData::ClientFillNetworkMoveData(const FSavedMove_Character& ClientMove, ENetworkMoveType MoveType)
{
	Super::ClientFillNetworkMoveData(ClientMove, MoveType);
	const FKLSSavedMove& savedMove = static_cast<const FKLSSavedMove&>(ClientMove);   
	SavedNetworkMaxGroundSpeed = savedMove.SavedMaxGroundSpeed;
	
	SavedNetworkCustomRotationYaw = savedMove.SavedCustomRotationYaw;
	SavedNetworkCustomFlags = savedMove.SavedCustomFlags;
}

bool FKLSNetworkMoveData::Serialize(UCharacterMovementComponent& CharacterMovement, FArchive& Ar,UPackageMap* PackageMap, ENetworkMoveType MoveType)
{
	Super::Serialize(CharacterMovement, Ar, PackageMap, MoveType);
	SerializeOptionalValue<float>(Ar.IsSaving(), Ar, SavedNetworkMaxGroundSpeed, 450.f);
	SerializeOptionalValue<float>(Ar.IsSaving(), Ar, SavedNetworkCustomRotationYaw, 0.f);
	SerializeOptionalValue<uint8>(Ar.IsSaving(), Ar, SavedNetworkCustomFlags, 0);

	return !Ar.IsError(); 
	
}

FKLSCharacterNetworkMoveDataContainer::FKLSCharacterNetworkMoveDataContainer()
{
	NewMoveData = &CustomDefaultMoveData[0];
	PendingMoveData = &CustomDefaultMoveData[1];
	OldMoveData = &CustomDefaultMoveData[2];
}

FKLSNetworkPredictionData_Client::FKLSNetworkPredictionData_Client(const UCharacterMovementComponent& ClientMovement) : Super(ClientMovement)
{
	
}

FSavedMovePtr FKLSNetworkPredictionData_Client::AllocateNewMove()
{
	return  FSavedMovePtr(new FKLSSavedMove()); ;
}


#pragma region (Character Movement component)
UKLSCharacterMovementComponent::UKLSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SetNetworkMoveDataContainer(NetworkMoveDataContainer);
	SetIsReplicatedByDefault(true);
}

void UKLSCharacterMovementComponent::ActivateCustomMovementFlag(ECustomMovementFlags Flag)
{
	CustomMovementFlags |= 1UL << Flag;
}

void UKLSCharacterMovementComponent::ClearCustomMovementFlag(ECustomMovementFlags Flag)
{
	CustomMovementFlags &= ~(1UL << Flag);
}

void UKLSCharacterMovementComponent::BeginPlay()
{
	if(PawnOwner->GetLocalRole() >= ROLE_AutonomousProxy || PawnOwner->IsNetMode(NM_Standalone))
	{
		if(bUseControllerDesiredRotation || GetCharacterOwner()->bUseControllerRotationYaw)
		{
			ToggleStrafing(true);
		}
		else if(bOrientRotationToMovement)
		{
			ToggleStrafing(false);
		}
		WasStrafing = IsStrafing();
	}
	Super::BeginPlay();
}

void UKLSCharacterMovementComponent::MoveAutonomous(float ClientTimeStamp, float DeltaTime, uint8 CompressedFlags,const FVector& NewAccel)
{
	
	const FKLSNetworkMoveData* MoveData = static_cast<FKLSNetworkMoveData*>(GetCurrentNetworkMoveData());
	if (MoveData != nullptr)
	{
		CustomRotationYaw = MoveData->SavedNetworkCustomRotationYaw;
		MaxGroundSpeed = MoveData->SavedNetworkMaxGroundSpeed;
		CustomMovementFlags =  MoveData->SavedNetworkCustomFlags;
	}
	
	Super::MoveAutonomous(ClientTimeStamp, DeltaTime, CompressedFlags, NewAccel);
	
}

void UKLSCharacterMovementComponent::UpdateCharacterStateBeforeMovement(float DeltaSeconds)
{
	
	if(PawnOwner->GetLocalRole() >= ROLE_AutonomousProxy || PawnOwner->IsNetMode(NM_Standalone))
	{
		const bool WantsToStrafe = IsCustomFlagSet(CFLAG_Strafing) || (IsCustomFlagSet(CFLAG_Aiming) && AutoStrafeWhenAiming);
		 
		if(WantsToStrafe != WasStrafing )
		{
			RotationModeChanged(WantsToStrafe);
		}
		WasStrafing = IsStrafing();
		bIsAiming = IsCustomFlagSet(CFLAG_Aiming);
		if(PawnOwner->IsLocallyControlled())
		{
			if( UKLSBaseAnimInstance* BaseAnimInstance = Cast<UKLSBaseAnimInstance>( GetCharacterOwner()->GetMesh()->GetAnimInstance()))
			{
				
				UpdateCustomRotation(DeltaSeconds,BaseAnimInstance);
				if(BaseAnimInstance->CustomRotationData.UseCustomRotation)
				{
					ActivateCustomMovementFlag(CFLAG_UseAnimCustomRot);
					
					
				}
				else
				{
					ClearCustomMovementFlag(CFLAG_UseAnimCustomRot);
				}
				CustomRotationYaw = BaseAnimInstance->CustomRotationData.CustomRotationYaw;
			}
		}
		//Replicated Control Rotation To Simulated Proxies
		if(GetCharacterOwner()->GetController())
		{
			ReplicatedControlRotation = GetCharacterOwner()->GetControlRotation();
		}
		
	}
	Super::UpdateCharacterStateBeforeMovement(DeltaSeconds);
}


void UKLSCharacterMovementComponent::SimulateMovement(float DeltaTime)
{
	const FVector OriginalAcceleration = Acceleration;
	Super::SimulateMovement(DeltaTime);
	Acceleration = OriginalAcceleration;
}


FNetworkPredictionData_Client* UKLSCharacterMovementComponent::GetPredictionData_Client() const
{
	check(PawnOwner);

	if (!ClientPredictionData)
	{
		UKLSCharacterMovementComponent* MutableThis = const_cast<UKLSCharacterMovementComponent*>(this);
		MutableThis->ClientPredictionData = new FKLSNetworkPredictionData_Client(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}
	return ClientPredictionData;
}

float UKLSCharacterMovementComponent::GetMaxSpeed() const
{
		switch(MovementMode)
		{
		case MOVE_Walking:
		case MOVE_NavWalking:
			{
				if (IsCrouching())
				{
					return MaxWalkSpeedCrouched; 
				}
				return UseKLSReplicatedSpeed ? MaxGroundSpeed : MaxWalkSpeed; 
			}
		case MOVE_Falling:
			return  UseKLSReplicatedSpeed ? MaxGroundSpeed : MaxWalkSpeed; 
		case MOVE_Swimming:
			return MaxSwimSpeed;
		case MOVE_Flying:
			return MaxFlySpeed;
		case MOVE_Custom:
			return MaxCustomMovementSpeed;
		case MOVE_None:
		default:
			return 0.f;
		}
	
	
}

float UKLSCharacterMovementComponent::GetMaxAcceleration() const
{
	
	if(Velocity.SquaredLength() > KINDA_SMALL_NUMBER && Acceleration.SquaredLength() > KINDA_SMALL_NUMBER)
	{
		const float MaxAccel = IsCrouching() ? CrouchMaxAcceleration : MaxAcceleration;
		const float DotProduct = FVector::DotProduct(Acceleration.GetSafeNormal(),Velocity.GetSafeNormal());
		const float MaxAccelMultiplier = FMath::GetMappedRangeValueClamped(FVector2f{1.f,-1.f},FVector2f{1.0f,PivotMultiplier},DotProduct);
		return MaxAccel * MaxAccelMultiplier;
	}
	return Super::GetMaxAcceleration();
}


//Physics Functions
namespace KLS_RotFunction
{
	float GetAxisDeltaRotation(float InAxisRotationRate, float DeltaTime)
	{
		// Values over 360 don't do anything, see FMath::FixedTurn. However we are trying to avoid giant floats from overflowing other calculations.
		return (InAxisRotationRate >= 0.f) ? FMath::Min(InAxisRotationRate * DeltaTime, 360.f) : 360.f;
	}
}

void UKLSCharacterMovementComponent::PhysicsRotation(float DeltaTime)
{
	if(IsCustomFlagSet(CFLAG_UseAnimCustomRot))
	{
		if (!(bOrientRotationToMovement || bUseControllerDesiredRotation))
        	{
        		return;
        	}
        
        	if (!HasValidData() || (!CharacterOwner->GetController() && !bRunPhysicsWithNoController))
        	{
        		return;
        	}
		// Accumulate a desired new rotation.
		const FRotator CurrentRotation =  UpdatedComponent->GetComponentRotation(); // Normalized
		CurrentRotation.DiagnosticCheckNaN(TEXT("CharacterMovementComponent::PhysicsRotation(): CurrentRotation"));
        	
		FRotator DesiredRotation = CurrentRotation;
        	
	   DesiredRotation.Yaw = FRotator::NormalizeAxis( CustomRotationYaw);
		
	   if (constexpr float AngleTolerance = 1e-3f; !FMath::IsNearlyEqual(CurrentRotation.Yaw, DesiredRotation.Yaw, AngleTolerance))
	   {
        		
	   	   float RotRate = GetDeltaRotation(DeltaTime).Yaw;
		   DesiredRotation.Yaw = FMath::FixedTurn(CurrentRotation.Yaw, DesiredRotation.Yaw, RotRate);
	   }
		DesiredRotation = DesiredRotation.GetDenormalized();
		// Set the new rotation.
		DesiredRotation.DiagnosticCheckNaN(TEXT("CharacterMovementComponent::PhysicsRotation(): DesiredRotation"));
		MoveUpdatedComponent( FVector::ZeroVector, DesiredRotation, /*bSweep*/ false );
	}
	else
	{
		Super::PhysicsRotation(DeltaTime);
		
	}
	
}

void UKLSCharacterMovementComponent::PhysWalking(float deltaTime, int32 Iterations)
{
	
	Super::PhysWalking(deltaTime, Iterations);
	if (Acceleration.SizeSquared() > KINDA_SMALL_NUMBER)
	{
		const float DirectionSign = FMath::Sign(UKismetAnimationLibrary::CalculateDirection(GetCurrentAcceleration(),UpdatedComponent->GetComponentRotation()));
		RotationDirection =  FMath::FloorToInt(DirectionSign);
	}
	const float DesiredMaxSpeed = GetMaxSpeed() * GetAnalogInputModifier();
	if(Acceleration.GetSafeNormal2D().Dot(Velocity.GetSafeNormal2D()) < -0.2 && Velocity.Size2D() > DesiredMaxSpeed * 0.5 && Acceleration.SizeSquared() > KINDA_SMALL_NUMBER && !bIsPivoting)
	{
		bIsPivoting = true;
		
	}
	else if((Acceleration.GetSafeNormal2D().Dot(Velocity.GetSafeNormal2D()) >= 0 || Acceleration.SizeSquared() <= KINDA_SMALL_NUMBER) && bIsPivoting)
	{
		bIsPivoting = false;
	}

	
}

void UKLSCharacterMovementComponent::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker)
{
	Super::PreReplication(ChangedPropertyTracker);
	ReplicatedAcceleration = Acceleration;
	
}

void UKLSCharacterMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ThisClass, ReplicatedAcceleration, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, bIsStrafing, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, bIsAiming, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, bIsPivoting, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, MaxGroundSpeed, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, RotationDirection, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, ReplicatedControlRotation, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ThisClass, StrafeRotAlpha, COND_SimulatedOnly);
}



FRotator UKLSCharacterMovementComponent::GetDeltaRotation(float DeltaTime) const
{
	if(IsCustomFlagSet(CFLAG_UseAnimCustomRot))
	{
		if(IsStrafing())
		{
			return FRotator(KLS_RotFunction::GetAxisDeltaRotation(StrafeRotationRate.Pitch, DeltaTime),
					KLS_RotFunction::GetAxisDeltaRotation(StrafeRotationRate.Yaw, DeltaTime),
					KLS_RotFunction::GetAxisDeltaRotation(StrafeRotationRate.Roll, DeltaTime));
		}
	
	}
	return Super::GetDeltaRotation(DeltaTime);
}

void UKLSCharacterMovementComponent::ToggleStrafing(bool Strafe)
{
	Strafe ? ActivateCustomMovementFlag(CFLAG_Strafing) : ClearCustomMovementFlag(CFLAG_Strafing);
}

void UKLSCharacterMovementComponent::SetMaxGroundSpeed(float NewMaxGroundSpeed)
{
	MaxGroundSpeed = NewMaxGroundSpeed;
}

FRotator UKLSCharacterMovementComponent::RotationBetween(const FVector& v1, const FVector& v2) const
{
	const float Dot = v1|v2; 
	const FVector Axis = FVector::CrossProduct(v1,v2);
	const float Angle =FMath::RadiansToDegrees(FMath::Acos(Dot)) ;
	return UKismetMathLibrary::RotatorFromAxisAndAngle(Axis,Angle);
	
}


void UKLSCharacterMovementComponent::OnRep_ReplicatedAcceleration()
{
	Acceleration = ReplicatedAcceleration;
}

void UKLSCharacterMovementComponent::OnRep_IsStrafing()
{
	if(GetCharacterOwner()->GetLocalRole() == ROLE_SimulatedProxy)
	{
		RotationModeChanged(bIsStrafing);
	}
	
}

void UKLSCharacterMovementComponent::OnRep_StrafeRotAlpha() const
{
	if( UKLSBaseAnimInstance* BaseAnimInstance = Cast<UKLSBaseAnimInstance>( GetCharacterOwner()->GetMesh()->GetAnimInstance()))
	{
		BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = StrafeRotAlpha ;
	}
}

void UKLSCharacterMovementComponent::UpdateCustomRotation(const float DeltaTime,UKLSBaseAnimInstance* BaseAnimInstance) 
{
	if(!GetCharacterOwner() || !GetCharacterOwner()->GetController()) 
	{
		return;
	}
	
	
	const bool HasWeight = BaseAnimInstance->GetCustomRotationWeight() > BaseAnimInstance->CustomRotationData.CustomRotationCurveWeight || BaseAnimInstance->GetCustomRotationWeight() >= 0.99;
	const bool HasNoRootMotion = HasRootMotionSources() == false;
	BaseAnimInstance->CustomRotationData.ControlRotation = GetPawnOwner()->GetController()->GetDesiredRotation().GetNormalized();
	if(GetCurrentAcceleration().SizeSquared() > KINDA_SMALL_NUMBER)
	{
		BaseAnimInstance->CustomRotationData.AccelRotation = GetCurrentAcceleration().GetSafeNormal().Rotation();
	}
	
	BaseAnimInstance->CustomRotationData.UseCustomRotation = HasWeight && HasNoRootMotion;
	

	if(BaseAnimInstance->CustomRotationData.UseCustomRotation)
	{
		
		if(IsStrafing())
		{
			
			
			BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight = FMath::Clamp(BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight + DeltaTime * 4,0,1);
			
			switch (BaseAnimInstance->CustomRotationData.CustomRotationType)
			{
			case EKLSCustomRotationType::EHold:
				{
					BaseAnimInstance->CustomRotationData.TotalRotationOffset = FRotator::NormalizeAxis(FRotator::NormalizeAxis(UpdatedComponent->GetComponentRotation().Yaw) - BaseAnimInstance->CustomRotationData.ControlRotation.Yaw );
					BaseAnimInstance->CustomRotationData.ClampedRotationOffset = FMath::ClampAngle(BaseAnimInstance->CustomRotationData.TotalRotationOffset,-90,90);
					const float OffsetDifference = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.TotalRotationOffset - BaseAnimInstance->CustomRotationData.ClampedRotationOffset) * (1 - BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight);
					const float TotalYawOffset = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ClampedRotationOffset + OffsetDifference);
					BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight = 0.0f;
					BaseAnimInstance->CustomRotationData.CustomRotationYaw = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ControlRotation.Yaw + TotalYawOffset);
					BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = 0;
					break;
				}
			case EKLSCustomRotationType::EInterpolate:
				{
					
					BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight = FMath::Clamp(BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight + DeltaTime * 4,0,1);
					const float OffsetDifference = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.TotalRotationOffset - BaseAnimInstance->CustomRotationData.ClampedRotationOffset) * (1 - BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight);
					float TotalYawOffset = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ClampedRotationOffset + OffsetDifference);
					TotalYawOffset *= 1 - BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight;
					BaseAnimInstance->CustomRotationData.CustomRotationYaw = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ControlRotation.Yaw + TotalYawOffset);
					BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = 0;
					break;
				}
			case EKLSCustomRotationType::EAnimRot:
				{
					//Anim States That Set This To Hold Will Directly Take care of Changing the Desired Rotation,
					//We don't do anything here.
					const float OffsetDifference = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.TotalRotationOffset - BaseAnimInstance->CustomRotationData.ClampedRotationOffset) * (1 - BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight);
					float TotalYawOffset = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ClampedRotationOffset  + OffsetDifference);
					BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight = 0.0f;
					TotalYawOffset *= 1 - BaseAnimInstance->CustomRotationData.StrafeRotationAlpha;
					BaseAnimInstance->CustomRotationData.CustomRotationYaw = FRotator::NormalizeAxis(BaseAnimInstance->CustomRotationData.ControlRotation.Yaw + TotalYawOffset);
					
					break;
				}
			}
			
			
			
		}
		else // Using Orient Rotation To Movement
		{
			BaseAnimInstance->CustomRotationData.TotalRotationOffset = FRotator::NormalizeAxis(UpdatedComponent->GetComponentRotation().GetNormalized().Yaw - BaseAnimInstance->CustomRotationData.ControlRotation.Yaw );
			BaseAnimInstance->CustomRotationData.ClampedRotationOffset = FMath::ClampAngle(BaseAnimInstance->CustomRotationData.TotalRotationOffset,-90,90);
			BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight = 0;
			BaseAnimInstance->CustomRotationData.StrafeRotationAlpha = 0;
			BaseAnimInstance->CustomRotationData.StrafeInterpRotationWeight = 0.0f;
			
			switch (BaseAnimInstance->CustomRotationData.CustomRotationType)
			{
			case EKLSCustomRotationType::EHold:
				{
					BaseAnimInstance->CustomRotationData.CustomRotationYaw = UpdatedComponent->GetComponentRotation().GetNormalized().Yaw;
					break;
				}
			case EKLSCustomRotationType::EInterpolate:
				{
					//Don't Interpolate Rotation If We Are No Longer Accelerating.
					if(GetCurrentAcceleration().SizeSquared() > KINDA_SMALL_NUMBER)
					{
						const FRotator CurrentRotation = UpdatedComponent->GetComponentRotation().GetNormalized();
						const FRotator DesiredRotation = FMath::RInterpTo(CurrentRotation,BaseAnimInstance->CustomRotationData.AccelRotation,DeltaTime,BaseAnimInstance->RotationInterpSpeed); 
						BaseAnimInstance->CustomRotationData.CustomRotationYaw = DesiredRotation.Yaw;
					}
					break;
					
				}
			case EKLSCustomRotationType::EAnimRot:
				{
					//Anim States That Set This To Hold Will Directly Take care of Changing the Desired Rotation,
					//We don't do anything here.
					break;
				}
			}
		}
	}
	//Don't Use Custom Rotation So Take The Actor's Rotation And Save it As the custom rotation
	// the CMC is not using this at this point either , we save it so it's correct when we want to use it.
	else
	{
		BaseAnimInstance->CustomRotationData.CustomRotationYaw = UpdatedComponent->GetComponentRotation().GetNormalized().Yaw;
		BaseAnimInstance->CustomRotationData.StrafeHoldRotationWeight = 0;
	}
	
	BaseAnimInstance->CustomRotationData.CustomRotationYaw = FRotator3f::ClampAxis(BaseAnimInstance->CustomRotationData.CustomRotationYaw);
	BaseAnimInstance->CustomRotationData.CustomRotationCurveWeight = BaseAnimInstance->GetCustomRotationWeight();
	StrafeRotAlpha = BaseAnimInstance->CustomRotationData.StrafeRotationAlpha;
}

void UKLSCharacterMovementComponent::RotationModeChanged(const bool Strafe)
{
	if(Strafe)
	{
		bOrientRotationToMovement = false;
		bUseControllerDesiredRotation = true;
	}
	else
	{
		bOrientRotationToMovement = true;
		bUseControllerDesiredRotation = false;
	}
	bIsStrafing = Strafe;
}

void UKLSCharacterMovementComponent::ToggleAiming(bool Aim)
{
	Aim ? ActivateCustomMovementFlag(CFLAG_Aiming) : ClearCustomMovementFlag(CFLAG_Aiming);
}
#pragma endregion
