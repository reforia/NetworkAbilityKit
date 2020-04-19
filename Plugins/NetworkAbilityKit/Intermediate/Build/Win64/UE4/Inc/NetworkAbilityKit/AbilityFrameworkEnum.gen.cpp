// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkAbilityKit/Public/AbilityFrameworkEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityFrameworkEnum() {}
// Cross Module References
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType();
	UPackage* Z_Construct_UPackage__Script_NetworkAbilityKit();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType();
	NETWORKABILITYKIT_API UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityType();
// End Cross Module References
	static UEnum* EModifierType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetworkAbilityKit_EModifierType, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("EModifierType"));
		}
		return Singleton;
	}
	template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EModifierType>()
	{
		return EModifierType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifierType(EModifierType_StaticEnum, TEXT("/Script/NetworkAbilityKit"), TEXT("EModifierType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetworkAbilityKit_EModifierType_Hash() { return 3031502386U; }
	UEnum* Z_Construct_UEnum_NetworkAbilityKit_EModifierType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifierType"), 0, Get_Z_Construct_UEnum_NetworkAbilityKit_EModifierType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifierType::MT_Fire", (int64)EModifierType::MT_Fire },
				{ "EModifierType::MT_Water", (int64)EModifierType::MT_Water },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AbilityFrameworkEnum.h" },
				{ "MT_Fire.DisplayName", "Fire" },
				{ "MT_Fire.Name", "EModifierType::MT_Fire" },
				{ "MT_Water.DisplayName", "Water" },
				{ "MT_Water.Name", "EModifierType::MT_Water" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
				nullptr,
				"EModifierType",
				"EModifierType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAttrModifyMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("EAttrModifyMethod"));
		}
		return Singleton;
	}
	template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAttrModifyMethod>()
	{
		return EAttrModifyMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttrModifyMethod(EAttrModifyMethod_StaticEnum, TEXT("/Script/NetworkAbilityKit"), TEXT("EAttrModifyMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod_Hash() { return 2138676382U; }
	UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttrModifyMethod"), 0, Get_Z_Construct_UEnum_NetworkAbilityKit_EAttrModifyMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttrModifyMethod::AMM_Add", (int64)EAttrModifyMethod::AMM_Add },
				{ "EAttrModifyMethod::AMM_Multiply", (int64)EAttrModifyMethod::AMM_Multiply },
				{ "EAttrModifyMethod::AMM_Set", (int64)EAttrModifyMethod::AMM_Set },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AMM_Add.DisplayName", "Add" },
				{ "AMM_Add.Name", "EAttrModifyMethod::AMM_Add" },
				{ "AMM_Multiply.DisplayName", "Multiply" },
				{ "AMM_Multiply.Name", "EAttrModifyMethod::AMM_Multiply" },
				{ "AMM_Set.DisplayName", "Set" },
				{ "AMM_Set.Name", "EAttrModifyMethod::AMM_Set" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AbilityFrameworkEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
				nullptr,
				"EAttrModifyMethod",
				"EAttrModifyMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAbilityNotValidType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("EAbilityNotValidType"));
		}
		return Singleton;
	}
	template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAbilityNotValidType>()
	{
		return EAbilityNotValidType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityNotValidType(EAbilityNotValidType_StaticEnum, TEXT("/Script/NetworkAbilityKit"), TEXT("EAbilityNotValidType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType_Hash() { return 982915761U; }
	UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityNotValidType"), 0, Get_Z_Construct_UEnum_NetworkAbilityKit_EAbilityNotValidType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityNotValidType::ANV_DisabledInternally", (int64)EAbilityNotValidType::ANV_DisabledInternally },
				{ "EAbilityNotValidType::ANV_DisabledByModifier", (int64)EAbilityNotValidType::ANV_DisabledByModifier },
				{ "EAbilityNotValidType::ANV_InCoolDown", (int64)EAbilityNotValidType::ANV_InCoolDown },
				{ "EAbilityNotValidType::ANV_NotEnoughAttr", (int64)EAbilityNotValidType::ANV_NotEnoughAttr },
				{ "EAbilityNotValidType::ANV_PointUnavailable", (int64)EAbilityNotValidType::ANV_PointUnavailable },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANV_DisabledByModifier.DisplayName", "DisabledByModifier" },
				{ "ANV_DisabledByModifier.Name", "EAbilityNotValidType::ANV_DisabledByModifier" },
				{ "ANV_DisabledInternally.DisplayName", "DisabledInternally" },
				{ "ANV_DisabledInternally.Name", "EAbilityNotValidType::ANV_DisabledInternally" },
				{ "ANV_InCoolDown.DisplayName", "InCoolDown" },
				{ "ANV_InCoolDown.Name", "EAbilityNotValidType::ANV_InCoolDown" },
				{ "ANV_NotEnoughAttr.DisplayName", "NotEnoughAttributes" },
				{ "ANV_NotEnoughAttr.Name", "EAbilityNotValidType::ANV_NotEnoughAttr" },
				{ "ANV_PointUnavailable.DisplayName", "PointUnavailable" },
				{ "ANV_PointUnavailable.Name", "EAbilityNotValidType::ANV_PointUnavailable" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AbilityFrameworkEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
				nullptr,
				"EAbilityNotValidType",
				"EAbilityNotValidType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAbilityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NetworkAbilityKit_EAbilityType, Z_Construct_UPackage__Script_NetworkAbilityKit(), TEXT("EAbilityType"));
		}
		return Singleton;
	}
	template<> NETWORKABILITYKIT_API UEnum* StaticEnum<EAbilityType>()
	{
		return EAbilityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityType(EAbilityType_StaticEnum, TEXT("/Script/NetworkAbilityKit"), TEXT("EAbilityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NetworkAbilityKit_EAbilityType_Hash() { return 1959622236U; }
	UEnum* Z_Construct_UEnum_NetworkAbilityKit_EAbilityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkAbilityKit();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityType"), 0, Get_Z_Construct_UEnum_NetworkAbilityKit_EAbilityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityType::AT_NoTarget", (int64)EAbilityType::AT_NoTarget },
				{ "EAbilityType::AT_Point", (int64)EAbilityType::AT_Point },
				{ "EAbilityType::AT_Target", (int64)EAbilityType::AT_Target },
				{ "EAbilityType::AT_Passive", (int64)EAbilityType::AT_Passive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AT_NoTarget.DisplayName", "NoTarget" },
				{ "AT_NoTarget.Name", "EAbilityType::AT_NoTarget" },
				{ "AT_Passive.DisplayName", "Passive" },
				{ "AT_Passive.Name", "EAbilityType::AT_Passive" },
				{ "AT_Point.DisplayName", "Point" },
				{ "AT_Point.Name", "EAbilityType::AT_Point" },
				{ "AT_Target.DisplayName", "Target" },
				{ "AT_Target.Name", "EAbilityType::AT_Target" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AbilityFrameworkEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NetworkAbilityKit,
				nullptr,
				"EAbilityType",
				"EAbilityType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
