// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AProjectileBase::AProjectileBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->SetCollisionResponseToAllChannels(ECR_Overlap);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(RootComponent);
	StaticMeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);

	SetReplicates(true);
	SetReplicateMovement(true);
}

// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();
	HandleLifeCycle();
	SpawnLocation = this->GetActorLocation();
	GetWorld()->GetTimerManager().SetTimer(ProjectileInternalTickHandle, this, &AProjectileBase::InternalTick, InternalTickTime, true);
}

// Called every frame
void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileBase::HandleLifeCycle()
{
	if (LifeSpan < 0.0f)
	{
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(ProjectileLifeSpanHandle, this, &AProjectileBase::OnLifeCyclePreEnd, LifeSpan, false);

}

void AProjectileBase::OnLifeCyclePreEnd()
{
	InternalDestroySelf();
}

void AProjectileBase::InternalDestroySelf()
{
	this->Destroy();
}

void AProjectileBase::ProjectileDistanceMeasurement()
{
	FVector DistanceVector = SpawnLocation - this->GetActorLocation();
	float Distance = DistanceVector.Size();
	if (Distance >= MaxRange)
	{
		if (bDestroyOnReachMaxRange)
		{
			OnLifeCyclePreEnd();
		}
		else
		{
			ProjectileMovement->StopMovementImmediately();
		}

	}
}

void AProjectileBase::InternalTick()
{
	ProjectileDistanceMeasurement();
}

