// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectAction : ModuleRules
{
	public ProjectAction(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProjectAction",
			"ProjectAction/Variant_Platforming",
			"ProjectAction/Variant_Platforming/Animation",
			"ProjectAction/Variant_Combat",
			"ProjectAction/Variant_Combat/AI",
			"ProjectAction/Variant_Combat/Animation",
			"ProjectAction/Variant_Combat/Gameplay",
			"ProjectAction/Variant_Combat/Interfaces",
			"ProjectAction/Variant_Combat/UI",
			"ProjectAction/Variant_SideScrolling",
			"ProjectAction/Variant_SideScrolling/AI",
			"ProjectAction/Variant_SideScrolling/Gameplay",
			"ProjectAction/Variant_SideScrolling/Interfaces",
			"ProjectAction/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
