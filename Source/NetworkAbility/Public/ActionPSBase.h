// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ActionPSBase.generated.h"

/**
 * 
 */
UCLASS()
class NETWORKABILITY_API AActionPSBase : public APlayerState
{
	GENERATED_BODY()
	
public:
	int PlayerNumber = 0;
};
