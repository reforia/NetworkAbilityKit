// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHeroBase.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "StatsHUDWidget.h"
#include "Gameframework/Controller.h"
#include "AttributeComp.h"
#include "AbilitySetComp.h"
#include "AttrSet_Default.h"
#include "PlayerHeroControllerBase.h"


// Sets default values
APlayerHeroBase::APlayerHeroBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetAbsolute(false, true, false);
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;
	SpringArm->bInheritYaw = false;
	SpringArm->bDoCollisionTest = false;
	SpringArm->CameraLagSpeed = 1.0f;
	

	CamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CamComp->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	StatsHUD = CreateDefaultSubobject<UWidgetComponent>(TEXT("StatsWidget"));
	StatsHUD->SetupAttachment(RootComponent);

	MaxCameraOffsetRange = 500.0f;
}

void APlayerHeroBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// This actually takes care of replicating the Variable
	DOREPLIFETIME(APlayerHeroBase, AbilityComp);
	DOREPLIFETIME(APlayerHeroBase, AttributeComp);
}

// Called when the game starts or when spawned
void APlayerHeroBase::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerHeroBase::InitializePlayer()
{
	UE_LOG(LogTemp, Log, TEXT("----Player Initializing----"));

	if (!HasAuthority())
	{
		InitializeCameraYaw();
	}
	else
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

		if (!StatsHUDWidget)
		{
			UE_LOG(LogTemp, Log, TEXT("----Null StatsHUDWidget, ABORTING----"));
			return;
		}
	}

	//UUserWidget* HUDWidgetObject = CreateWidget<UUserWidget>(BelongingController, StatsHUDWidget);
	//StatsHUD->SetWidget(HUDWidgetObject);
	//if (!StatsHUD->GetUserWidgetObject())
	//{
	//	UE_LOG(LogTemp, Log, TEXT("----StatsHUD Has No UserWidgetObject, HUD Initialization Failed----"));
	//	return;
	//}
	//UStatsHUDWidget* TmpStatsHUD = Cast<UStatsHUDWidget>(StatsHUD->GetUserWidgetObject());
	//if (!TmpStatsHUD)
	//{
	//	UE_LOG(LogTemp, Log, TEXT("----Null TmpStatsHUD, HUD Initialization Failed----"));
	//	return;
	//}

	//TmpStatsHUD->PlayerRef = this;
	//TmpStatsHUD->AttriComp = TmpAttrComp;
	//UE_LOG(LogTemp, Log, TEXT("----StatsHUD Initialized----"));

}

//bool APlayerHeroBase::InitializePlayer_Validate()
//{
//	return true;
//}

// Called to bind functionality to input
void APlayerHeroBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerHeroBase::InitializeCameraYaw()
{
	FRotator OriRot = SpringArm->GetComponentRotation();
	SpringArm->SetRelativeRotation(FRotator(OriRot.Pitch, 90.0f, OriRot.Roll));
	UE_LOG(LogTemp, Log, TEXT("----Initialize Camera Yaw----"));
}

void APlayerHeroBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

float APlayerHeroBase::TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator, AActor * DamageCauser)
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

void APlayerHeroBase::UpdateCameraOffset(FVector CursorDirectionNormalized, float DistanceProportion)
{
	float FinalOffsetDist = FMath::Lerp(0.0f, MaxCameraOffsetRange, DistanceProportion);
	FVector SpringArmOffset = CursorDirectionNormalized * FinalOffsetDist;
	SpringArm->TargetOffset = FVector(SpringArmOffset.X, SpringArmOffset.Y, 0.0f);
}


