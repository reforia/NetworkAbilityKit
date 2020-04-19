// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityBase.h"
#include "Net/UnrealNetwork.h"
#include "AbilityFrameworkStruct.h"
#include "AbilitySetBase.generated.h"


UCLASS()
class NETWORKABILITYKIT_API AAbilitySetBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAbilitySetBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Ability")
	TMap<FName, TSubclassOf<class AAbilityBase>> AbilityClasses;

	UPROPERTY(BlueprintReadOnly, Category = "Ability")
	AActor* BelongingActor;

	UFUNCTION(Client, Reliable, WithValidation, Category = "Initialization")
	void InitializeAbilities();

	UPROPERTY(BlueprintReadOnly, Category = "Ability")
	TMap<FName, AAbilityBase*> AbilityList;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Ability")
	TArray<AAbilityBase*> AbilityArray;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Ability")
	TArray<FAbilityListStruct> AbilityObjectsDict;
};
