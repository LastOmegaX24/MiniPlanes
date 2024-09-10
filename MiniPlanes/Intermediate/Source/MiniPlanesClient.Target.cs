using UnrealBuildTool;

public class MiniPlanesClientTarget : TargetRules
{
	public MiniPlanesClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("MiniPlanes");
	}
}
