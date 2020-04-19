// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "PlayerHeroBase.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UWidgetComponent;
class UUserWidget;
class UAbilitySetComp;
class UAttributeComp;

UCLASS()
class NETWORKABILITYKIT_API APlayerHeroBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerHeroBase();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	APlayerController* BelongingController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* CamComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "UI")
	UWidgetComponent* StatsHUD;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Camera")
	float MaxCameraOffsetRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<class UUserWidget> StatsHUDWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	FText HeroName;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Component")
	UAbilitySetComp* AbilityComp;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Component")
	UAttributeComp* AttributeComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void InitializeCameraYaw();

	virtual void PossessedBy(AController* NewController) override;

public:	
	UFUNCTION(Category = "Initialization")
	void InitializePlayer();

	UFUNCTION(Category = "Camera")
	void UpdateCameraOffset(FVector CursorDirectionNormalized, float DistanceProportion);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser) override;



};
