// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GM_Arena.generated.h"

class APlayerStart;
/**
 * 
 */
//UENUM(BlueprintType)
//enum class EGameModeState : uint8
//{
//	GMS_MainMenu			UMETA(DisplayName = "InMainMenu"),
//	GMS_InLobby				UMETA(DisplayName = "InLobby"),
//	GMS_PreGame 			UMETA(DisplayName = "OnPreGame"),
//	GMS_GameInProgress 		UMETA(DisplayName = "GameInProgress"),
//	GMS_PostGame 			UMETA(DisplayName = "OnPostGame"),
//	GMS_EndGame 			UMETA(DisplayName = "OnEndGame")
//};

UCLASS()
class NETWORKABILITYKIT_API AGM_Arena : public AGameMode
{
	GENERATED_BODY()

protected:

	virtual void PostLogin(APlayerController* NewPlayer) override;

	void AssignTeamNumber();

public:
	TArray<APlayerStart*> Player1;
	TArray<APlayerStart*> Player2;

	UFUNCTION(Server, Reliable, WithValidation, Category = "Spawn Player")
	void SERVER_SpawnPlayer(APlayerController* PlayerController);

	//UPROPERTY(BlueprintReadOnly, Category = "Gamemode State")
	//EGameModeState GameModeState = EGameModeState::GMS_MainMenu;

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnMainMenu();

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnInLobby();

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnPreGame();

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnGameInProgress();

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnPostGame();

	//UFUNCTION(BlueprintNativeEvent, Category = "GameMode State")
	//void GMS_OnEndGame();

	//UFUNCTION(BlueprintCallable, Category = "GameMode State")
	//void SetGameModeState(EGameModeState NewState);

};
