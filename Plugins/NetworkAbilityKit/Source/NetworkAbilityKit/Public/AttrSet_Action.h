// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSetBase.h"
#include "AttrSet_Action.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDeathDelegate);

UCLASS()
class NETWORKABILITYKIT_API AAttrSet_Action : public AAttributeSetBase
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	AAttrSet_Action();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_HealthChanged, Category = "Stats")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealthChanged, Category = "Stats")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_StaminaChanged, Category = "Stats")
	float Stamina;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxStaminaChanged, Category = "Stats")
	float MaxStamina;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_HealthChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_MaxHealthChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_StaminaChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_MaxStaminaChanged();

	UPROPERTY(BlueprintAssignable)
	FOnPlayerDeathDelegate OnDeathDelegate;

#if WITH_EDITOR  
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
#endif

};
