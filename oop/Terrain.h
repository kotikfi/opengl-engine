#pragma once
#define _CRTDBG_MAP_ALLOC

#include "ModelTerrain.h"
#include "AbstractObject.h"
#include "ITransformation.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Terrain : public AbstractObject
{
	ModelTerrain* model;

public:
	Terrain(ModelTerrain* model, glm::vec3 pos);
	void render();
};

