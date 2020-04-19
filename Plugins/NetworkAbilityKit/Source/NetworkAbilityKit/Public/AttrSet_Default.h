// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSetBase.h"
#include "AttrSet_Default.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathDelegate);
/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API AAttrSet_Default : public AAttributeSetBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAttrSet_Default();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_HealthChanged, Category = "Stats")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealthChanged, Category = "Stats")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_ManaChanged, Category = "Stats")
	float Mana;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxManaChanged, Category = "Stats")
	float MaxMana;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_HealthChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_MaxHealthChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_ManaChanged();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void OnRep_MaxManaChanged();

	UPROPERTY(BlueprintAssignable)
	FOnDeathDelegate OnDeathDelegate;

#if WITH_EDITOR  
	virtual void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent);
#endif
};
