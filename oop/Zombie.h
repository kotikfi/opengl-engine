#pragma once
#define _CRTDBG_MAP_ALLOC

#include "ModelZombie.h"
#include "AbstractObject.h"
#include "ITransformation.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class Zombie : public AbstractObject
{
	ModelZombie* model;

public:
	Zombie(ModelZombie* model, glm::vec3 pos);
	void render();
};

