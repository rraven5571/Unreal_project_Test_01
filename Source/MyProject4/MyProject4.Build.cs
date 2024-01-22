// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject4 : ModuleRules
{
	public MyProject4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
