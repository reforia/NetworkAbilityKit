// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatusSetBase.h"
#include "StatSet_Default.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API AStatSet_Default : public AStatusSetBase
{
	GENERATED_BODY()
	
public:
	AStatSet_Default();

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Status")
	bool Stun = false;

	UPROPERTY(BlueprintReadOnly, Replicated, Category = "Status")
	bool Silence = false;
};
