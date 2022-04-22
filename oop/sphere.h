#pragma once
#define _CRTDBG_MAP_ALLOC

#include "ModelSphere.h"
#include "AbstractObject.h"
#include "ITransformation.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Sphere : public AbstractObject
{
private:
	ModelSphere* model;

public:
	Sphere(ModelSphere* model, glm::vec3 pos);
	void render();
};
