// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKABILITYKIT_AbilityFrameworkEnum_generated_h
#error "AbilityFrameworkEnum.generated.h already included, missing '#pragma once' in AbilityFrameworkEnum.h"
#endif
#define NETWORKABILITYKIT_AbilityFrameworkEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NetworkAbilityKit_Plugins_NetworkAbilityKit_Source_NetworkAbilityKit_Public_AbilityFrameworkEnum_h


#define FOREACH_ENUM_EMODIFIERTYPE(op) \
	op(EModifierType::MT_Fire) \
	op(EModifierType::MT_Water) 

enum class EModifierType : uint8;
template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EModifierType>();

#define FOREACH_ENUM_EATTRMODIFYMETHOD(op) \
	op(EAttrModifyMethod::AMM_Add) \
	op(EAttrModifyMethod::AMM_Multiply) \
	op(EAttrModifyMethod::AMM_Set) 

enum class EAttrModifyMethod : uint8;
template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAttrModifyMethod>();

#define FOREACH_ENUM_EABILITYNOTVALIDTYPE(op) \
	op(EAbilityNotValidType::ANV_DisabledInternally) \
	op(EAbilityNotValidType::ANV_DisabledByModifier) \
	op(EAbilityNotValidType::ANV_InCoolDown) \
	op(EAbilityNotValidType::ANV_NotEnoughAttr) \
	op(EAbilityNotValidType::ANV_PointUnavailable) 

enum class EAbilityNotValidType : uint8;
template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAbilityNotValidType>();

#define FOREACH_ENUM_EABILITYTYPE(op) \
	op(EAbilityType::AT_NoTarget) \
	op(EAbilityType::AT_Point) \
	op(EAbilityType::AT_Target) \
	op(EAbilityType::AT_Passive) 

enum class EAbilityType : uint8;
template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAbilityType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
