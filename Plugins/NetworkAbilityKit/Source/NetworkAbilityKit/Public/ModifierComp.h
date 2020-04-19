// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityFrameworkEnum.h"
#include "I_Modifier.h"
#include "ModifierComp.generated.h"

class AModifierBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class NETWORKABILITYKIT_API UModifierComp : public UActorComponent, public II_Modifier
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UModifierComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Modifier")
	TArray<AModifierBase*> ModifierList;

	UPROPERTY(BlueprintReadOnly, Category = "Modifier")
	TArray<EModifierType> ModifierBlockerTypeList;

	UPROPERTY(BlueprintReadOnly, Category = "Modifier")
	TArray<FName> ModifierBlockList;

protected:
	//UFUNCTION(Client, Reliable, WithValidation, Category = "Modifier")
	//void InitializeModifier();

	UFUNCTION(Category = "Modifier")
	bool ApplyModifierPrecheck(AModifierBase* InModifier);

	UFUNCTION(Server, Reliable, WithValidation, Category = "Modifier")
	void AddToLocalModifierList(AModifierBase* Modifier);

	UFUNCTION()
	bool BlockListCheck(AModifierBase* Modifier);

	UFUNCTION()
	bool BlockTypeCheck(AModifierBase* Modifier);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierBlocked(AModifierBase* BlockedModifier);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierAdded(AModifierBase* AddedModifier);

	UFUNCTION(Category = "Modifier")
	void OnModifierRemoved(AModifierBase* RemovedModifier);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierBlockListAdded(const TArray<FName>& NewBlockModifierNameList);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierBlockListRemoved(const TArray<FName>& NewBlockedModifierNameList);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierBlockTypeAdded(const TArray<EModifierType>& NewBlockedModifierTypeList);

	UFUNCTION(BlueprintImplementableEvent, Category = "Modifier")
	void OnModifierBlockTypeRemoved(const TArray<EModifierType>& NewBlockedModifierTypeList);

public:
	UFUNCTION()
	void RemoveFromLocalModifierList(AModifierBase* Modifier);

	UFUNCTION()
	void RemoveFromLocalModifierBlockList(TArray<FName> ModifierBlockListToRemove);

	UFUNCTION()
	void RemoveFromLocalModifierBlockTypeList(TArray<EModifierType> ModifierBlockTypeListToRemove);

	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnReceivedModifier(AModifierBase* Modifier, AActor* ModifierInstigator);
	virtual void OnReceivedModifier_Implementation(AModifierBase* Modifier, AActor* ModifierInstigator) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnTryRemoveModifier(FName ModifierName);
	virtual void OnTryRemoveModifier_Implementation(FName ModifierName) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnTryRemoveModifierByType(EModifierType ModifierType);
	virtual void OnTryRemoveModifierByType_Implementation(EModifierType ModifierType) override;
};
