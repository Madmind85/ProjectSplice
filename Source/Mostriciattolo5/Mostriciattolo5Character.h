

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Mostriciattolo5/Public/M_Enums.h"
#include "Interfaces/Int_Guardie.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "Mostriciattolo5Character.generated.h"




class AGun;
class AMWeapon;


UCLASS(config=Game)
class AMostriciattolo5Character : public ACharacter, public IInt_MCharacter, public IInt_Guardie
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

	//INPUT
	/** Called for movement input */
	UFUNCTION(BlueprintCallable)
	void Move(const FInputActionValue& Value);
	/** Called for looking input */
	UFUNCTION(BlueprintCallable)
	void Look(const FInputActionValue& Value);
	/** attacca con arma equipaggiata,a mani nude se senza arma o spara seranged, chiamato da input attack*/
	UFUNCTION(BlueprintCallable)
	void Attack(bool bAIShooting, AActor* AI_Target);
	virtual void Tick(float DeltaSeconds) override;


	// Int_MCharacter
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsActorDead();
	virtual bool Int_IsActorDead_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	ActorFaction Int_GetIsTarget();
	virtual ActorFaction Int_GetIsTarget_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsAiming(bool IsAiming);
	virtual void SetIsAiming_Implementation(bool IsAiming);
	UFUNCTION(BlueprintCallable)
	void FindCharacterToTarget(float TMouseX);
	UFUNCTION(BlueprintCallable)
	void SetCurrentFocus(AMostriciattolo5Character* FocusToSet);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsActorPossessed();
	virtual bool Int_IsActorPossessed_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetRunning(bool IsRunning);
	virtual void SetRunning_Implementation(bool IsRunning);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* Int_GetKillerActor();
	virtual AActor* Int_GetKillerActor_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_ResetKillerActor();
	virtual void Int_ResetKillerActor_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetFaction(ActorFaction NewFaction);
	virtual void Int_SetFaction_Implementation(ActorFaction NewFaction);


	UCapsuleComponent* GetPossessSocket();


	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCapsuleComponent* PossessSocket;

	

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

	class UValueOverTimeComponent* ValueOverTimeComponent;


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AMWeapon> MWeaponClass;

