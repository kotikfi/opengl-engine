#pragma once
#define _CRTDBG_MAP_ALLOC


//Include GLEW
#include <GL/glew.h>

//Include GLFW

#include <GLFW/glfw3.h>

#include "AbstractModel.h"
#include <vector>

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class ModelTerrain : public AbstractModel
{
private:
	std::vector<float> vertices;
	int vCount = 0;

	void createVAO(GLuint VBO);
	void loadModel();

public:
	ModelTerrain(Shader* shader);
	void render(glm::mat4 trans);
};

