// Fill out your copyright notice in the Description page of Project Settings.


#include "TrapBase.h"

// Sets default values
// Sets default values
ATrapBase::ATrapBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereCollision->SetCollisionResponseToAllChannels(ECR_Overlap);
	SphereCollision->SetIsReplicated(true);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(RootComponent);
	StaticMeshComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	StaticMeshComp->SetIsReplicated(true);

	SetReplicates(true);
}

// Called when the game starts or when spawned
void ATrapBase::BeginPlay()
{
	Super::BeginPlay();
	HandleLifeCycle();
}

void ATrapBase::HandleLifeCycle()
{
	if (LifeSpan < 0.0f)
	{
		// Lifespan is not handled manually, it will not be destroyed until mannually do so
		return;
	}

	GetWorld()->GetTimerManager().SetTimer(TrapLifeSpanHandle, this, &ATrapBase::OnLifeCyclePreEnd, LifeSpan, false);

}

void ATrapBase::OnLifeCyclePreEnd()
{
	InternalDestroySelf();
}

void ATrapBase::InternalDestroySelf()
{
	this->Destroy();
}


