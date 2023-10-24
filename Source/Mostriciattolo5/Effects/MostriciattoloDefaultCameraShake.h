// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DefaultCameraShakeBase.h"
#include "MostriciattoloDefaultCameraShake.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API UMostriciattoloDefaultCameraShake : public UDefaultCameraShakeBase
{
	GENERATED_BODY()
public:
	void InitCameraValues(FName CameraShakeName);
};
