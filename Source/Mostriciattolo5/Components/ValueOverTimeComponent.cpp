// Fill out your copyright notice in the Description page of Project Settings.


#include "ValueOverTimeComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Math/UnrealMathUtility.h"
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
	
}


	// Called every frame
	void UValueOverTimeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
		// ...
		
		if (CanCameraMovetOverTime)
		{
			CameraMoveOverTime(DeltaTime);
		}

		if (CanTeleport)
		{
			MoveActorSmoothly(DeltaTime);
		}
		if (CanRotate)
		{
			RotateActorTowardWithInterp(M_ActorToFace, M_RotationSpeed, M_InterpSpeed);
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

	void UValueOverTimeComponent::StartCameraMoveOverTime(bool RightToLeft)
	{
		CanCameraMovetOverTime = true;
		CameraRightToLeft = RightToLeft;
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


	void UValueOverTimeComponent::RotateActorTowardWithInterp(AActor* ActorToFace, float RotationSpeed, float InterpSpeed)
	{
		

			if (GetOwner() && ActorToFace)
			{

				// Get the current yaw rotation of the actor
				float CurrentAngle = GetOwner()->GetActorRotation().Yaw;
				// Calculate the direction difference between the two actors
				FVector DirectionToFace = ActorToFace->GetActorLocation() - GetOwner()->GetActorLocation();
				FRotator Rot = FRotationMatrix::MakeFromX(DirectionToFace).Rotator();
				float RotationD = Rot.Yaw;

				// Calculate the shortest rotation to the target angle in radians
				float RotationDelta = FMath::FindDeltaAngleRadians(CurrentAngle, RotationD);

				// Rotate the actor towards the target angle
				GetOwner()->AddActorWorldRotation(FQuat(FRotator(0.0f, RotationDelta * InterpSpeed, 0.0f)) * RotationSpeed);

				// Stop rotating if the desired rotation has been reached
				if (FMath::Abs(RotationDelta) < 0.1f)
				{
					CanRotate = false;
				}
			}
		
		
	}

	void UValueOverTimeComponent::StartRotatingActor(AActor* ActorToFace, float RotationSpeed, float InterpSpeed)
	{
		CanRotate = true;
		M_ActorToFace = ActorToFace;
		M_RotationSpeed = RotationSpeed;
		M_InterpSpeed = InterpSpeed;
	}

	void UValueOverTimeComponent::StopRotatingActor()
	{

		CanRotate = false;
		M_ActorToFace = nullptr;
		M_RotationSpeed = 0.f;
		M_InterpSpeed = 0.f;
	}
