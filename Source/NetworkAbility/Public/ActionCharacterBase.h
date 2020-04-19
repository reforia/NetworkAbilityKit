// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ActionCharacterBase.generated.h"

class USpringArmComponent;
class UCameraComponent;
//class UWidgetComponent;
//class UUserWidget;
class UAbilitySetComp;
class UAttributeComp;

UCLASS()
class NETWORKABILITY_API AActionCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AActionCharacterBase();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	APlayerController* BelongingController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	UCameraComponent* CamComp;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Component")
	UAbilitySetComp* AbilityComp;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Component")
	UAttributeComp* AttributeComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UFUNCTION(Category = "Initialization")
	void InitializePlayer();

	UFUNCTION(BlueprintImplementableEvent, Category = "Movement")
	void BP_MoveForward(float AxisValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "Movement")
	void BP_MoveRight(float AxisValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "Movement")
	void BP_LookUp(float AxisValue);

	UFUNCTION(BlueprintImplementableEvent, Category = "Movement")
	void BP_LookRight(float AxisValue);
protected:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

};
