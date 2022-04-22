#include "ModelSkybox.h"
#include "models/skybox.h"

void ModelSkybox::createVAO(GLuint VBO)
{

	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), NULL);
}

ModelSkybox::ModelSkybox(Shader* shader)
{

	this->shader = shader;

	createVBO(skybox);
	createVAO(this->VBO);
	/*shader->setCubemap(std::vector<const char*> {
		"textures/posx.jpg",
		"textures/negx.jpg",
		"textures/posy.jpg",
		"textures/negy.jpg",
		"textures/posz.jpg",
		"textures/negz.jpg",
	});*/

	shader->setCubemap(std::vector<const char*> {
		"textures/skybox/right.jpg",
		"textures/skybox/left.jpg",
		"textures/skybox/top.jpg",
		"textures/skybox/bottom.jpg",
		"textures/skybox/front.jpg",
		"textures/skybox/back.jpg",
	});

	/*shader->setCubemap(std::vector<const char*> {
		"textures/forest/posx.jpg",
		"textures/forest/negx.jpg",
		"textures/forest/posy.jpg",
		"textures/forest/negy.jpg",
		"textures/forest/posz.jpg",
		"textures/forest/negz.jpg",
	});*/

	/*shader->setCubemap(std::vector<const char*> {
		"textures/sf/posx.jpg",
		"textures/sf/negx.jpg",
		"textures/sf/posy.jpg",
		"textures/sf/negy.jpg",
		"textures/sf/posz.jpg",
		"textures/sf/negz.jpg",
	});*/

	/*shader->setCubemap(std::vector<const char*> {
		"textures/desert/posx.bmp",
		"textures/desert/negx.bmp",
		"textures/desert/posy.bmp",
		"textures/desert/negy.bmp",
		"textures/desert/negz.bmp",
		"textures/desert/posz.bmp",
	});*/
}

void ModelSkybox::render(glm::mat4 trans)
{
	shader->renderSkybox(VAO, 36, trans);
}
