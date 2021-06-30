// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityBase.h"
#include "Net/UnrealNetwork.h"
#include "AttributeComp.h"
#include "AttributeSetBase.h"

// Sets default values
AAbilityBase::AAbilityBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(true);
}

void AAbilityBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAbilityBase, bDisabledByModifier);
	DOREPLIFETIME(AAbilityBase, bInCoolDown);
	DOREPLIFETIME(AAbilityBase, bCanActivate);
	DOREPLIFETIME(AAbilityBase, RemainingCoolDown);
}

// Called when the game starts or when spawned
void AAbilityBase::BeginPlay()
{
	Super::BeginPlay();
}


void AAbilityBase::TryActivate_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("Try Activate"));
	if (ActivatePrecheck() && CostPrecheck())
	{
		switch (AbilityType)
		{
		case EAbilityType::AT_NoTarget:
			AbilityNoTarget();
			break;
		case EAbilityType::AT_Point:
			AbilityPoint();
			break;
		case EAbilityType::AT_Target:
			AbilityTarget();
			break;
		case EAbilityType::AT_Passive:
			AbilityPassive();
			break;
		default:
			break;
		}
	}
}

bool AAbilityBase::TryActivate_Validate()
{
	return true;
}

void AAbilityBase::StartIntervalThink(float DeltaTime)
{
	if (DeltaTime > 0.0f)
	{
		GetWorld()->GetTimerManager().SetTimer(AbilityTickHandle, this, &AAbilityBase::OnIntervalThink, DeltaTime, true);
	}
}

void AAbilityBase::StartCoolDown_Implementation()
{
	if (bInCoolDown)
	{
		return;
	}
	RemainingCoolDown = CoolDown;
	bInCoolDown = true;

	float TickTime = GetWorld()->GetDeltaSeconds();
	GetWorld()->GetTimerManager().SetTimer(AbilityCoolDownHandle, this, &AAbilityBase::CoolDownCycleTick, TickTime, true);
}

bool AAbilityBase::StartCoolDown_Validate()
{
	return true;
}

void AAbilityBase::EndAbility_Implementation()
{
	OnAbilityPreEnd();
	OnAbilityReadyToEnd();
}

bool AAbilityBase::EndAbility_Validate()
{
	return true;
}

void AAbilityBase::GetPointAbilityMousePositionInWorldAndTryCommit_Implementation()
{
	if (AbilityType != EAbilityType::AT_Point)
	{
		UE_LOG(LogTemp, Log, TEXT("Ability is not a Point Ability!"));
		return;
	}

	APlayerController* TmpController = GetWorld()->GetFirstPlayerController();
	if (!TmpController)
	{
		UE_LOG(LogTemp, Log, TEXT("Cannot Access Controller"));
		return;
	}

	float LocX = 0.0f;
	float LocY = 0.0f;

	if (!TmpController->GetMousePosition(LocX, LocY))
	{
		UE_LOG(LogTemp, Log, TEXT("No Associated Mouse Device"));
		return;
	}
	UE_LOG(LogTemp, Log, TEXT("Mouse Position Get"));


	FVector2D MousePos(LocX, LocY);
	FHitResult HitResult;
	const bool bTraceComplex = false;
	if (TmpController->GetHitResultAtScreenPosition(MousePos, ECC_Visibility, bTraceComplex, HitResult) == false)
	{
		UE_LOG(LogTemp, Log, TEXT("LocX pos: %F"), LocX);
		UE_LOG(LogTemp, Log, TEXT("LocY pos: %F"), LocY);
		UE_LOG(LogTemp, Log, TEXT("Mouse Cursor Did Not Trace A Valid Point"));
		return;
	}
	PointAbility_MousePositionInWorld = FVector(HitResult.Location.X, HitResult.Location.Y, TmpController->GetPawn()->GetActorLocation().Z);
	PointAbility_MouseVectorInWorld = PointAbility_MousePositionInWorld - TmpController->GetPawn()->GetActorLocation();
	PointAbility_MouseVectorInWorld.Z = 0.0f;
	PointAbility_MouseVectorInWorld.Normalize();
	UE_LOG(LogTemp, Log, TEXT("Mouse Cursor Position Set: %s"), *PointAbility_MousePositionInWorld.ToString());

	if (!MouseLocationAvailabilityCheck(PointAbility_MousePositionInWorld))
	{
		UE_LOG(LogTemp, Log, TEXT("----Point Ability No Valid Point----"));
		OnNotAvailableYet(EAbilityNotValidType::ANV_PointUnavailable);
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("----Ready To CommitAbility----"));
	CommitAbility();
}

bool AAbilityBase::GetPointAbilityMousePositionInWorldAndTryCommit_Validate()
{
	return true;
}

