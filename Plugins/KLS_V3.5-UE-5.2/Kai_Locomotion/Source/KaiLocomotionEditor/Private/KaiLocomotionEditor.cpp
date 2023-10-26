#include "KaiLocomotionEditor.h"
 

DEFINE_LOG_CATEGORY(KaiLocomotionEditor);

#define LOCTEXT_NAMESPACE "FKaiLocomotionEditor"

void FKaiLocomotionEditor::StartupModule()
{
	UE_LOG(KaiLocomotionEditor, Display, TEXT("KaiLocomotionEditor module has been loaded"));
	
	
}

void FKaiLocomotionEditor::ShutdownModule()
{
	UE_LOG(KaiLocomotionEditor, Display, TEXT("KaiLocomotionEditor module has been unloaded"));

}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FKaiLocomotionEditor, KaiLocomotionEditor)
