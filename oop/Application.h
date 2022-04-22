#pragma once
#define _CRTDBG_MAP_ALLOC
//Include GLEW
#include <GL/glew.h>
//Include GLFW
#include <GLFW/glfw3.h>

//Include GLM  
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale, glm::perspective
#include <glm/gtc/type_ptr.hpp> // glm::value_ptr

#include <stdlib.h>
#include <stdio.h>
#include "Window.h"
#include "Renderer.h"
#include "SuziFlat.h"
#include "ObjectFactory.h"
#include "Shader.h"
#include "Types.h"

#include <crtdbg.h>
#include "Camera.h"

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW


class Application
{
private:
	// static Application* instance;
	Application();

	// Callbacks
	void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
	void window_focus_callback(GLFWwindow* window, int focused);
	void window_iconify_callback(GLFWwindow* window, int iconified);
	void window_size_callback(GLFWwindow* window, int width, int height);
	void cursor_callback(GLFWwindow* window, double x, double y);
	void button_callback(GLFWwindow* window, int button, int action, int mode);

	// Window
	Window* window;

	// Shader
	std::vector<Shader*> shaders;

	// Renderer
	Renderer* renderer;

	// Camera
	Camera* camera;
	float mouseLastX;
	float mouseLastY;
	float cameraYaw;
	float cameraPitch;
	const float mouseSensitivity = 0.07f;
	bool firstMouse;

	// Object Manager
	ObjectManager* objectManager;

	// Object Factory
	ObjectFactory* objectFactory;

	void createObjects();

public:
	// static Application* getInstance();

	static Application& getInstance(); // Thread-safe singleton

	// delete copy and move constructors and assign operators
	Application(Application const&) = delete;             // Copy construct
	Application(Application&&) = delete;                  // Move construct
	Application& operator=(Application const&) = delete;  // Copy assign
	Application& operator=(Application&&) = delete;      // Move assign

	// Delta time
	float deltaTime;
	float lastFrame;

	void error_callback(int error, const char* description);
	void registerCallbacks(GLFWwindow* window);

	void init();
	void destroyObjects();
};

