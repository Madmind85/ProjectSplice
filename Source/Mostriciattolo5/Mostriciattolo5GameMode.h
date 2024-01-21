// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Mostriciattolo5GameMode.generated.h"





UCLASS(minimalapi)
class AMostriciattolo5GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMostriciattolo5GameMode();

	UPROPERTY(BlueprintReadWrite)
	class AMostriciattolo5Player* Mostriciattolo_OS = nullptr;


    // Function to give control to the player
    UFUNCTION(BlueprintCallable, Category = "Game")
    void ControllNPC(class AMostriciattolo5Character* CharacterToControll);

    // Function to return control to AI
    UFUNCTION(BlueprintCallable, Category = "Game")
    void ReturnControlToAI();
    UFUNCTION(BlueprintImplementableEvent)
    void BP_StartStopChaseSound(bool bStart);
    UFUNCTION(BlueprintImplementableEvent)
    void BP_VoiceFXSelect(FName VoiceName, FVector VoiceLocation);
    

private:
    AController* LastAIController;
    class AMostriciattolo5Character* LastPossessed;

};



