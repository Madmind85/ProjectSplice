// Copyright Epic Games, Inc. All Rights Reserved.

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
#include "DrawDebugHelpers.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"


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
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AMostriciattolo5Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetCurrentFocus())
	{//se non è piu visibile toglie il focus
		if (!GetIsVisibleOnScreen(GetCurrentFocus()))
		{
			MClearFocus();
		}
	}

	if (CanTeleport) 
	{
		MoveActorSmoothly(DeltaSeconds);
	}

	if (GetCurrentFocus())
	{
		BP_TurnCameraToTarget();
	}

}

void AMostriciattolo5Character::StartTeleporting(FVector Start, FVector End, float Time)
{
	MStartLocation = Start;
	MTargetLocation = End;
	MStartTime = GetWorld()->GetTimeSeconds();
	// Adjust MInterpolationTime based on the desired Time and frame time
	//float FrameTime = 1.0f / GetWorld()->GetDeltaSeconds();
	//MInterpolationTime = Time * FrameTime;
	MInterpolationTime = Time;
	CanTeleport = true;
	
}
UCapsuleComponent* AMostriciattolo5Character::GetPossessSocket()
{
	return PossessSocket;
}
void AMostriciattolo5Character::StartTeleportingWithSpeed(FVector Start, FVector End, float Speed)
{
	MStartLocation = Start;
	MTargetLocation = End;
	MStartTime = GetWorld()->GetTimeSeconds();
	MInterpolationTime = FVector::Distance(Start, End) / Speed;
	CanTeleport = true;
}

void AMostriciattolo5Character::FindCharacterToTarget(float TMouseX)
{
	if (!GetCurrentFocus()) { return; }

	InitPawnsInViewArray();

	if (CurrentFocus && PawnsInView.Num() > 0) // Check if the array is not empty
	{
		int32 CurrentIndex = PawnsInView.Find(CurrentFocus);
		// If the index is not valid (i.e., it does not find it in the array), it should be there because it is set as the most central when we activate the select mode
		if (CurrentIndex == -1) {  UE_LOG(LogTemp, Warning, TEXT("Gesucristo")) return; };

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
			if (PawnsInView.Num() > CurrentIndex+1) // Check if there is a valid index on the right
			{
				AMostriciattolo5Character* NextF = PawnsInView[CurrentIndex + 1];
				if (NextF)
				{
					CurrentFocus->BP_ResetTarget();
					CurrentFocus = NextF;
					CurrentFocus->BP_SetTarget();
					
				}
			}
		}
}



		










		/*
		PawnsInView;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMostriciattolo5Character::StaticClass(), PawnsInView);
	
		TArray<AMostriciattolo5Character*> EnemyPawns;
	
		for (AActor* Pawn : PawnsInView)
		{
		
			AMostriciattolo5Character* Enemy = Cast<AMostriciattolo5Character>(Pawn);
			float MiddleOfScreen;
			
		
			if (Enemy && CurrentFocus)
			{ 
				float DistFromCent = GetDistanceFromScreenCenter(Enemy, MiddleOfScreen);
				float FDistFromCent = GetDistanceFromScreenCenter(CurrentFocus, MiddleOfScreen);

				//se il mouse xe negativo sta andando a sinistra
				if (TMouseX <= 0.f)
				{	
				}
				//Cerca il nemico più vicino allo schhermo
				//spostare su selectmode on
				/*
				if (SelectedPawnDistanceToCenter > fabs(DistFromCent))
				{
					SelectedPawn = Enemy;
				}
				SelectedPawnDistanceToCenter = DistFromCent;
				

				//minore è DistfromCent più a sinistra stanno
			
			}
			
		}
		return nullptr;
	
	
		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End , ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);

		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End+FVector(0.f,0.f,400.f), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);

		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End + FVector(0.f, 0.f, -400.f), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);
		
		//bHit = UKismetSystemLibrary::BoxTraceSingle(this, Start, End, FVector(50.f,50.f,200.f), SelectTargetArrow->GetComponentRotation(), ETraceTypeQuery::TraceTypeQuery_MAX, false, ActorsToIgnore,
			//EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Blue, FLinearColor::Yellow, 0.4f);

		//bHit = GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), Params);
		//bHit = GetWorld()->SweepSingleByObjectType(Hit, Start, End, Rotation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), CollisionShape, Params);
		//DrawDebugLine(GetWorld(), Start, End, FColor::Yellow, false, 0.5f);

	/*
	
	if (!SelectTargetArrow) {  UE_LOG(LogTemp, Warning, TEXT("BADA non è settata la SelectTargetArrow in mostriciattolo5character->fidcharactertotarget ")) return nullptr; }

		FHitResult Hit;
		
		FVector Start = SelectTargetArrow->GetComponentLocation();
		FVector End = SelectTargetArrow->GetComponentLocation() + SelectTargetArrow->GetForwardVector()* FindCharacterToTargetReach;
		//casino per trasformare la rotazione della camera in FQuat
		FVector CameraRotation = SelectTargetArrow->GetComponentRotation().Vector();
		FQuat Rotation = FQuat::MakeFromEuler(CameraRotation);

		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);
		FCollisionShape CollisionShape;
		FCollisionQueryParams Params;
		// Imposta la forma del volume di collisione	
		CollisionShape.MakeCapsule(TargetBoxShape);
		TArray<AActor*> ActorsToIgnore;
		bool bHit;

		for (float EndM : LineTraceTargetEnd)
		{
			bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End + FVector(0.f, 0.f, EndM), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);
			if (bHit)
			{
				AActor* HitActor = Hit.GetActor();

				if (HitActor && HitActor != this)
				{
					AMostriciattolo5Character* HitChar = Cast<AMostriciattolo5Character>(HitActor);
					if (HitChar)
					{
						SetCurrenTarget(HitChar);

						BP_SetTarget();
						return HitChar;
					}
					
				}
			}
		}
		
		 return nullptr; 
		 */
}

