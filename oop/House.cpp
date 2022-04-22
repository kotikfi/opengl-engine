#include "House.h"

House::House(ModelHouse* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void House::render()
{
	model->render(trans);
}

