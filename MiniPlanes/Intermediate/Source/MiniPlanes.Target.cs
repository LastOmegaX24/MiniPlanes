using UnrealBuildTool;

public class MiniPlanesTarget : TargetRules
{
	public MiniPlanesTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("MiniPlanes");
	}
}
