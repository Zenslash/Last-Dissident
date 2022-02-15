// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cyberpunk2022 : ModuleRules
{
	public Cyberpunk2022(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG", "NiagaraCore", "Niagara", "GameplayCameras" });
	}
}
