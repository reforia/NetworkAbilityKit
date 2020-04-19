// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPF_Modifier.generated.h"

class AModifierBase;

/**
 * 
 */
UCLASS(Blueprintable)
class NETWORKABILITYKIT_API UBPF_Modifier : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Modifier")
	static bool TryApplyModifierToTarget(TSubclassOf<class AModifierBase> ModifierClass, AActor* Target, AActor* ModifierInstigator);

	UFUNCTION(BlueprintCallable, Category = "Modifier")
	static bool TryRemoveModifierFromTarget(FName ModifierName, AActor* Target);

	UFUNCTION(BlueprintCallable, Category = "Modifier")
	static bool TryRemoveModifierByTypeFromTarget(EModifierType ModifierType, AActor* Target);

};
