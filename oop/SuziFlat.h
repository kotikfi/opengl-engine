#pragma once
#define _CRTDBG_MAP_ALLOC

#include "ModelSuziFlat.h"
#include "AbstractObject.h"
#include "ITransformation.h"

#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW


class SuziFlat : public AbstractObject
{
private:
	ModelSuziFlat* model;

public:
	SuziFlat(ModelSuziFlat* model, glm::vec3 pos);
	void render();
};

