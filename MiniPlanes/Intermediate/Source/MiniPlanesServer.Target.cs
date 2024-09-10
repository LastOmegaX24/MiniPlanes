using UnrealBuildTool;

public class MiniPlanesServerTarget : TargetRules
{
	public MiniPlanesServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("MiniPlanes");
	}
}
