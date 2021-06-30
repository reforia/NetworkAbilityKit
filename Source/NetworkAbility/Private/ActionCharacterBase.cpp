// Fill out your copyright notice in the Description page of Project Settings.


#include "ActionCharacterBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "Gameframework/Controller.h"
#include "NetworkAbilityKit/Public/AttributeComp.h"
#include "NetworkAbilityKit/Public/AbilitySetComp.h"
#include "NetworkAbilityKit/Public/AttrSet_Default.h"
#include "ActionControllerBase.h"

// Sets default values
AActionCharacterBase::AActionCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bUsePawnControlRotation = true;
	CamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CamComp->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

}

void AActionCharacterBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(AActionCharacterBase, AbilityComp);
	DOREPLIFETIME(AActionCharacterBase, AttributeComp);
}


// Called when the game starts or when spawned
void AActionCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AActionCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

// Called every frame
void AActionCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AActionCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AActionCharacterBase::InitializePlayer()
{
	UE_LOG(LogTemp, Log, TEXT("----Player Initializing----"));

	if (HasAuthority())
	{
		AttributeComp = FindComponentByClass<UAttributeComp>();
		if (!AttributeComp)
		{
			UE_LOG(LogTemp, Log, TEXT("----Attribute Comp Not Found, ABORTING----"));
			return;
		}
		AttributeComp->SetActive(true);
		AttributeComp->InitializeAttributeComp();
		AbilityComp = FindComponentByClass<UAbilitySetComp>();
		if (!AbilityComp)
		{
			UE_LOG(LogTemp, Log, TEXT("----Ability Comp Not Found, ABORTING----"));
			return;
		}
		AbilityComp->SetActive(true);
		AbilityComp->InitializeAbilitySet();

		//if (!StatsHUDWidget)
		//{
		//	UE_LOG(LogTemp, Log, TEXT("----Null StatsHUDWidget, ABORTING----"));
		//	return;
		//}
	}
}

float AActionCharacterBase::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	if (HasAuthority())
	{
		return 0.0f;
	}
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	UAttributeComp* AttrComp = this->FindComponentByClass<UAttributeComp>();
	if (!AttrComp)
	{
		UE_LOG(LogTemp, Log, TEXT("No AttrComp, ABOTRING"));
		return 0.0f;
	}

	AAttrSet_Default* DefaultAttribute = Cast<AAttrSet_Default>(AttrComp->AttributePreset);
	if (!DefaultAttribute)
	{
		UE_LOG(LogTemp, Log, TEXT("No Default Attr Set, ABORTING"));
		return 0.0f;
	}
	DefaultAttribute->Health -= ActualDamage;
	return ActualDamage;
}

