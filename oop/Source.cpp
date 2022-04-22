#define _CRTDBG_MAP_ALLOC

#include <stdlib.h>
#include <stdio.h>
#include "Application.h"


#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

int main(void)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Application* app = &Application::getInstance();

	app->init();
	app->destroyObjects();

	//_CrtDumpMemoryLeaks();
	exit(EXIT_SUCCESS);
}