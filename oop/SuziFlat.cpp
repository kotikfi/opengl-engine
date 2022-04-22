#include "SuziFlat.h"

SuziFlat::SuziFlat(ModelSuziFlat* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void SuziFlat::render()
{
	model->render(trans);
}

