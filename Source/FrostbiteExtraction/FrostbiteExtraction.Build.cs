// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FrostbiteExtraction : ModuleRules
{
	public FrostbiteExtraction(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
