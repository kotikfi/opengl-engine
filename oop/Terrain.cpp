#include "Terrain.h"

Terrain::Terrain(ModelTerrain* model, glm::vec3 pos)
{
	this->model = model;
	this->trans = glm::mat4(1.0f);
	this->pos = pos;
	translate(pos);
}


void Terrain::render()
{
	model->render(trans);
}
