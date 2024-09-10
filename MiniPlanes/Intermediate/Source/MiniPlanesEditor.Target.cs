using UnrealBuildTool;

public class MiniPlanesEditorTarget : TargetRules
{
	public MiniPlanesEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("MiniPlanes");
	}
}
