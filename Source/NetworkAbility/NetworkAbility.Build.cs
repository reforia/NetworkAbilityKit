// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
//using System.IO;

public class NetworkAbility : ModuleRules
{
	public NetworkAbility(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore", "OnlineSubsystem", "OnlineSubsystemSteam", "RHI", "RenderCore", "NetworkAbilityKit" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		//PublicIncludePaths.Add(Path.Combine(ModuleDirectory ,"NetworkAbilityKit/Public"));
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
