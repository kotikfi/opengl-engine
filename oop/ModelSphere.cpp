#include "ModelSphere.h"
#include "models/sphere.h"

ModelSphere::ModelSphere(Shader* shader)
{

	this->shader = shader;

	createVBO(sphere);
	createVAO(this->VBO);

}

void ModelSphere::render(glm::mat4 trans)
{
	shader->renderObject(VAO, 2880, trans);
}
