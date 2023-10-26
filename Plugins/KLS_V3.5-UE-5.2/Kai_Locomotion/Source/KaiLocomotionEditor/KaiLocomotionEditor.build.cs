using UnrealBuildTool;
using System.IO;
 
public class KaiLocomotionEditor : ModuleRules
{
	public KaiLocomotionEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		// ...
		// Get the engine path. Ends with "Engine/"
		
		string enginePath = Path.GetFullPath(Target.RelativeEnginePath);
		string sourcePath = enginePath + "Source/Editor/";
		PublicIncludePaths.Add(sourcePath + "AnimationBlueprintEditor/Private");

		
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd" ,"KaiLocomotion", "AnimGraph",
			"BlueprintGraph","SlateCore","ToolMenus", "Slate", "GraphEditor", "AnimationBlueprintEditor"});

		PrivateDependencyModuleNames.AddRange(new string[] { "MessageLog" });
	}
}