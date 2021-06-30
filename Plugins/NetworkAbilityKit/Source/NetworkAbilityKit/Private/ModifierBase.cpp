// Fill out your copyright notice in the Description page of Project Settings.


#include "ModifierBase.h"
#include "ModifierComp.h"

// Sets default values
AModifierBase::AModifierBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SetReplicates(true);
}

void AModifierBase::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AModifierBase, UIDisplayName);
	DOREPLIFETIME(AModifierBase, UITexture);
	DOREPLIFETIME(AModifierBase, UIDescription);
	DOREPLIFETIME(AModifierBase, ModifierStack);
	DOREPLIFETIME(AModifierBase, ModifierIsActive);
	DOREPLIFETIME(AModifierBase, bShowUI);
	DOREPLIFETIME(AModifierBase, ModifierInstigator);
}

// Called when the game starts or when spawned
void AModifierBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AModifierBase::AddStack_Implementation(int8 NewStack)
{
	UE_LOG(LogTemp, Log, TEXT("----Try to add stack to existing valid modifier----"));
	uint8 TmpStack = uint8(ModifierStack + NewStack);
	ModifierStack = FMath::Clamp(TmpStack, uint8(0), MaxStack);
	if (ModifierStack <= 0)
	{
		OnModifierPendingExpire();
	}
}

bool AModifierBase::AddStack_Validate(int8 NewStack)
{
	return true;
}

void AModifierBase::LifeCycleHandler()
{
	if (ModifierDuration < 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("----Modifier Infinite Lifespan, auto LifeCycleHandler not work----"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("----Life cycle Handler start ticking----"));
		RemainingTimeBeforeExpire = ModifierDuration;
		GetWorld()->GetTimerManager().SetTimer(ModifierLifeCycleTickTimerHandle, this, &AModifierBase::ModifierDurationCycleTick, GetWorld()->GetDeltaSeconds(), true);
	}
}


void AModifierBase::SetModifierActivation_Implementation(bool NewActivate)
{
	UE_LOG(LogTemp, Log, TEXT("----ModifierActivation State Changed----"));
	ModifierIsActive = NewActivate;
}

bool AModifierBase::SetModifierActivation_Validate(bool NewActivate)
{
	return true;
}

void AModifierBase::OnRep_OnStackChanged()
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier Stack Changed----"));
}

void AModifierBase::OnRep_OnModifierActivateChanged()
{

}

void AModifierBase::OnReadyToExpire()
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier Ready To Expire----"));
	BelongingModComp->RemoveFromLocalModifierList(this);
}

void AModifierBase::ModifierDurationCycleTick()
{
	if (RemainingTimeBeforeExpire <= 0.0f)
	{
		UE_LOG(LogTemp, Log, TEXT("----Lifespan Finished, Modifier shoud expire now----"));
		OnModifierPendingExpire();
	}
	else
	{
		RemainingTimeBeforeExpire -= GetWorld()->GetDeltaSeconds();
	}
}

void AModifierBase::OnModifierPendingExpire()
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier Pending Expire----"));
	RemainingTimeBeforeExpire = 0.0f;
	GetWorld()->GetTimerManager().ClearTimer(ModifierLifeCycleTickTimerHandle);
	GetWorld()->GetTimerManager().ClearTimer(IntervalThinkTimerHandle);
	OnPreExpired();
	OnReadyToExpire();
}

void AModifierBase::OnApplied()
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier is Applied----"));

	SetModifierActivation(true);

	LifeCycleHandler();

	BP_OnApplied();
}

void AModifierBase::OnReapplied(uint8 NewStack)
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier is Reapplied----"));

	// Refresh the modifier time
	RemainingTimeBeforeExpire = ModifierDuration;

	// Add Stack to Modifier
	AddStack(NewStack);

	BP_OnReapplied();
}

void AModifierBase::OnBlocked()
{
	UE_LOG(LogTemp, Log, TEXT("----Modifier is Blocked----"));
	BP_OnBlocked();
}

void AModifierBase::StartIntervalThink_Implementation(float DeltaTick)
{
	if (HasAuthority())
	{
		GetWorld()->GetTimerManager().SetTimer(IntervalThinkTimerHandle, this, &AModifierBase::OnIntervalThink, DeltaTick, true);
	}
}

bool AModifierBase::StartIntervalThink_Validate(float DeltaTick)
{
	return true;
}

