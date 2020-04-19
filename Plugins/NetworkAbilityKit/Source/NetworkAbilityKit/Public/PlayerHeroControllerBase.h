// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerHeroControllerBase.generated.h"

class APlayerHeroBase;
class APawn;

/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API APlayerHeroControllerBase : public APlayerController
{
	GENERATED_BODY()
	
public:
	APlayerHeroControllerBase();

	UFUNCTION(BlueprintCallable, Category = "Player")
	void PlayerRefInitialization(APawn* PossessedPawn);

	UFUNCTION(Client, Reliable, WithValidation, Category = "Initialization")
	void CLIENT_PostLogin();

	UFUNCTION(BlueprintImplementableEvent, Category = "Initialization")
	void BP_CLIENT_PostLogin();

	UFUNCTION(Server, Reliable, WithValidation, Category = "Initialization")
	void SERVER_PostLogin();

	UFUNCTION(Client, Reliable, WithValidation, Category = "Initialization")
	void CLIENT_PostInitialization();

	UFUNCTION(BlueprintImplementableEvent, Category = "Initialization")
	void BP_CLIENT_PostInitialization();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Player")
	APlayerHeroBase* PlayerRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	FVector CursorPointDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	float CursorDistanceToPlayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	float CursorDistanceToPlayerNormalized;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Control")
	float MaxCursorDistanceOffset;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	FVector CursorPointVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Control")
	FVector CursorPointPosition;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Player")
	bool PlayerInitialized;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	//TSubclassOf<class UUserWidget> MainUMGWidget;

	//UUserWidget* MainUMGWidgetInstance;
	UFUNCTION(Category = "Control")
	void UpdateCursorInfo();

	UFUNCTION(Category = "Control")
	void UpdateControlRotation();

	UFUNCTION(Client, Reliable, Category = "Control")
	void UpdatePlayerCameraOffset();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* aPawn) override;

public:
	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupInputComponent() override;

public:
	void MoveUp(float AxisValue);
	void MoveRight(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void EssentialFrameworkInitialization(APawn* aPawn);

private:
	void HandlePlayerRefLost();

};
