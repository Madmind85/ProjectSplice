// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mostriciattolo5 : ModuleRules
{
	public Mostriciattolo5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "NavigationSystem" });
	}
}
