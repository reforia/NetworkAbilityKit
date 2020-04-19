// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityFrameworkStruct.h"
#include "DT_AbilitySetBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class NETWORKABILITYKIT_API UDT_AbilitySetBase : public UDataTable
{
	GENERATED_BODY()

	UDT_AbilitySetBase();

	UPROPERTY()
	FAbilityListStruct AbilityListDataStruct;
};
