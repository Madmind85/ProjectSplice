// Copyright Epic Games, Inc. All Rights Reserved.IbDea

#include "Mostriciattolo5Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Public/Mostriciattolo5Player.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ValueOverTimeComponent.h"
#include "Components/ArrowComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "Mostriciattolo5/Interfaces/Int_Guardie.h"
#include "Weapons/MWeapon.h"
#include "Weapons/MWeapon.h"
#include "DrawDebugHelpers.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"

class AMWeapon;

//////////////////////////////////////////////////////////////////////////
// AMostriciattolo5Character

AMostriciattolo5Character::AMostriciattolo5Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	
	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	/* Create a camera boom(pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	*/

	AimArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("AimArrow"));
	AimArrow->SetupAttachment(GetMesh());

	PossessSocket = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PossessSocket"));
	PossessSocket->SetupAttachment(RootComponent);
	PossessSocket->ComponentTags.Add(FName("Possess"));

	PossessArrowTarget = CreateDefaultSubobject<UArrowComponent>(TEXT("PossessArrowTarget"));
	PossessArrowTarget->SetupAttachment(RootComponent);

	/*Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	*/
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)ù


}

void AMostriciattolo5Character::Attack(bool bAIShooting, AActor* AI_Target)
{
	if (IsDead()) { return; }

	if (MWeapon)
	{
		MWeapon->WeaponAttack(bAIShooting, AI_Target);
	}	
	else
	{
		//se non ha un arma attacca compunque con il pugno
		if (!MFist) { SetFist(); }
		MFist->WeaponAttack(bAIShooting, nullptr);
	}
}

void AMostriciattolo5Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetCurrentFocus())
	{
		bool bDead = IInt_MCharacter::Execute_Int_IsActorDead(GetCurrentFocus());
		//se non è piu visibile o è morto toglie il focus
		if (!GetIsVisibleOnScreen(GetCurrentFocus()) || bDead)
		{
			MClearFocus();
		}
	}

	if (GetCurrentFocus())
	{
		BP_TurnCameraToTarget();
	}
}

void AMostriciattolo5Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	Health = MaxHealth;

	//Setta i pugni
	if (!MFist) { SetFist(); }
	InitWeapon();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	//trova il game mode
	AGameModeBase* GM = GetWorld()->GetAuthGameMode();
	if (GM)
	{
		MGameMode = Cast<AMostriciattolo5GameMode>(GM);
	}
	//trova la value over time component
	ValueOverTimeComponent = FindComponentByClass<UValueOverTimeComponent>();
}

bool AMostriciattolo5Character::Int_IsPatroller_Implementation()
{
	return IsPatroller;
}

AMostriciattoloAIController* AMostriciattolo5Character::Int_GetAIController_Implementation()
{
	AMostriciattoloAIController* AICont = Cast<AMostriciattoloAIController>(GetController());
	return AICont;
}

void AMostriciattolo5Character::Int_PlayIdleAnim_Implementation()
{
}

UCapsuleComponent* AMostriciattolo5Character::GetPossessSocket()
{
	return PossessSocket;
}




ActorFaction AMostriciattolo5Character::Int_GetIsTarget_Implementation()
{
	if (CanBeTarget)
	{
		IsTarget = ActorFaction::Compromesso;
	}

	return IsTarget;
}

void AMostriciattolo5Character::SetIsAiming_Implementation(bool IsAiming)
{
}

void AMostriciattolo5Character::FindCharacterToTarget(float TMouseX)
{
	if (!GetCurrentFocus()) { return; }

	InitPawnsInViewArray();

	if (CurrentFocus && PawnsInView.Num() > 0) // Check if the array is not empty
	{
		int32 CurrentIndex = PawnsInView.Find(CurrentFocus);
		// If the index is not valid (i.e., it does not find it in the array), it should be there because it is set as the most central when we activate the select mode
		if (CurrentIndex == -1) {  return; };

		// Wants to select on the left
		if (TMouseX <= 0)
		{
			// If there is a valid pawn on the left, set it as target
			if (CurrentIndex > 0) // Check if there is a valid index on the left
			{
				AMostriciattolo5Character* NextF = PawnsInView[CurrentIndex - 1];
				if (NextF)
				{
					CurrentFocus->BP_ResetTarget();
					CurrentFocus = NextF;
					CurrentFocus->BP_SetTarget();

				}
			}
		}
		// Wants to select on the right
		if (TMouseX > 0)
		{
			// If there is a valid pawn on the right, set it as target
			if (PawnsInView.Num() > CurrentIndex + 1) // Check if there is a valid index on the right
			{
				AMostriciattolo5Character* NextF = PawnsInView[CurrentIndex + 1];
				if (NextF)
				{
					bool bDead = IInt_MCharacter::Execute_Int_IsActorDead(NextF);
					if (!bDead)
					{
						CurrentFocus->BP_ResetTarget();
						CurrentFocus = NextF;
						CurrentFocus->BP_SetTarget();
					}
				}
			}
		}
	}

}

