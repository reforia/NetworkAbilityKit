// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AbilityFrameworkEnum.h"
#include "I_Modifier.generated.h"

class AModifierBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI, BlueprintType)
class UI_Modifier : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class NETWORKABILITYKIT_API II_Modifier
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnReceivedModifier(AModifierBase* Modifier, AActor* ModifierInstigator);

	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnTryRemoveModifier(FName ModifierName);

	UFUNCTION(BlueprintNativeEvent, Category = "Modifier Interface")
	void OnTryRemoveModifierByType(EModifierType ModifierType);
};