void AMostriciattolo5Character::SetCurrentFocus(AMostriciattolo5Character* FocusToSet)
{
	CurrentFocus = FocusToSet;
}

void AMostriciattolo5Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

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
}

bool AMostriciattolo5Character::HasLostTarget()
{
	float NoSeeTime = TargetLastSeen + LooseTargetTime;
	if (GetWorld()->GetTimeSeconds() >= NoSeeTime)
	{
		return true;
	}
	else 
	{ 
		return false; 
	}	
}

bool AMostriciattolo5Character::IsNotTarget()
{
	float NoSeeTime = TargetLastSeen + NotTargetTime;
	if (GetWorld()->GetTimeSeconds() >= NoSeeTime)
	{
		return true;
	}
	else
	{
		return false;
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

void AMostriciattolo5Character::MoveActorSmoothly(float DeltaS)
{
	// Calculate the interpolation factor based on the elapsed time
	CurrentTeleportTime += DeltaS;
	float LerpAlpha = FMath::Clamp(CurrentTeleportTime / MInterpolationTime, 0.0f, 1.0f);

	// Perform the interpolation
	FVector NewLocation = FMath::Lerp(MStartLocation, MTargetLocation, LerpAlpha);

	// Set the actor's new location
	SetActorLocation(NewLocation);
	
	// Check if the interpolation is complete
	if (LerpAlpha >= 1.f)
	{
		CurrentTeleportTime = 0.f;
		MStartTime = 0.f;
		CanTeleport = false;	
		OnTeleportFinished();
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
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMostriciattolo5Character::Move);

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
			RotatePlayerTowardsTarget();
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
	if (MGameMode)
	{ 
		//trova il mostriciattolo salvato nel game mode
		AMostriciattolo5Player* player = MGameMode->Mostriciattolo_OS;
		if (!player) { return; }
		player->JumpOut();
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

void AMostriciattolo5Character::RotatePlayerTowardsTarget()
{
	FVector TargetLocation = GetCurrentFocus()->GetActorLocation();
	FVector PlayerLocation = GetActorLocation();
	FVector Direction = TargetLocation - PlayerLocation;
	FRotator NewRotation = Direction.Rotation();
	FRotator CurrentRotation = GetActorRotation();
	FRotator InterpolatedRotation = FMath::RInterpTo(CurrentRotation, NewRotation, GetWorld()->GetDeltaSeconds(), RotationSpeed);
	SetActorRotation(InterpolatedRotation, ETeleportType::None);
	/*
	if (MCamera)
	{
		FHitResult Hit;
		MCamera->SetWorldRotation(InterpolatedRotation, false, Hit, ETeleportType::None);
	}
	*/
}

AMostriciattolo5Character* AMostriciattolo5Character::GetCurrentFocus()
{
	return CurrentFocus;
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

void AMostriciattolo5Character::TurnCameraToTargetr()
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
}

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
	/*
	// Separate actors into negative and positive arrays
	for (AMostriciattolo5Character* actor : PawnsInView)
		{
			
			if (actor->GetDistanceFromScreenCenter() < 0) 
			{
				OUTNegativeActors.Add(actor);
			}
			else 
			{
				OUTPositiveActors.Add(actor);
			}
		}

		// Sort negative actors from closest to 0 to lower value
		int32 NumNegativeActors = OUTNegativeActors.Num();
		for (int32 i = 0; i < NumNegativeActors - 1; i++) 
		{
			for (int32 j = 0; j < NumNegativeActors - i - 1; j++) 
			{
				if (OUTNegativeActors[j]->GetDistanceFromScreenCenter() < OUTNegativeActors[j + 1]->GetDistanceFromScreenCenter())
				{
					AMostriciattolo5Character* Temp = OUTNegativeActors[j];
					OUTNegativeActors[j] = OUTNegativeActors[j + 1];
					OUTNegativeActors[j + 1] = Temp;
				}
			}
		}

		// Sort positive actors from smallest to bigger
		int32 NumPositiveActors = OUTPositiveActors.Num();
		for (int32 i = 0; i < NumPositiveActors - 1; i++) 
		{
			for (int32 j = 0; j < NumPositiveActors - i - 1; j++) 
			{
				if (OUTPositiveActors[j]->GetDistanceFromScreenCenter() > OUTPositiveActors[j + 1]->GetDistanceFromScreenCenter())
				{
					AMostriciattolo5Character* Temp = OUTPositiveActors[j];
					OUTPositiveActors[j] = OUTPositiveActors[j + 1];
					OUTPositiveActors[j + 1] = Temp;
				}
			}
		}
	*/

		
}

void AMostriciattolo5Character::InitPawnsInViewArray()
{
	//pulisce l'array
	PawnsInView.Reset();
	//sweep trace per trovarer i nemici di fronte
	TArray<FHitResult> HitR;
	FVector Start = SelectTargetArrow->GetComponentLocation();
	FVector End = SelectTargetArrow->GetComponentLocation() + SelectTargetArrow->GetForwardVector() * FindCharacterToTargetReach;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	TArray<AActor*>ActorsToIgnore;

	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMostriciattolo5Character::StaticClass(), PawnsInView);
	UKismetSystemLibrary::SphereTraceMultiForObjects(this, Start, End, 2000.f, ObjectTypes, false, ActorsToIgnore, EDrawDebugTrace::None, HitR, true, FLinearColor::Red, FLinearColor::Green, 0.3f);

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


bool AMostriciattolo5Character::CheckInnerSightAngle(AMostriciattolo5Character* CharacterInSight, float PS_SightRadius)
{
	if (!CharacterInSight) 
	{
		UE_LOG(LogTemp, Warning, TEXT("mostriciattolo character 5 check inner sight angle BADA no character in sight")) 
		return false;
	}

	//roba suggerita da Chatgpt che con qualche calcolo di cui non capisco nulla vede se CharacterInSight è all'interno dell'anmgolo InnerConeDegrees
	FVector DirectionVector = GetActorLocation() - CharacterInSight->GetActorLocation();
	DirectionVector.Normalize();
	double DProduct = FVector::DotProduct(GetActorForwardVector(), DirectionVector);
	double AngleInRadians = FMath::Acos(FMath::Abs(DProduct));
	double AngleInDegrees = AngleInRadians * (180.0 / UE_PI);
	//calcola la lunghezza del cono interno in  base alla percentuaòe(innerConeLength) della lunghezza di vista totale(GetPS_SightRadius())
	float InnerConeStraightLength = (InnerConeLength / 100) * PS_SightRadius;
	float DistanceFromActor = FVector::Distance(GetActorLocation(), CharacterInSight->GetActorLocation());

	UE_LOG(LogTemp, Warning, TEXT("Mostriciattolo Character 5 - Check Inner Sight Angle: DProduct = %f, AngleInRadians = %f"), DProduct, AngleInRadians)

	if (AngleInDegrees <= InnerConeDegrees && DistanceFromActor < InnerConeStraightLength)
	{
		return true;
	}
	else
	{
		return false;
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
	/*
	UWorld* World = GetWorld();
	
	if (World && ActorToBeSeen)
	{
		// Start and end locations
		FVector StartLocation = ActorToBeSeen->GetActorLocation();
		FVector EndLocation = ActorToBeSeen->GetActorLocation() + FVector(0.f,0.f,40.f);
		FVector EndLocation2 = ActorToBeSeen->GetActorLocation() + FVector(0.f, 0.f, -20.f);

		// Convert the actor's world location to screen location
		FVector2D ScreenLocation;
		UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(), StartLocation, ScreenLocation);

		// Convert the screen location back to a world location
		FVector WorldLocation;
		FVector WorldDirection;
		GetWorld()->GetFirstPlayerController()->DeprojectScreenPositionToWorld(ScreenLocation.X, ScreenLocation.Y, WorldLocation, WorldDirection);

		// Create a hit result
		FHitResult HitResult;
		FHitResult HitResult2;
		// Collision parameters
		FCollisionQueryParams CollisionParams;

		// Perform the line trace
		bool bHit = World->LineTraceSingleByChannel(HitResult, WorldLocation, EndLocation, ECC_Visibility, CollisionParams);
		if (bHit)
		{
			DrawDebugLine(World, WorldLocation, EndLocation, FColor::Red, true, 1.f, 5.f);
			AMostriciattolo5Character* Most = Cast<AMostriciattolo5Character>(HitResult.GetActor());
			if (Most)
			{
			
				if (Most == ActorToBeSeen) { return true; }
			}
		}
		bool bHit2 = World->LineTraceSingleByChannel(HitResult2, WorldLocation, EndLocation2, ECC_Visibility, CollisionParams);
		if (bHit2)
		{
			DrawDebugLine(World, WorldLocation, EndLocation2, FColor::Red, true, 1.f, 5.f);
			AMostriciattolo5Character* Most2 = Cast<AMostriciattolo5Character>(HitResult2.GetActor());
			if (Most2)
			{
				
				if (Most2 == ActorToBeSeen) { return true; }
			}
		}
	 UE_LOG(LogTemp, Warning, TEXT("porcoddio 2")) 	return false;
	}
	else
	{
		 UE_LOG(LogTemp, Warning, TEXT("porcoddio 3")) return false;
	}
	*/
}