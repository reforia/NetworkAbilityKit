// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSetBase.h"
#include "AbilityFrameworkEnum.h"

// Sets default values
AAttributeSetBase::AAttributeSetBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	TmpRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	RootComponent = TmpRoot;

	SetReplicates(true);
	
}

void AAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AAttributeSetBase, BelongingActor);
}

// Called when the game starts or when spawned
void AAttributeSetBase::BeginPlay()
{
	Super::BeginPlay();
	
}

UFloatProperty* AAttributeSetBase::GetFloatAttribute(FName PropertyName)
{
	UClass *cl = this->GetClass();
	if (!cl)
	{
		return nullptr;
	}

	UProperty* Property = cl->FindPropertyByName(PropertyName);
	if (!Property)
	{
		return nullptr;
	}
		
	UFloatProperty* floatProp = Cast<UFloatProperty>(Property);
	if (!floatProp)
	{
		return nullptr;
	}

	return floatProp;
}

float AAttributeSetBase::GetTmpValueAfterModifiedFloatAttribute(UFloatProperty* FloatProp, EAttrModifyMethod ModifyMethod, float ModifyValue)
{
	if (!FloatProp)
	{
		return 0.0f;
	}
	float value = FloatProp->GetPropertyValue_InContainer(this);
	switch (ModifyMethod)
	{
	case EAttrModifyMethod::AMM_Add:
		value += ModifyValue;
		break;
	case EAttrModifyMethod::AMM_Multiply:
		value *= ModifyValue;
		break;
	case EAttrModifyMethod::AMM_Set:
		value = ModifyValue;
		break;
	default:
		break;
	}
	return value;
}

void AAttributeSetBase::SetFloatAttributeValueByName_Implementation(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue)
{
	if (HasAuthority())
	{
		UFloatProperty* tmpProp = GetFloatAttribute(PropName);
		if (tmpProp)
		{
			float value = GetTmpValueAfterModifiedFloatAttribute(tmpProp, ModifyMethod, ModifyValue);
			SetFloatAttributeValue(tmpProp, value);
		}
	}
}

bool AAttributeSetBase::SetFloatAttributeValueByName_Validate(FName PropName, EAttrModifyMethod ModifyMethod, float ModifyValue)
{
	return true;
}

void AAttributeSetBase::SetFloatAttributeValue_Implementation(UFloatProperty* FloatProp, float NewValue)
{
	if (HasAuthority())
	{
		//UE_LOG(LogTemp, Log, TEXT("Float Property Value Set"));
		FloatProp->SetPropertyValue_InContainer(this, NewValue);
	}
}

bool AAttributeSetBase::SetFloatAttributeValue_Validate(UFloatProperty* FloatProp, float NewValue)
{
	return true;
}
//virtual bool AAttributeSetBase::GetFloatPropertyByName(TMap< FString, &float > & out_PropertyValues) const
//{
//	TMap<FString, FString> Attrs;
//	bool bAttrsAvailable = this->GetNativePropertyValues(Attrs);
//	if (!bAttrsAvailable)
//	{
//		return -9999999.9f;
//	}
//	UE_LOG(LogTemp, Log, TEXT("%d"), Attrs.Num());
//	if (!Attrs.Contains(AttributeName))
//	{
//		return -9999999.9f;
//	}
//
//	FString ValueString = Attrs[AttributeName];
//	float FloatAttr = FCString::Atof(*ValueString);
//	return FloatAttr;
//}

