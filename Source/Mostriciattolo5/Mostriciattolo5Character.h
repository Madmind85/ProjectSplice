

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Mostriciattolo5Character.generated.h"

UENUM(BlueprintType)
enum class NPCStatus : uint8
{
	Tranquillo = 0 UMETA(DisplayName = "Tranquillo"),
	Attento = 1  UMETA(DisplayName = "Attento"),
	Aggressivo = 2    UMETA(DisplayName = "Aggressivo")
};


UCLASS(config=Game)
class AMostriciattolo5Character : public ACharacter
{
	GENERATED_BODY()

	
	
	/** Camera boom positioning the camera behind the character 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
	*/

	/** Follow camera 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	*/
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

public:
	AMostriciattolo5Character();
	
	virtual void Tick(float DeltaSeconds) override;

	/**Va da start a end nel tempo time*/
	UFUNCTION(BlueprintCallable)
	void StartTeleporting(FVector Start, FVector End, float Time);
	/**va da start a end con velocità Speed, quindi il tempo varia a seconda della distanza*/
	UFUNCTION(BlueprintCallable)
	void StartTeleportingWithSpeed(FVector Start, FVector End, float Speed);

	UFUNCTION(BlueprintCallable)
	void FindCharacterToTarget(float TMouseX);
	UFUNCTION(BlueprintCallable)
	void SetCurrentFocus(AMostriciattolo5Character* FocusToSet);

	UCapsuleComponent* GetPossessSocket();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCapsuleComponent* PossessSocket;

	virtual void OnTeleportFinished();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

public:
	static bool SortActorDistance(AActor* Actor_A, AActor* Actor_B);
	/** Returns CameraBoom subobject 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject 
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	*/

	UFUNCTION(BlueprintCallable)
	bool HasLostTarget();
	UFUNCTION(BlueprintCallable)
	bool IsNotTarget();
	UPROPERTY(BlueprintReadWrite)
	bool CanBeTarget = false;
	UPROPERTY(BlueprintReadWrite)
	float TargetLastSeen = 0.f;
	UPROPERTY(BlueprintReadWrite)
	bool IsTarget = false;
	UFUNCTION(BlueprintCallable)
	bool StartSelectFocusMode();
	UFUNCTION(BlueprintCallable)
	void EndSelectFocusMode();
	

	UPROPERTY(BlueprintReadWrite)
	bool TSelectModeOn = false;
	//forse mettere private con getter
	UPROPERTY(BlueprintReadWrite)
	AMostriciattolo5Character* PreviousActor = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	FVector TargetBoxShape;
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	TArray<float> LineTraceTargetEnd;
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float CameraOffset_Left = -10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float CameraOffset_Right = 10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	float CameraOffset_Speed = 4.f;

	UPROPERTY(BlueprintReadWrite)
	UArrowComponent* SelectTargetArrow;
	/**velocità di corsa quando ti insegue come suo target*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float ChaseSpeed = 500.f;
	/**quanto ci mette prima di tornare quello che stava facendo dopo che vede piu questo npc*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float LooseTargetTime = 3.f;
	/**quanto ci mette prima non calcolare piu questo npc come target dopo che e stato posseduto*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float NotTargetTime = 0.5f;
	/**Angolo in gradi del cono di vista interno (quello che se ci sei dentro ti insegue subito)*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float InnerConeDegrees = 45.f;
	/**percentuale della sight radius (settabile su pawn sensing) appartenente al cono interno*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Behaviour")
	float InnerConeLength = 75.f;
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float RotationSpeed = 50.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Possession")
	float FindCharacterToTargetReach = 2000.f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class UArrowComponent* PossessArrowTarget;
	/**quanto ci mette in secondi a spostarsi dalla poszione che ha  ora ad appiccicato al possession point quando  possiede*/
	UPROPERTY(EditDefaultsOnly, Category = "Possession")
	float PossessTeleportTime = 3.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* MCamera = nullptr;
	UPROPERTY(BlueprintReadWrite)
	NPCStatus CurrentNPCStatus = NPCStatus::Tranquillo;
	UPROPERTY(BlueprintReadWrite)
	bool StartPossessionAnim = false;
	UPROPERTY(BlueprintReadWrite)
	bool StartPossessedAnim = false;

	class AMostriciattolo5GameMode* MGameMode;
	

	UFUNCTION(BlueprintImplementableEvent)
	void AfterDepossessed(AMostriciattolo5Player* Possessor);
	UFUNCTION(BlueprintImplementableEvent)
	void AfterPossession(AMostriciattolo5Player* Possessor);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetTarget();
	UFUNCTION(BlueprintImplementableEvent)
	void BP_ResetTarget();
	

	UPROPERTY(BlueprintReadWrite)
	bool IsBeingPossessed = false;
	UPROPERTY(BlueprintReadWrite)
	TArray<AMostriciattolo5Character*> PawnsInView;
	UFUNCTION(BlueprintCallable)
	void Depossess();
	UFUNCTION(BlueprintCallable)
	AMostriciattolo5Character* GetCurrentTarget();
	UFUNCTION(BlueprintCallable)
	void SetCurrenTarget(AMostriciattolo5Character* NewTarget);
	UFUNCTION(BlueprintCallable)
	AMostriciattolo5Character* GetCurrentFocus();

	UFUNCTION(BlueprintCallable)
	bool CheckInnerSightAngle(AMostriciattolo5Character* CharacterInSight, float PS_SightRadius);
	
	
	UFUNCTION(BlueprintImplementableEvent)
	void TurnCameraToTarget();
private:
	void MoveActorSmoothly(float DeltaS);
	FVector MStartLocation;
	FVector MTargetLocation;
	float MStartTime;
	float CurrentTeleportTime = 0.f;
	float MInterpolationTime = 2.0f;
	bool CanTeleport = false;
	AMostriciattolo5Character* CurrentTarget = nullptr;
	void RotatePlayerTowardsTarget();
	AMostriciattolo5Character* SelectedPawn = nullptr;
	float SelectedPawnDistanceToCenter = 100000.f;
	
	float GetDistanceFromScreenCenter();
	float GetViewPOsition_X();
	AMostriciattolo5Character* CurrentFocus = nullptr;
	
	void SortFocusActors( );
	//popola e ordina l'array pawns in view
	void InitPawnsInViewArray();
	void MClearFocus();
	bool GetIsVisibleOnScreen(AMostriciattolo5Character* ActorToBeSeen);
};

