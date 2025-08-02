#pragma once
#include "Application.h"

extern Hazel::Application* Hazel::CreateApplication();
 
int main(int argc, char **argv) {
	auto app = Hazel::CreateApplication();
	//cout << "hello world";
	app->run();
	delete app;
	return 0;
}

//$(SolutionDir)bin\$(Configuration)-$(Platform)\$(ProjectName)\