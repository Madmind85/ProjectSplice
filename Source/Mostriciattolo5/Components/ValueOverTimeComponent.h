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


	//****ACTOR TELEPORT****//
	/**Va da start a end nel tempo time, quindi la velocità varia a seconda della distanza*/
	UFUNCTION(BlueprintCallable)
	void StartTeleporting(FVector Start, FVector End, float Time);
	/**va da start a end con velocità Speed, quindi il tempo varia a seconda della distanza*/
	UFUNCTION(BlueprintCallable)
	void StartTeleportingWithSpeed(FVector Start, FVector End, float Speed);


	//****CAMERA LATERAL MOVEMENT****//
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

	//****ROTATE OWNER TO FOCUS****//
	UFUNCTION(BlueprintCallable)
	void NPCRotateToFocus(AActor* FocusToSet);
	UFUNCTION(BlueprintCallable)
	void StopFacingFocus();
	UPROPERTY(EditDefaultsOnly, Category = "Focus")
	float RotationToFocusSpeed = 0.2f;

private:

	class AMostriciattolo5Character* OwnerChar = nullptr;

	//****ACTOR TELEPORT****//
	void MoveActorSmoothly(float DeltaS);
	FVector MStartLocation;
	FVector MTargetLocation;
	float MStartTime;
	float CurrentTeleportTime = 0.f;
	float MInterpolationTime = 2.0f;
	bool CanTeleport = false;

	//****CAMERA LATERAL MOVEMENT****//
	void CameraMoveOverTime(float Speed);
	bool CanCameraMovetOverTime = false;
	bool CameraRightToLeft = false;
	
	//****ROTATE OWNER TO FOCUS****//
	void RotateTowardsFocus();
	bool IsFacingFocus();
	bool bCanRotateNPCToFocus = false;
	void IsFacingFocusCheck();
	void RotateNPCTowardsFocus();
	AActor* NPCFocus;
};
