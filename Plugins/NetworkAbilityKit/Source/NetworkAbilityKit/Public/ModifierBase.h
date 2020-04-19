// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityFrameworkEnum.h"
#include "Net/UnrealNetwork.h"
#include "ModifierBase.generated.h"

class UModifierComp;

UCLASS()
class NETWORKABILITYKIT_API AModifierBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModifierBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	FName Name;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	bool bShowUI = true;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	FText UIDisplayName;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	UTexture2D* UITexture;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	FText UIDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	float ModifierDuration;

	UPROPERTY(ReplicatedUsing = OnRep_OnStackChanged, EditAnywhere, BlueprintReadWrite, Category = "Modifier")
	uint8 ModifierStack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	uint8 MaxStack;

	UPROPERTY(ReplicatedUsing = OnRep_OnModifierActivateChanged, BlueprintReadOnly, Category = "Modifier")
	bool ModifierIsActive = false;

	UPROPERTY(BlueprintReadOnly, Category = "Modifier")
	float RemainingTimeBeforeExpire = 0.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Modifier")
	UModifierComp* BelongingModComp;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	EModifierType ModifierType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	TArray<FName> ModifierBlockList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	TArray<EModifierType> ModifierBlockTypeList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	bool bForceIgnoreBlockList;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	bool bForceIgnoreBlockType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Modifier")
	bool bForceIgnoreMannualRemoval;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Modifier")
	AActor* ModifierInstigator;

protected:
	UFUNCTION(Category = "Modifier")
	void LifeCycleHandler();

	UFUNCTION(Server, Reliable, WithValidation, Category = "Modifier")
	void SetModifierActivation(bool NewActivate);

	UFUNCTION()
	virtual void OnRep_OnStackChanged();

	UFUNCTION()
	virtual void OnRep_OnModifierActivateChanged();

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnIntervalThink();

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnPreExpired();

	UFUNCTION()
	void OnReadyToExpire();

	UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation, Category = "Modifier")
	void StartIntervalThink(float DeltaTick);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void BP_OnApplied();

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void BP_OnReapplied();

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void BP_OnBlocked();

	UFUNCTION()
	void ModifierDurationCycleTick();

public:
	UFUNCTION(Category = "Modifier")
	void OnApplied();

	UFUNCTION(Category = "Modifier")
	void OnReapplied(uint8 NewStack);

	UFUNCTION(Category = "Modifier")
	void OnBlocked();

	UFUNCTION()
	void OnModifierPendingExpire();


	UFUNCTION(Server, Reliable, WithValidation, Category = "Modifier")
	void AddStack(int8 NewStack);


private:
	FTimerHandle ModifierLifeCycleTickTimerHandle;

	FTimerHandle IntervalThinkTimerHandle;
};
