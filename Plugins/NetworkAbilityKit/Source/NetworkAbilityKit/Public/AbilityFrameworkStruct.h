// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AbilityFrameworkEnum.h"
#include "AbilityFrameworkStruct.generated.h"

class AAbilityBase;

USTRUCT(BlueprintType)
struct FCostStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FName AttributeName;

	UPROPERTY(EditAnywhere)
	EAttrModifyMethod ModifyMethod;

	UPROPERTY(EditAnywhere)
	float Value;
}; 

USTRUCT(BlueprintType)
struct FAbilityListStruct : public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Dev_AbilityName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AAbilityBase* Ability;
};
