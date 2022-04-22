#pragma once

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


class ITransformation
{
protected:
	glm::mat4 trans;

public:
	virtual void scale(glm::vec3 ratio) = 0;
	virtual void scale(glm::mat4 m, glm::vec3 ratio) = 0;
	virtual void translate(glm::vec3 vec) = 0;
	virtual void rotate(float angle, glm::vec3 vec) = 0;
};