void AMostriciattolo5Character::SetCurrentFocus(AMostriciattolo5Character* FocusToSet)
{
	CurrentFocus = FocusToSet;
}

bool AMostriciattolo5Character::Int_IsActorPossessed_Implementation()
{
	return IsBeingPossessed;
}

void AMostriciattolo5Character::SetRunning_Implementation(bool IsRunning)
{


}

AActor* AMostriciattolo5Character::Int_GetKillerActor_Implementation()
{
	return KillerActor;
}

void AMostriciattolo5Character::Int_ResetKillerActor_Implementation()
{
	KillerActor = nullptr;
}

void AMostriciattolo5Character::Int_SetFaction_Implementation(ActorFaction NewFaction)
{
	IsTarget = NewFaction;
}



void AMostriciattolo5Character::Int_AIAttack_Implementation(AAIController* AICon, AActor* Target)
{
	
}



bool AMostriciattolo5Character::Int_IsActorDead_Implementation()
{
	return IsDead();
}



void AMostriciattolo5Character::InitWeapon()
{
	if (MWeaponClass)
	{
		AMWeapon* WeapToSet = GetWorld()->SpawnActor<AMWeapon>(MWeaponClass);
		if (WeapToSet)
		{
			SetWeapon(WeapToSet);
		}
	}
}


bool AMostriciattolo5Character::StartSelectFocusMode()
{
	if (GetCurrentFocus())
	{
		MClearFocus();
		return false;
	}
	else
	{ 
		InitPawnsInViewArray();
		SelectedPawnDistanceToCenter = 100000.f;
		//Cerca il nemico più vicino al centro dello schhermo. 
		for (AMostriciattolo5Character* Pawn : PawnsInView)
		{
			float DistFromCent = Pawn->GetDistanceFromScreenCenter();
			
			//fabs =  valore assoluto float		
			if (SelectedPawnDistanceToCenter > DistFromCent)
			{
				//se già c e un focus lo resetta senno se ne vedono 2
				if (CurrentFocus) { CurrentFocus->BP_ResetTarget(); CurrentFocus = nullptr; }
				//setta il nemico più vicino al centro come focus
				CurrentFocus = Pawn;

				Pawn->BP_SetTarget();
				SelectedPawnDistanceToCenter = DistFromCent;
			}
		}
		if (CurrentFocus) 
		{
			
			CurrentFocus->BP_SetTarget();
			//debug perchè la funzione qua sotto mette a fuoco e queta no
			
		}

		return true;
	}
	
}

void  AMostriciattolo5Character::EndSelectFocusMode()
{
	TSelectModeOn = false;

	PawnsInView.Reset();
	SelectedPawnDistanceToCenter = 100000.f;
}

bool AMostriciattolo5Character::GetCurrentWeapom(AMWeapon*& OUTWeapon)
{
	if (MWeapon)
	{
		OUTWeapon = MWeapon;
			return true;
	}
	else return false;
}

AMWeapon* AMostriciattolo5Character::GetFist()
{
	if (!MFist) { SetFist(); }
	return MFist;
}

bool AMostriciattolo5Character::GetIsAiming()
{
	AMWeapon* CurrentW;
	if (GetCurrentWeapom(CurrentW))
	{
		return CurrentW->GetIsAiming();
	}
	else
	{
		return false;
	}
}



//////////////////////////////////////////////////////////////////////////
// Input

void AMostriciattolo5Character::OnTeleportFinished()
{
	
}

void AMostriciattolo5Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		//EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMostriciattolo5Character::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMostriciattolo5Character::Look);

	}

}

