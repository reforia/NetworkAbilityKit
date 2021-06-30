// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusSetBase.h"

// Sets default values
AStatusSetBase::AStatusSetBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	TmpRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	RootComponent = TmpRoot;
	bReplicates = true;
	SetReplicates(true);
}

void AStatusSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AStatusSetBase, BelongingActor);
}

// Called when the game starts or when spawned
void AStatusSetBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AStatusSetBase::GetBoolAttribute(const FName PropertyName, bool& Success, FBoolProperty*& BoolProp, bool& AttributeValue)
{
	Success = false;

	UClass *cl = this->GetClass();
	if (!cl)
	{
		Success = false;
		return;
	}

	UProperty* Property = cl->FindPropertyByName(PropertyName);
	if (!Property)
	{
		UE_LOG(LogTemp, Log, TEXT("No Property Found By Name"));
		Success = false;
		return;
	}

	if (!Cast<FBoolProperty>(Property))
	{
		UE_LOG(LogTemp, Log, TEXT("Property Not A BoolProp"));
		Success = false;
		return;
	}

	Success = true;
	BoolProp = Cast<FBoolProperty>(Property);
	AttributeValue = GetBoolAttributeValue(BoolProp);
	return;
}

bool AStatusSetBase::GetBoolAttributeValue(FBoolProperty* BoolProp)
{
	if (!BoolProp)
	{
		return false;
	}

	return BoolProp->GetPropertyValue_InContainer(this);
}

void AStatusSetBase::SetBoolAttributeByName_Implementation(FName PropName, bool bNewBool)
{
	UE_LOG(LogTemp, Log, TEXT("Running Logic"));
	if (HasAuthority())
	{
		UE_LOG(LogTemp, Log, TEXT("Running Logic On Server"));
		bool Success = false;
		FBoolProperty* BoolProp;
		bool PropValue = false;
		GetBoolAttribute(PropName, Success, BoolProp, PropValue);
		if (Success)
		{
			SetBoolAttribute(BoolProp, bNewBool);
			UE_LOG(LogTemp, Log, TEXT("Property Set Successfully"));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Property Not Found"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Running Logic On Client"));
	}
}

bool AStatusSetBase::SetBoolAttributeByName_Validate(FName PropName, bool bNewBool)
{
	return true;
}

void AStatusSetBase::SetBoolAttribute_Implementation(FBoolProperty* BoolProp, bool bNewBool)
{
	//UE_LOG(LogTemp, Log, TEXT("Float Property Value Set"));
	if (GetBoolAttributeValue(BoolProp) == bNewBool)
	{
		BP_OnImmune(BoolProp);
		return;
	}
	Multicast_SetBoolAttribute(BoolProp, bNewBool);
}

bool AStatusSetBase::SetBoolAttribute_Validate(FBoolProperty* BoolProp, bool bNewBool)
{
	return true;
}

void AStatusSetBase::Multicast_SetBoolAttribute_Implementation(FBoolProperty* BoolProp, bool bNewBool)
{
	BoolProp->SetPropertyValue_InContainer(this, bNewBool);
}

bool AStatusSetBase::Multicast_SetBoolAttribute_Validate(FBoolProperty* BoolProp, bool bNewBool)
{
	return true;
}

