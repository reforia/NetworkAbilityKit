// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AbilityFrameworkEnum.h"
#include "AbilityFrameworkStruct.h"
#include "AbilityBase.generated.h"

class AAbilitySetBase;
class UAttributeComp;
class AAttributeSetBase;
class UAnimMontage;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndAbilityDelegate);

UCLASS()
class NETWORKABILITYKIT_API AAbilityBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAbilityBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AActor* BelongingActor;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AAbilitySetBase* BelongingAbilitySet;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AController* BelongingController;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	UAttributeComp* PairAttrComp;

	UPROPERTY(BlueprintReadOnly, Category = "Parent")
	AAttributeSetBase* PairAttrSet;

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Availability")
	bool bDisabledByModifier = false;

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Availability")
	bool bCanActivate = true;

	UPROPERTY(Replicated, BlueprintReadWrite, Category = "Availability")
	bool bInCoolDown = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	TArray<FCostStruct> AbilityCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	UAnimMontage* AbilityMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	EAbilityType AbilityType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	bool bIsHiddenInUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	UTexture2D* AbilityUI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability Property")
	float CoolDown;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Ability Property")
	float RemainingCoolDown = 0.0f;

private:
	FTimerHandle AbilityTickHandle;

	FTimerHandle AbilityCoolDownHandle;

public:
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Ability")
	void TryActivate();

	UPROPERTY(BlueprintAssignable, Category = "Ability")
	FEndAbilityDelegate OnAbilityEndDelegate;

	UPROPERTY(BlueprintReadOnly, Category = "Point Ability")
	FVector PointAbility_MousePositionInWorld = FVector(0.0f, 0.0f, -9999999.9f);

	UPROPERTY(BlueprintReadOnly, Category = "Point Ability")
	FVector PointAbility_MouseVectorInWorld = FVector(0.0f, 0.0f, -9999999.9f);

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnActivated();
	
	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnNotAvailableYet(EAbilityNotValidType AbilityNotValidType);

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnTakeEffectNotifyActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnIntervalThink();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnCoolDownFinished();

	UFUNCTION(BlueprintImplementableEvent, Category = "Ability")
	void OnAbilityPreEnd();

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void StartIntervalThink(float DeltaTime = 0.1f);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Ability")
	void StartCoolDown();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Ability")
	void EndAbility();

	UFUNCTION(Server, Reliable, WithValidation)
	void CommitAbility();

	UFUNCTION(Client, Reliable, WithValidation)
	void GetPointAbilityMousePositionInWorldAndTryCommit();

	UFUNCTION(Server, Reliable, WithValidation)
	void SERVER_AbilityPointCoreLogic();

	//UFUNCTION(BlueprintPure, Category = "Ability")
	//FVector GetPointAbilityMousePositionInWorld();

	UFUNCTION(BlueprintPure, Category = "Ability")
	bool MouseLocationAvailabilityCheck(FVector MouseLocation);

	UFUNCTION()
	bool ActivatePrecheck();

	UFUNCTION()
	bool CostPrecheck();

	UFUNCTION()
	void CoolDownCycleTick();

	UFUNCTION(Server, Reliable, WithValidation)
	void ApplyCost();

	UFUNCTION()
	void OnAbilityReadyToEnd();

	UFUNCTION()
	void AbilityNoTarget();

	UFUNCTION()
	void AbilityPoint();

	UFUNCTION()
	void AbilityTarget();

	UFUNCTION()
	void AbilityPassive();
};
