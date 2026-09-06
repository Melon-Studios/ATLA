// Copyright Melon Studios.

using UnrealBuildTool;
using System.Collections.Generic;

public class ATLATarget : TargetRules
{
	public ATLATarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V9;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal6_0;
		ExtraModuleNames.Add("ATLA");
	}
}
