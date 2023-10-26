#pragma once

#include "Modules/ModuleManager.h"

struct FKLSAnimationGraphNodeFactory;


DECLARE_LOG_CATEGORY_EXTERN(KaiLocomotionEditor, All, All);

class FKaiLocomotionEditor : public IModuleInterface 
{
	public:

	/* Called when the module is loaded */
	virtual void StartupModule() override;

	/* Called when the module is unloaded */
	virtual void ShutdownModule() override;
	

};