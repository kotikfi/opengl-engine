#pragma once
#define _CRTDBG_MAP_ALLOC

//Include GLM  
#include <glm/vec3.hpp> // glm::vec3
#include <glm/vec4.hpp> // glm::vec4
#include <glm/mat4x4.hpp> // glm::mat4
#include <glm/gtc/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale, glm::perspective
#include <glm/gtc/type_ptr.hpp> // glm::value_ptr

#include "Window.h"
#include "Shader.h"
#include <vector>

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Shader;

class Camera
{
private:
	Window* window;
	std::vector<Shader*> shaders;

	glm::vec3 cameraFront;
	glm::vec3 cameraUp;

	

public:
	Camera(Window* window, std::vector<Shader*>& shaders);

	enum class CamDirection
	{
		UP,
		DOWN,
		LEFT,
		RIGHT
	};
	
	glm::mat4 view;
	glm::mat4 projection;

	glm::vec3 cameraPos;

	glm::mat4 getView();
	glm::mat4 getProjection();

	void setCameraPos(CamDirection cd, float cameraSpeed);
	void setCameraPos(glm::vec3 pos);
	void setCameraFront(glm::vec3 cameraFront);
	void inputKeys();
};