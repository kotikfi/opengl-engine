#pragma once
//Include GLEW
#include <GL/glew.h>
#pragma once
#define _CRTDBG_MAP_ALLOC

//Include GLFW
#include <GLFW/glfw3.h>

#include <stdlib.h>
#include <stdio.h>

#include "ObjectManager.h"
#include "Camera.h"
#include "Zombie.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Renderer
{
private:
	Camera* camera;

	ObjectManager* objectManager;

	int zombieCounter = 0;


	void renderObjects();
	void zombieAI();

public:
	Renderer(Camera* camera);
	void mainLoop(GLFWwindow* window);
};