void AAbilityBase::SERVER_AbilityPointCoreLogic_Implementation()
{
	UE_LOG(LogTemp, Log, TEXT("----Start Point Ability Core Logic----"));
	GetPointAbilityMousePositionInWorldAndTryCommit();
}

bool AAbilityBase::SERVER_AbilityPointCoreLogic_Validate()
{
	return true;
}


bool AAbilityBase::MouseLocationAvailabilityCheck(FVector MouseLocation)
{
	if (MouseLocation == FVector(0.0f, 0.0f, -9999999.9f))
	{
		return false;
	}
	// Do Extra Check: NAV Mesh Availability && Physical Material
	return true;
}

void AAbilityBase::CommitAbility_Implementation()
{
	ApplyCost();
	OnActivated();
}

bool AAbilityBase::CommitAbility_Validate()
{
	return true;
}

bool AAbilityBase::ActivatePrecheck()
{
	if (!bCanActivate)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Disabled Internally----"));
		OnNotAvailableYet(EAbilityNotValidType::ANV_DisabledInternally);
	}

	if (bInCoolDown)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability In Cooldown----"));
		OnNotAvailableYet(EAbilityNotValidType::ANV_InCoolDown);
	}

	if (bDisabledByModifier)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Disabled by Modifier----"));
		OnNotAvailableYet(EAbilityNotValidType::ANV_DisabledByModifier);
	}

	bool bTmpActivate = bCanActivate && !bInCoolDown && !bDisabledByModifier;
	if (bTmpActivate)
	{
		UE_LOG(LogTemp, Log, TEXT("----Ability Activation Check Passed, CONTINUE----"));
	}
	return bTmpActivate;
}

bool AAbilityBase::CostPrecheck()
{
	UE_LOG(LogTemp, Log, TEXT("Cost Precheck"));
	bool bHasEnoughCost = true;
	if (!PairAttrSet)
	{
		if (!PairAttrComp)
		{
			bHasEnoughCost = false;

		}
		PairAttrSet = PairAttrComp->AttributePreset;
	}

	for (FCostStruct Cost : AbilityCost)
	{
		UFloatProperty* FloatProp = PairAttrSet->GetFloatAttribute(Cost.AttributeName);

		if (!FloatProp)
		{
			bHasEnoughCost = false;
			break;
		}

		float value = PairAttrSet->GetTmpValueAfterModifiedFloatAttribute(FloatProp, Cost.ModifyMethod, Cost.Value);

		if (value < 0.0f)
		{
			bHasEnoughCost = false;
		}
	}

	if (!bHasEnoughCost)
	{
		OnNotAvailableYet(EAbilityNotValidType::ANV_NotEnoughAttr);
		UE_LOG(LogTemp, Log, TEXT("----Cost Check Failed, ABORT----"));
	}
	UE_LOG(LogTemp, Log, TEXT("----Cost Check Passed, CONTINUE----"));
	return bHasEnoughCost;
}

void AAbilityBase::CoolDownCycleTick()
{
	if (RemainingCoolDown <= 0.0f)
	{
		RemainingCoolDown = 0.0f;
		GetWorld()->GetTimerManager().ClearTimer(AbilityCoolDownHandle);
		bInCoolDown = false;
		OnCoolDownFinished();
	}

	RemainingCoolDown -= GetWorld()->GetDeltaSeconds();
}

void AAbilityBase::ApplyCost_Implementation()
{
	if (HasAuthority())
	{
		bool bHasEnoughCost = true;
		if (!PairAttrSet)
		{
			if (!PairAttrComp)
			{
				return;
			}
			PairAttrSet = PairAttrComp->AttributePreset;
		}

		for (FCostStruct Cost : AbilityCost)
		{
			UFloatProperty* FloatProp = PairAttrSet->GetFloatAttribute(Cost.AttributeName);

			if (!FloatProp)
			{
				bHasEnoughCost = false;
				break;
			}

			float value = PairAttrSet->GetTmpValueAfterModifiedFloatAttribute(FloatProp, Cost.ModifyMethod, Cost.Value);

			PairAttrSet->SetFloatAttributeValue(FloatProp, value);

			UE_LOG(LogTemp, Log, TEXT("Value is now %F"), value);
		}
	}
}

bool AAbilityBase::ApplyCost_Validate()
{
	return true;
}

void AAbilityBase::OnAbilityReadyToEnd()
{
	GetWorld()->GetTimerManager().ClearTimer(AbilityTickHandle);
	OnAbilityEndDelegate.Broadcast();
}

void AAbilityBase::AbilityNoTarget()
{
	CommitAbility();
}

void AAbilityBase::AbilityPoint()
{
	UE_LOG(LogTemp, Log, TEXT("----Execute Point Ability----"));
	SERVER_AbilityPointCoreLogic();

}

void AAbilityBase::AbilityTarget()
{

}

void AAbilityBase::AbilityPassive()
{

}

