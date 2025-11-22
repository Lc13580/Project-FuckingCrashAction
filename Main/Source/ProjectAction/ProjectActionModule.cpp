#pragma once

#include "Modules/ModuleManager.h"

class ProjectActionModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override {};
	virtual void ShutdownModule() override {};
};

IMPLEMENT_PRIMARY_GAME_MODULE(ProjectActionModule, ProjectAction, "ProjectAction")