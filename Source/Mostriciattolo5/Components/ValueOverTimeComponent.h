// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ValueOverTimeComponent.generated.h"



UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MOSTRICIATTOLO5_API UValueOverTimeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UValueOverTimeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	//Camera Lateral movement
	UPROPERTY(EditDefaultsOnly)
	class USpringArmComponent* CameraSpringArm = nullptr;
	UFUNCTION(BlueprintCallable)
	void StartCameraMoveOverTime(bool RightToLeft);
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float CameraOffset_Left = -10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float CameraOffset_Right = 10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float CameraOffset_Speed = 4.f;
	float CurrentCameraOffset = 0.f;
	UFUNCTION(BlueprintImplementableEvent)
	void BP_ChangeSpringArmOffset(float SAOffset, USpringArmComponent* SpringArm);

private:

	//Camera Lateral movement
	void CameraMoveOverTime(float Speed);
	bool CanCameraMovetOverTime = false;
	bool CameraRightToLeft = false;
	
};
