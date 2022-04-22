#include "Sphere.h"

Sphere::Sphere(ModelSphere* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Sphere::render()
{
	model->render(trans);
}
