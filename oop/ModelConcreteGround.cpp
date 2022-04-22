#include "ModelConcreteGround.h"
#include "models/plain.h"

void ModelConcreteGround::createVAO(GLuint VBO)
{
	GLuint VAO = 0;

	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);
	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	glEnableVertexAttribArray(2);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), NULL);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)(3 * sizeof(GL_FLOAT)));
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(GL_FLOAT), (GLvoid*)(6 * sizeof(GL_FLOAT)));
}

ModelConcreteGround::ModelConcreteGround(Shader* shader)
{

	this->shader = shader;

	createVBO(plain);
	createVAO(this->VBO);
	textureID = shader->setTexture("textures/concrete_ground.jpg");
	//textureID = shader->setTexture("textures/concrete_ground.jpg");
	//shader->setTexture("textures/grass.png");

}

void ModelConcreteGround::render(glm::mat4 trans)
{
	shader->renderObject(VAO, 6, trans, textureID);
}
