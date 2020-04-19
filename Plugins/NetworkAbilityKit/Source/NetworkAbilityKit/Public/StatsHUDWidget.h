// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatsHUDWidget.generated.h"

class APawn;
class UAttributeComp;

/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API UStatsHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "OwningPlayer")
	APawn* PlayerRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "OwningPlayer")
	UAttributeComp* AttriComp;
};
