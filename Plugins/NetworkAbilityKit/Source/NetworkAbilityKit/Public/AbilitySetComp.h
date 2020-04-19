// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySetComp.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFinishedInitializeAbilitySetDelegate);

UCLASS( Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NETWORKABILITYKIT_API UAbilitySetComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAbilitySetComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UFUNCTION(Server, Reliable, WithValidation,Category = "Initialization")
	void InitializeAbilitySet();

	//UFUNCTION(Server, Reliable, WithValidation, Category = "Initialization")
	//void SERVER_BroadcastFinishedInitializationEvent();

	UFUNCTION(Client, Reliable, WithValidation, Category = "Initialization")
	void CLIENT_BroadcastFinishedInitializationEvent();

public:
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AActor* BelongingActor;

	UPROPERTY(EditDefaultsOnly,Category = "AbilitySet")
	TSubclassOf<class AAbilitySetBase> AbilitySet;

	UPROPERTY(BlueprintAssignable, Category = "Ability")
	FFinishedInitializeAbilitySetDelegate OnInitializationFinishedDelegate;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Ability")
	AAbilitySetBase* AbilitySetObject;

};
