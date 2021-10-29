// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GOWTarget : TargetRules
{
	public GOWTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GOW");
		//MinFilesUsingPrecompiledHeaderOverride = 1;
		//bFasterWithoutUnity = true;
	}
}
