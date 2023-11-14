// Fill out your copyright notice in the Description page of Project Settings.


#include "ValueOverTimeComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"

// Sets default values for this component's properties
UValueOverTimeComponent::UValueOverTimeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UValueOverTimeComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	CameraSpringArm = GetOwner()->FindComponentByClass<USpringArmComponent>();
	OwnerChar = Cast<AMostriciattolo5Character>(GetOwner());
}


	// Called every frame
	void UValueOverTimeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
		// ...
		if (bCanRotateNPCToFocus)
		{
			RotateNPCTowardsFocus();
		}
		
		if (CanCameraMovetOverTime)
		{
			CameraMoveOverTime(DeltaTime);
		}

		if (CanTeleport)
		{
			MoveActorSmoothly(DeltaTime);
		}

		if (OwnerChar->GetCurrentFocus())
		{
			RotateTowardsFocus();
		}
	}

	void UValueOverTimeComponent::CameraMoveOverTime(float DeltaTime)
	{

		if (!CameraSpringArm)
		{
				UE_LOG(LogTemp, Warning, TEXT("BADA camera not set in ValueOverTimeComponent"))
					return;
		}

		float TargetOffset = CameraRightToLeft ? CameraOffset_Left : CameraOffset_Right;

		float Alpha = FMath::Clamp(CameraOffset_Speed * DeltaTime, 0.f, 1.f);

		if (Alpha < 0.9f) 
		{
			CurrentCameraOffset = FMath::Lerp(CurrentCameraOffset, TargetOffset, Alpha);
			BP_ChangeSpringArmOffset(CurrentCameraOffset, CameraSpringArm);
		}
	
	}

	void UValueOverTimeComponent::RotateTowardsFocus()
	{
			AMostriciattolo5Character* CurrentFocus = OwnerChar->GetCurrentFocus();
			if (CurrentFocus)
			{
				FRotator Rot = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), CurrentFocus->GetActorLocation());
				
				FRotator NewRot = FMath::RInterpTo(OwnerChar->GetActorRotation(), Rot, 0.2f, 0.5f);
				NewRot.Pitch = 0.f;
				OwnerChar->SetActorRotation(NewRot);
			}
	}

	bool UValueOverTimeComponent::IsFacingFocus()
	{
		AMostriciattolo5Character* CurrentFocus = OwnerChar->GetCurrentFocus();
		if (CurrentFocus) 
		{
			FRotator ActualRot = GetOwner()->GetActorRotation();
			FRotator DesiredRot = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), CurrentFocus->GetActorLocation());
			if (ActualRot.Equals(DesiredRot, 10.f))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	void UValueOverTimeComponent::IsFacingFocusCheck()
	{
		if (IsFacingFocus())
		{
			OwnerChar->SetCurrentFocus(nullptr);
			bCanRotateNPCToFocus = false;
		}
	}

	void UValueOverTimeComponent::StartCameraMoveOverTime(bool RightToLeft)
	{
		CanCameraMovetOverTime = true;
		CameraRightToLeft = RightToLeft;
	}


	void UValueOverTimeComponent::NPCRotateToFocus(AMostriciattolo5Character* FocusToSet)
	{
		if (OwnerChar && FocusToSet)
		{
			NPCFocus = FocusToSet;
			bCanRotateNPCToFocus = true;	
		}
	}

	void UValueOverTimeComponent::MoveActorSmoothly(float DeltaS)
	{
		if (!GetOwner()) { return; }

		// Calculate the interpolation factor based on the elapsed time
		CurrentTeleportTime += DeltaS;
		float LerpAlpha = FMath::Clamp(CurrentTeleportTime / MInterpolationTime, 0.0f, 1.0f);

		// Perform the interpolation
		FVector NewLocation = FMath::Lerp(MStartLocation, MTargetLocation, LerpAlpha);

		// Set the actor's new location
		GetOwner()->SetActorLocation(NewLocation);

		// Check if the interpolation is complete
		if (LerpAlpha >= 1.f)
		{
			CurrentTeleportTime = 0.f;
			MStartTime = 0.f;
			CanTeleport = false;
			AMostriciattolo5Character* OwnerMos = Cast<AMostriciattolo5Character>(GetOwner());
			if (OwnerMos)
			{
				OwnerMos->OnTeleportFinished();
			}
		}
	}

	void UValueOverTimeComponent::StartTeleporting(FVector Start, FVector End, float Time)
	{
		MStartLocation = Start;
		MTargetLocation = End;
		MStartTime = GetWorld()->GetTimeSeconds();
		MInterpolationTime = Time;
		CanTeleport = true;

	}

	void UValueOverTimeComponent::StartTeleportingWithSpeed(FVector Start, FVector End, float Speed)
	{
		MStartLocation = Start;
		MTargetLocation = End;
		MStartTime = GetWorld()->GetTimeSeconds();
		MInterpolationTime = FVector::Distance(Start, End) / Speed;
		CanTeleport = true;
		 
	}


	void UValueOverTimeComponent::RotateNPCTowardsFocus()
	{
		IsFacingFocusCheck();
		
		if (NPCFocus)
		{
			FRotator Rot = UKismetMathLibrary::FindLookAtRotation(GetOwner()->GetActorLocation(), NPCFocus->GetActorLocation());

			FRotator NewRot = FMath::RInterpTo(OwnerChar->GetActorRotation(), Rot, 0.2f, 0.5f);
			NewRot.Pitch = 0.f;
			OwnerChar->SetActorRotation(NewRot);
		}
	}