#include "Skybox.h"

Skybox::Skybox(ModelSkybox* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Skybox::render()
{
	model->render(trans);
}
