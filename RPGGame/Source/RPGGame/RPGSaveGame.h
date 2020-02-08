// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "RPGSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStats
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	float Health;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	float Stamina;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	float MaxStamina;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	int32 Coins;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = "SavedGameData")
	FRotator Rotation;
};

/**
 * 
 */
UCLASS()
class RPGGAME_API URPGSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	URPGSaveGame();

	UPROPERTY(VisibleAnywhere, Category = "Basic")
	FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category = "Basic")
	uint32 UserIndex;

	UPROPERTY(VisibleAnywhere, Category = "Basic")
	FCharacterStats CharacterStats;
};
