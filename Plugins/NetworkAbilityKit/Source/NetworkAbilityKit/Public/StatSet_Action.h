// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatusSetBase.h"
#include "StatSet_Action.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API AStatSet_Action : public AStatusSetBase
{
	GENERATED_BODY()
	
public:
	AStatSet_Action();

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool Stun = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool Equipped = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InEquipping = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InLockMode = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InSprint = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InStopping = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InDodging = false;

	UPROPERTY(BlueprintReadWrite, Replicated, Category = "Status")
	bool InAttacking = false;
};
