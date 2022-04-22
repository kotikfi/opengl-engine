#include "Zombie.h"

Zombie::Zombie(ModelZombie* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Zombie::render()
{
	model->render(trans);
}
