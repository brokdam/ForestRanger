// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ForestRanger : ModuleRules
{
	public ForestRanger(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
			
			// AI
			"AIModule", "NavigationSystem"
			
		});
	}
}
