// ©2023, indiependent.studio : taken entirely from Stephen Ulibarri's UE5.2 GAS Course.

using UnrealBuildTool;
using System.Collections.Generic;

public class AuraEditorTarget : TargetRules
{
	public AuraEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Aura" } );
	}
}
