// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilityFrameworkStruct.h"
#include "AbilityFrameworkEnum.h"
#include "FogOfWarWorker.h"
#include "Modules/ModuleManager.h"

class FNetworkAbilityKitModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
