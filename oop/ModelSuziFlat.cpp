
#include "ModelSuziFlat.h"
#include "models/suzi_flat.h"

ModelSuziFlat::ModelSuziFlat(Shader* shader)
{

	this->shader = shader;

	createVBO(suziFlat);
	createVAO(this->VBO);

}

void ModelSuziFlat::render(glm::mat4 trans)
{
	shader->renderObject(VAO, 2904, trans);
}
