#include "Plain.h"

Plain::Plain(ModelPlain* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Plain::render()
{
	model->render(trans);
}

