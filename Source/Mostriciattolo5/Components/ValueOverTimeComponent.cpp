// Fill out your copyright notice in the Description page of Project Settings.


#include "ValueOverTimeComponent.h"
#include "GameFramework/SpringArmComponent.h"

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
		
		if (CanCameraMovetOverTime == true)
		{
	
			CameraMoveOverTime(DeltaTime);
			
		}
	
	}

		void UValueOverTimeComponent::CameraMoveOverTime(float DeltaTime)
		{

			if (!CameraSpringArm) {
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

