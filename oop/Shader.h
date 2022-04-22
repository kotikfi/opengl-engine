
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
#include <glm/gtx/string_cast.hpp>

#include "Camera.h"
#include "ShaderLoader.h"
#include "soil/include/SOIL.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include <vector>
#include <string>


#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Camera;

struct Texture {
	GLuint id;
	const char* type;
};

class Shader
{
private:
	const char* vertex_shader;
	const char* fragment_shader;

	GLuint vertexShader;
	GLuint fragmentShader;
	GLuint shaderProgram;

	ShaderLoader* shaderLoader;

	Camera* camera;

	GLuint skyboxTex;

	void compileShaders();

public:
	Shader(const char* vertex_shader, const char* fragment_shader);
	~Shader();

	void setCamera(Camera* camera);
	GLuint setTexture(const char* tex);
	void setCubemap(std::vector<const char*> faces);
	void renderObject(GLuint VAO, int vCount, glm::mat4 trans);
	void renderObject(GLuint VAO, int vCount, glm::mat4 trans, GLuint textureID);
	void renderSkybox(GLuint VAO, int vCount, glm::mat4 trans);
	void renderCamera();
};