public:

	static bool SortActorDistance(AActor* Actor_A, AActor* Actor_B);
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
	virtual void OnTeleportFinished();
	void MClearFocus();
	void SetNotPossessedTimer();

	/** Returns CameraBoom subobject 
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject 
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	*/

	//Se true non puoi' usare depossess, viene resettata quando questo char viene posseduto
	bool IsSpammingDepossess = false;
	UPROPERTY(BlueprintReadWrite)
	bool IsSpammingPossess = false;

	
	UPROPERTY(BlueprintReadWrite)
	AActor* KillerActor = nullptr;
	UPROPERTY(BlueprintReadWrite)
	bool CanBeTarget = false;
	UPROPERTY(BlueprintReadWrite)
	float TargetLastSeen = 0.f;
	UPROPERTY(BlueprintReadWrite)
	ActorFaction IsTarget = ActorFaction::Neutrale;
	UPROPERTY(BlueprintReadWrite)
	bool TSelectModeOn = false;
	//forse mettere private con getter
	UPROPERTY(BlueprintReadWrite)
	AMostriciattolo5Character* PreviousActor = nullptr;
	UPROPERTY(BlueprintReadWrite)
	AActor* CurrentInteractableActor;
	
	
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


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UArrowComponent* AimArrow;
	/**velocità di corsa */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Speed")
	float JogSpeed = 600.f;
	/**velocità di passo */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Speed")
	float WalkSpeed = 147.f;

	
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float RotationSpeed = 5.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Possession")
	float FindCharacterToTargetReach = 2000.f;
	/**quanto ci mette in secondi a spostarsi dalla poszione che ha  ora ad appiccicato al possession point quando  possiede*/
	UPROPERTY(EditDefaultsOnly, Category = "Possession")
	float PossessTeleportTime = 3.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Possession")
	class UArrowComponent* PossessArrowTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float Health;

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* MCamera = nullptr;
	UPROPERTY(BlueprintReadWrite)
	bool StartPossessionAnim = false;
	UPROPERTY(BlueprintReadWrite)
	bool StartPossessedAnim = false;
	UPROPERTY(BlueprintReadWrite)
	TArray<AMostriciattolo5Character*> PawnsInView;
	UPROPERTY(BlueprintReadOnly)
	bool IsBeingPossessed = false;
	
	
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnDeath();
	UFUNCTION(BlueprintImplementableEvent)
	void AfterDepossessed(AMostriciattolo5Player* Possessor);
	UFUNCTION(BlueprintImplementableEvent)
	void AfterPossession(AMostriciattolo5Player* Possessor);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetTarget();
	UFUNCTION(BlueprintImplementableEvent)
	void BP_ResetTarget();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_HitEvent(FHitResult HitRes, APawn* AttackingPawn);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_TurnCameraToTarget();


	UFUNCTION(BlueprintCallable)
	void C_OnDeath();
	UFUNCTION(BlueprintCallable)
	void SetWeapon(AMWeapon* WeaponToSet);
	UFUNCTION(BlueprintCallable)
	void DropWeapon();
	UFUNCTION(BlueprintCallable)
	void RotatePlayerTowardsTarget(AActor* TargetActor);
	UFUNCTION(BlueprintCallable)
	void MakeBetterNoise(float LoudNess, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag, bool UseInstigatorLocation);
	UFUNCTION(BlueprintCallable)
	bool StartSelectFocusMode();
	UFUNCTION(BlueprintCallable)
	void EndSelectFocusMode();
	UFUNCTION(BlueprintCallable)
	bool GetCurrentWeapom(AMWeapon*& OUTWeapon);
	UFUNCTION(BlueprintCallable)
	void Depossess();
	UFUNCTION(BlueprintCallable)
	AMostriciattolo5Character* GetCurrentTarget();
	UFUNCTION(BlueprintCallable)
	void SetCurrenTarget(AMostriciattolo5Character* NewTarget);
	UFUNCTION(BlueprintCallable)
	bool GetIsUnderPossessAttack();
	UFUNCTION(BlueprintCallable)
	void SetIsUnderPossessAttack(bool IsUnderAttack);


	UFUNCTION(BlueprintPure)
	AMostriciattolo5Character* GetCurrentFocus();
	UFUNCTION(BlueprintPure)
	bool IsDead() const;
	UFUNCTION(BlueprintPure)
	AMWeapon* GetFist();
	UFUNCTION(BlueprintPure)
	bool GetIsAiming();

	class AMostriciattolo5GameMode* MGameMode;
	bool bIsAiming = false;


	
private:

	void InitWeapon();

	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float MaxHealth = 30.f;
	
	FVector MStartLocation;
	FVector MTargetLocation;
	float MStartTime;
	float CurrentTeleportTime = 0.f;
	float MInterpolationTime = 2.0f;
	bool CanTeleport = false;
	AMostriciattolo5Character* CurrentTarget = nullptr;
	
	AMostriciattolo5Character* SelectedPawn = nullptr;
	float SelectedPawnDistanceToCenter = 100000.f;
	
	float GetDistanceFromScreenCenter();
	float GetViewPOsition_X();
	AMostriciattolo5Character* CurrentFocus = nullptr;
	
	void SortFocusActors( );
	//popola e ordina l'array pawns in view
	void InitPawnsInViewArray();
	
	bool GetIsVisibleOnScreen(AMostriciattolo5Character* ActorToBeSeen);

	//void TurnCameraToTargetr();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMWeapon> FistClass;
	UPROPERTY()
	AMWeapon* MWeapon;
	UPROPERTY()
	AMWeapon* MFist;

	void SetFist();
	void SetNotPossessedDelayed();
	void ResetCanBeTarget();
	

	bool bIsUnderPossessAttack = false;
};

