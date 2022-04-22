#include "Tree.h"

Tree::Tree(ModelTree* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Tree::render()
{
	model->render(trans);
}
