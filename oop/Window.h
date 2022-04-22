#pragma once
#define _CRTDBG_MAP_ALLOC

//Include GLEW
#include <GL/glew.h>
//Include GLFW
#include <GLFW/glfw3.h>

#include <stdlib.h>
#include <stdio.h>

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Window
{
private:
	GLFWwindow* window;

	GLFWwindow* create(int width, int height, const char* title);

public:
	Window(int width, int height, const char* title);

	GLFWwindow* getWindow();
};

