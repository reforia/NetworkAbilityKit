// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameModeBase.generated.h"

class APlayerStart;
/**
 * 
 */
UCLASS()
class NETWORKABILITY_API AMyGameModeBase : public AGameMode
{
	GENERATED_BODY()

protected:

	virtual void PostLogin(APlayerController* NewPlayer) override;

	// void AssignTeamNumber();

public:
	TArray<APlayerStart*> Team1;
	//TArray<APlayerStart*> Player2;

	UFUNCTION(Server, Reliable, WithValidation, Category = "Spawn Player")
	void SERVER_SpawnPlayer(APlayerController* PlayerController);
};