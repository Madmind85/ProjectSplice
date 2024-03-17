// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class NPCStatus : uint8
{
	Morto = 0 UMETA(DisplayName = "Morto"),
	Fermo = 1  UMETA(DisplayName = "Fermo"),
	Tranquillo = 2 UMETA(DisplayName = "Tranquillo"),
	Minacciato = 3 UMETA(DisplayName = "Minacciato"),
	Attento = 4  UMETA(DisplayName = "Attento"),
	Minaccioso = 5 UMETA(DisplayName = "Minaccioso"),
	Aggressivo = 6   UMETA(DisplayName = "Aggressivo"),
	Inseguendo = 7  UMETA(DisplayName = "Inseguendo"),
	Abusivo = 8 UMETA(DisplayName = "Abusivo")

	
};

UENUM(BlueprintType)
enum class ActorFaction : uint8
{
	Neutrale = 0 UMETA(DisplayName = "Neutrale"),
	Compromesso = 1  UMETA(DisplayName = "Compromesso"),
	Nemico = 2 UMETA(DisplayName = "Nemico"),
	Abusivo = 3 UMETA(DisplayName = "Abusivo")
};

UENUM(BlueprintType)
enum class Obstacles : uint8
{
	Vaulting = 0 UMETA(DisplayName = "Vaulting"),
	Mantling = 1  UMETA(DisplayName = "Mantling"),
	Block = 2 UMETA(DisplayName = "Block"),
};