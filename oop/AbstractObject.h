#pragma once
#define _CRTDBG_MAP_ALLOC

#include <crtdbg.h>

#include "ITransformation.h"

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class AbstractObject : public ITransformation
{
public:
	glm::vec3 pos;

	virtual void render() = 0;

	//Transformations
	virtual void scale(glm::vec3 ratio);
	virtual void scale(glm::mat4 m, glm::vec3 ratio);
	virtual void translate(glm::vec3 vec);
	virtual void rotate(float angle, glm::vec3 vec);
};