void AMostriciattolo5Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	
	if (Controller != nullptr)
	{
		
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		if (GetCurrentFocus())
		{
			 
			//RotatePlayerTowardsTarget(GetCurrentFocus()); //gia al tick
			AddMovementInput(GetActorForwardVector(), MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
			
		}
		else
		{
			
			// add movement 
			AddMovementInput(ForwardDirection, MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
		}
	}
}

void AMostriciattolo5Character::Look(const FInputActionValue& Value)
{
	if ( GetCurrentFocus()) { return; }
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}




void  AMostriciattolo5Character::Depossess()
{
	if (!IsSpammingDepossess)
	{
		if (MGameMode)
		{
			//trova il mostriciattolo salvato nel game mode
			AMostriciattolo5Player* player = MGameMode->Mostriciattolo_OS;
			if (!player) { return; }
			player->JumpOut();
			IsSpammingDepossess = true;
		}
	}
}

AMostriciattolo5Character* AMostriciattolo5Character::GetCurrentTarget()
{
	return CurrentTarget;
}

void AMostriciattolo5Character::SetCurrenTarget(AMostriciattolo5Character* NewTarget)
{
	CurrentTarget = NewTarget;
}

bool AMostriciattolo5Character::IsDead() const
{
	if (Health <= 0.f)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

void AMostriciattolo5Character::SetRootComp(USceneComponent* NewRoot)
{
	RootComponent = NewRoot;
}

void AMostriciattolo5Character::C_OnDeath()
{
	
	if (IsBeingPossessed)
	{
		Depossess();
	}
	AController* Cont = GetController();
	AMostriciattoloAIController* AICont = Cast<AMostriciattoloAIController>(Cont);
	if (AICont)
	{
		AICont->OnDeathController();
	}
	/*
	if (Cont->GetClass()->ImplementsInterface(UInt_Guardie::StaticClass()))
	{
		
		IInt_Guardie::Execute_Int_SetNPCDead(Cont);
	}
	*/
	
	BP_OnDeath();
}

void AMostriciattolo5Character::SetWeapon(AMWeapon* WeaponToSet)
{
	if (WeaponToSet )
	{
		if (MWeapon)
		{
			DropWeapon();
		}
		MWeapon = WeaponToSet;
		MWeapon->DeactivateInteractablePhysic();
		MWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("weapon_rSocket"));
		MWeapon->SetOwnerChar(this);
		MWeapon->SetIsAiming(false);
		MWeapon->BeingHeld = true;
	}
}
void AMostriciattolo5Character::SetFist()
{
		MFist = GetWorld()->SpawnActor<AMWeapon>(FistClass);
		if (MFist)
		{
			MFist->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("weapon_rSocket"));
			MFist->SetOwner(this);	
		}	
}
void AMostriciattolo5Character::DropWeapon()
{
	if (MWeapon)
	{
		MWeapon->ActivateInteractablePhysic();
		MWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		MWeapon->BeingHeld = false;
		MWeapon->SetOwnerChar(nullptr);
		MWeapon = nullptr;
	}
}

void AMostriciattolo5Character::RotatePlayerTowardsTarget(AActor* TargetActor)
{

}

void AMostriciattolo5Character::MakeBetterNoise(float LoudNess, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag, bool UseInstigatorLocation)
{
	FVector NoiseLoc;
	if (UseInstigatorLocation)
	{
		NoiseLoc = NoiseInstigator->GetActorLocation();
	}
	else
	{
		NoiseLoc = NoiseLocation;
	}
	

	MakeNoise(LoudNess, NoiseInstigator, NoiseLoc, MaxRange, Tag);
}

AMostriciattolo5Character* AMostriciattolo5Character::GetCurrentFocus()
{
	return CurrentFocus;
}

float AMostriciattolo5Character::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float DamageApplied = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	Health -= DamageApplied;
	if (Health < 0.f) { Health = 0.f; }
	
	
	AMostriciattolo5Character* Shooter = Cast<AMostriciattolo5Character>(EventInstigator->GetPawn());

	AMostriciattoloAIController* Contr = Cast<AMostriciattoloAIController>(GetController());

	if (IsDead())
	{	//se lo vedono sparare mentre oneshotta qualcuno diventi suscettibile a essere un target (se visto) per 2 secondi
		if (Shooter)
		{
			Shooter->CanBeTarget = true;
			FTimerHandle Timert;
			GetWorld()->GetTimerManager().SetTimer(Timert, Shooter, &AMostriciattolo5Character::ResetCanBeTarget, 2.f, false, 2.f);
		}

		if (Contr)
		{
			bool bDestructed = Contr->SelfDestruct();
		}

		KillerActor = EventInstigator->GetPawn();
	
		C_OnDeath();
		return DamageApplied;
	}
	else
	{ //se sopari a una guardia e rimane viva ti setta come compromesso
		if ( Shooter)
		{
			Shooter->IsTarget = ActorFaction::Compromesso;
		}	
	}
	
	//AMWeapon* MostMWeapon = Cast<AMWeapon>(DamageCauser);
	
	
	return DamageApplied;
}

bool AMostriciattolo5Character::SortActorDistance(AActor* Actor_A, AActor* Actor_B)
{
	
	return false;
}

void AMostriciattolo5Character::MClearFocus()
{
	if (GetCurrentFocus())
	{
		GetCurrentFocus()->BP_ResetTarget();
		CurrentFocus = nullptr;
	}
}

