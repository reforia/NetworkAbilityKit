// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PS_Arena.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKABILITYKIT_API APS_Arena : public APlayerState
{
	GENERATED_BODY()
	
public:
	int PlayerNumber = 0;
};
