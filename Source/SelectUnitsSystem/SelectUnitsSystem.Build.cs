// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SelectUnitsSystem : ModuleRules
{
	public SelectUnitsSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;        
		
		//bFasterWithoutUnity = true;		
		MinFilesUsingPrecompiledHeaderOverride = 1;		
		bUseUnity = false; 		
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" }); 		
		PublicIncludePaths.AddRange(new string[] { "SelectUnitsSystem/Public" });		
		PrivateIncludePaths.AddRange(new string[] { "SelectUnitsSystem/Private" });
	}
}