float AMostriciattolo5Character::GetDistanceFromScreenCenter()
{
	
	FVector WorldLocation = GetActorLocation();
	

	FVector2D ScreenPosition;
	UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(), WorldLocation, ScreenPosition);

	float ScreenWidth = GEngine->GameViewport->Viewport->GetSizeXY().X;
	float MiddleOfScreen = ScreenWidth / 2.0f;
	float DistanceFromMiddel = fabs(ScreenPosition.X - MiddleOfScreen);
	return DistanceFromMiddel;
}
float AMostriciattolo5Character::GetViewPOsition_X()
{
	FVector WorldLocation = GetActorLocation();


	FVector2D ScreenPosition;
	UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(), WorldLocation, ScreenPosition);
	
	return ScreenPosition.X;
}
void AMostriciattolo5Character::SetNotPossessedTimer()
{
	FTimerHandle TimerH;
	GetWorld()->GetTimerManager().SetTimer(TimerH,this, &AMostriciattolo5Character::SetNotPossessedDelayed, 1.5f, false, 1.5f);

}

void AMostriciattolo5Character::SetNotPossessedDelayed()
{
	IsBeingPossessed = false;
}

void AMostriciattolo5Character::ResetCanBeTarget()
{
	CanBeTarget = false;
}
/*void AMostriciattolo5Character::TurnCameraToTargetr()
{

	UCameraComponent* Camera = GetComponentByClass<UCameraComponent>();

	if (Camera && GetCurrentFocus())
	{
		AActor* TargetActor = GetCurrentFocus();
		// Get the location of the actor
		FVector TargetLocation = TargetActor->GetActorLocation();
		// Calculate the direction vector from the camera to the actor
		FVector Direction = TargetLocation - Camera->GetComponentLocation();

		// Create a rotation based on this direction
		FRotator NewRotation = Direction.Rotation();

		// Set the camera's rotation to this new rotation
		Camera->SetWorldRotation(NewRotation);
	}

}*/


void AMostriciattolo5Character::SortFocusActors()
{
	
	int32 NumActors = PawnsInView.Num();
	for (int32 i = 0; i < NumActors - 1; i++)
	{
		for (int32 j = 0; j < NumActors - i - 1; j++)
		{
			if (PawnsInView[j]->GetViewPOsition_X() > PawnsInView[j + 1]->GetViewPOsition_X())
			{
				// Swap Actors[j] and Actors[j + 1]
				AMostriciattolo5Character* Temp = PawnsInView[j];
				PawnsInView[j] = PawnsInView[j + 1];
				PawnsInView[j + 1] = Temp;
			}
		}
	}
	
}

void AMostriciattolo5Character::InitPawnsInViewArray()
{

	//pulisce l'array
	PawnsInView.Reset();
	//sweep trace per trovarer i nemici di fronte
	TArray<FHitResult> HitR;
	FVector Location;
	FRotator Rotation;
	GetController()->GetPlayerViewPoint(Location, Rotation);
	FVector Start = Location + Rotation.Vector() * 1500.f;
	FVector End = Location + Rotation.Vector()  * FindCharacterToTargetReach;
		
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	TArray<AActor*>ActorsToIgnore;

	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMostriciattolo5Character::StaticClass(), PawnsInView);
	UKismetSystemLibrary::SphereTraceMultiForObjects(this, Start, End, 1500.f, ObjectTypes, false, ActorsToIgnore, EDrawDebugTrace::None, HitR, true, FLinearColor::Red, FLinearColor::Green, 2.6f);

	//popola l'array Pawnsinview con gli attori mostriciattolo 
	for (const FHitResult& Hit : HitR)
	{
		AMostriciattolo5Character* Most = Cast<AMostriciattolo5Character>(Hit.GetActor());
		//se è un nemico ed è visibile
		if (Most)
		{
			if (GetIsVisibleOnScreen(Most))
			{
				PawnsInView.AddUnique(Most);
			}
			
		}
	}
	//ordina i pawn trovati con la sera dal piu' piccolo al pèiu grande
	SortFocusActors();
}




bool AMostriciattolo5Character::GetIsUnderPossessAttack()
{
	return bIsUnderPossessAttack;
}

void AMostriciattolo5Character::SetIsUnderPossessAttack(bool IsUnderAttack)
{
	bIsUnderPossessAttack = IsUnderAttack;
}

void AMostriciattolo5Character::RunAIBehaviorTree()
{
	AMostriciattoloAIController* MCont = Cast<AMostriciattoloAIController>(GetController());
	if (MCont)
	{
		MCont->RunAI_BehaviorTree();
	}
}

bool AMostriciattolo5Character::GetIsVisibleOnScreen(AMostriciattolo5Character* ActorToBeSeen)
{
	//forse da cambiare
	UCameraComponent* Camera = FindComponentByClass<UCameraComponent>();
		if (Camera)
		{
			FVector CameraLocation = Camera->GetComponentLocation();
			FRotator CameraRotation = Camera->GetComponentRotation();
			Controller->GetActorEyesViewPoint(CameraLocation, CameraRotation);
			return Controller->LineOfSightTo(ActorToBeSeen, CameraLocation, false);
		}
		
		return false;
}
