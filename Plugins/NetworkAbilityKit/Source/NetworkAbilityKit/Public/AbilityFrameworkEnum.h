// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilityFrameworkEnum.generated.h"

UENUM(BlueprintType)
enum class EAbilityType : uint8
{
	AT_NoTarget		UMETA(DisplayName = "NoTarget"),
	AT_Point 		UMETA(DisplayName = "Point"),
	AT_Target		UMETA(DisplayName = "Target"),
	AT_Passive		UMETA(DisplayName = "Passive")
};

UENUM(BlueprintType)
enum class EAbilityNotValidType : uint8
{
	ANV_DisabledInternally		UMETA(DisplayName = "DisabledInternally"),
	ANV_DisabledByModifier 		UMETA(DisplayName = "DisabledByModifier"),
	ANV_InCoolDown				UMETA(DisplayName = "InCoolDown"),
	ANV_NotEnoughAttr		UMETA(DisplayName = "NotEnoughAttributes"),
	ANV_PointUnavailable		UMETA(DisplayName = "PointUnavailable")
};

UENUM(BlueprintType)
enum class EAttrModifyMethod : uint8
{
	AMM_Add				UMETA(DisplayName = "Add"),
	AMM_Multiply 		UMETA(DisplayName = "Multiply"),
	AMM_Set				UMETA(DisplayName = "Set")
};

UENUM(BlueprintType)
enum class EModifierType : uint8
{
	MT_Fire				UMETA(DisplayName = "Fire"),
	MT_Water 			UMETA(DisplayName = "Water")
};
