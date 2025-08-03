#pragma once
#include "Application.h"

extern Hazel::Application* Hazel::CreateApplication();
 
int main(int argc, char **argv) {
	Hazel::Log::Init();
	HZ_CORE_ERROR("test");
	HZ_ERROR("test2");

	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
	return 0;
}

//$(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\