// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityBehaviorCompBase.h"
#include "ProjectileBase.h"
#include "TrapBase.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"
#include "AbilityBase.h"

// Sets default values for this component's properties
UAbilityBehaviorCompBase::UAbilityBehaviorCompBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicated(true);
	// ...
}

// Called when the game starts
void UAbilityBehaviorCompBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UAbilityBehaviorCompBase::SERVER_SpawnTrap_Implementation(TSubclassOf<class AActor> TrapClass, FVector SpawnLocation)
{
	UE_LOG(LogTemp, Log, TEXT("----Start Spawn Trap----"));
	AController* TmpController = Cast<AController>(GetOwner());
	if (!TmpController)
	{
		UE_LOG(LogTemp, Log, TEXT("----Controller Not Available----"));
		return;
	}

	APawn* TmpPawn = TmpController->GetPawn();

	FVector OriLoc = TmpPawn->GetActorLocation();
	FVector ForwardVector = TmpPawn->GetActorForwardVector();
	FVector SpawnLoc = SpawnLocation;
	FRotator SpawnRot = FRotator::ZeroRotator;
	FActorSpawnParameters SpawnParams;

	AActor* TmpActor = GetOwner()->GetWorld()->SpawnActor<AActor>(*TrapClass, SpawnLoc, SpawnRot, SpawnParams);
	ATrapBase* TmpTrapBase = Cast<ATrapBase>(TmpActor);
	if (!TmpTrapBase)
	{
		UE_LOG(LogTemp, Log, TEXT("----Actor is not a trap, try use SERVER_SpawnActor()?----"));
		return;
	}
	TmpTrapBase->BelongingControllerActor = GetOwner();
}

bool UAbilityBehaviorCompBase::SERVER_SpawnTrap_Validate(TSubclassOf<class AActor> TrapClass, FVector SpawnLocation)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_SpawnActor_Implementation(TSubclassOf<class AActor> ActorClass, FVector SpawnLocation)
{
	AController* TmpController = Cast<AController>(GetOwner());
	if (!TmpController)
	{
		return;
	}

	APawn* TmpPawn = TmpController->GetPawn();

	FVector OriLoc = TmpPawn->GetActorLocation();
	FVector ForwardVector = TmpPawn->GetActorForwardVector();
	FVector SpawnLoc = SpawnLocation;
	FRotator SpawnRot = FRotator::ZeroRotator;
	FActorSpawnParameters SpawnParams;

	GetOwner()->GetWorld()->SpawnActor<AActor>(*ActorClass, SpawnLoc, SpawnRot, SpawnParams);
}

bool UAbilityBehaviorCompBase::SERVER_SpawnActor_Validate(TSubclassOf<class AActor> ProjectileClass, FVector SpawnLocation)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_TryActivateAbility_Implementation(AAbilityBase* Ability)
{
	Ability->TryActivate();
}

bool UAbilityBehaviorCompBase::SERVER_TryActivateAbility_Validate(AAbilityBase* Ability)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_Teleport_Implementation(AActor* ActorToTeleport, FVector TeleportLocation)
{
	if (!ActorToTeleport)
	{
		return;
	}
	TeleportLocation += FVector(0.0f, 0.0f, 100.0f);
	ActorToTeleport->SetActorLocation(TeleportLocation);
}

bool UAbilityBehaviorCompBase::SERVER_Teleport_Validate(AActor* ActorToTeleport, FVector TeleportLocation)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_DashTowards_Implementation(AActor* ActorToDash, FVector DashVector, float Velocity /*= 1000.0f*/)
{
	if (!ActorToDash)
	{
		return;
	}
	ACharacter* TmpCharacter = Cast<ACharacter>(ActorToDash);
	if (!TmpCharacter)
	{
		return;
	}
	TmpCharacter->LaunchCharacter(DashVector*Velocity, true, true);
}

bool UAbilityBehaviorCompBase::SERVER_DashTowards_Validate(AActor* ActorToDash, FVector DashVector, float Velocity /*= 1000.0f*/)
{
	return true;
}

void UAbilityBehaviorCompBase::MULTICAST_PlayMontage_Implementation(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay)
{
	SkeletalMeshComp->GetAnimInstance()->Montage_Play(MontageToPlay);
}

bool UAbilityBehaviorCompBase::MULTICAST_PlayMontage_Validate(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* MontageToPlay)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_ApplyDamage_Implementation(AActor* DamagedActor, float DamageAmount, class AController * EventInstigator, AActor * DamageCauser)
{
	if (!DamagedActor)
	{
		return;
	}
	FDamageEvent DamageEvent;
	float ActualDamage = DamagedActor->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	UE_LOG(LogTemp, Log, TEXT("Actual Damage is %F"), ActualDamage);
}

bool UAbilityBehaviorCompBase::SERVER_ApplyDamage_Validate(AActor* DamagedActor, float DamageAmount, class AController * EventInstigator, AActor * DamageCauser)
{
	return true;
}

void UAbilityBehaviorCompBase::SERVER_SpawnProjectile_Implementation(TSubclassOf<class AActor> ProjectileClass , FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias)
{
	AController* TmpController = Cast<AController>(GetOwner());
	if (!TmpController)
	{
		return;
	}

	APawn* TmpPawn = TmpController->GetPawn();

	FVector OriLoc = TmpPawn->GetActorLocation();
	FVector SpawnLoc = OriLoc + ForwardVector * SpawningForwardBias;
	FRotator Rot = DesiredRotation;
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor* TmpProjectile = GetOwner()->GetWorld()->SpawnActor<AActor>(*ProjectileClass, SpawnLoc, Rot, SpawnParams);
	AProjectileBase* TmpProjectileBase = Cast<AProjectileBase>(TmpProjectile);
	if (!TmpProjectileBase)
	{
		return;
	}
	TmpProjectileBase->BelongingControllerActor = GetOwner();
}

bool UAbilityBehaviorCompBase::SERVER_SpawnProjectile_Validate(TSubclassOf<class AActor> ProjectileClass , FVector ForwardVector, FRotator DesiredRotation, float SpawningForwardBias)
{
	return true;
}


