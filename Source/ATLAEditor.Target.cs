// Copyright Melon Studios.

using UnrealBuildTool;
using System.Collections.Generic;

public class ATLAEditorTarget : TargetRules
{
	public ATLAEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V9;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal6_0;
		ExtraModuleNames.Add("ATLA");
	}
}
