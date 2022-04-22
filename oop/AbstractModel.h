#pragma once
#define _CRTDBG_MAP_ALLOC

#include "Shader.h"


#include <crtdbg.h>

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

class AbstractModel
{
protected:
	Shader* shader = nullptr;
	GLuint VBO;
	GLuint VAO;
	GLuint textureID;

	virtual void createVBO(const std::vector<float>& vertices);
	virtual void createVAO(GLuint VBO);

	/*virtual void loadModel(const char* path);
	virtual void processNode(aiNode* node, const aiScene* scene);
	virtual Mesh processMesh(aiMesh* mesh, const aiScene* scene);*/

public:
	AbstractModel();
	virtual void render(glm::mat4 trans) = 0;
};

