#include "ConcreteGround.h"


ConcreteGround::ConcreteGround(ModelConcreteGround* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void ConcreteGround::render()
{
	model->render(trans);
}
