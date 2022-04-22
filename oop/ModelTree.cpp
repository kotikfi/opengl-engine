#include<assimp/Importer.hpp>
#include<assimp/scene.h>
#include<assimp/postprocess.h>

#include "ModelTree.h"

void ModelTree::createVAO(GLuint VBO)
{
	glGenVertexArrays(1, &VAO);
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);

	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);
	glEnableVertexAttribArray(2);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (GLvoid*)0);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (GLvoid*)(sizeof(float) * 3));
	glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (GLvoid*)(sizeof(float) * 6));
}

void ModelTree::loadModel()
{
	vCount = 0;
	Assimp::Importer importer;
	unsigned int importOptions = aiProcess_Triangulate
		| aiProcess_OptimizeMeshes
		| aiProcess_JoinIdenticalVertices
		| aiProcess_Triangulate
		| aiProcess_CalcTangentSpace;

	const aiScene* scene = importer.ReadFile("models/tree.obj", importOptions);

	if (scene)
	{
		aiMesh* mesh = scene->mMeshes[0];
		vCount = mesh->mNumFaces * 3;
		for (unsigned int i = 0; i < mesh->mNumFaces; i++)
		{
			for (unsigned int j = 0; j < 3; j++)
			{
				vertices.push_back(mesh->mVertices[mesh->mFaces[i].mIndices[j]].x);
				vertices.push_back(mesh->mVertices[mesh->mFaces[i].mIndices[j]].y);
				vertices.push_back(mesh->mVertices[mesh->mFaces[i].mIndices[j]].z);
				vertices.push_back(mesh->mNormals[mesh->mFaces[i].mIndices[j]].x);
				vertices.push_back(mesh->mNormals[mesh->mFaces[i].mIndices[j]].y);
				vertices.push_back(mesh->mNormals[mesh->mFaces[i].mIndices[j]].z);
				vertices.push_back(mesh->mTextureCoords[0][mesh->mFaces[i].mIndices[j]].x);
				vertices.push_back(mesh->mTextureCoords[0][mesh->mFaces[i].mIndices[j]].y);
			}
		}
	}
}

ModelTree::ModelTree(Shader* shader)
{
	this->shader = shader;

	loadModel();

	createVBO(vertices);
	createVAO(this->VBO);
	textureID = shader->setTexture("models/tree.png");


}

void ModelTree::render(glm::mat4 trans)
{
	//shader->renderObject(VAO, 6, trans);
	shader->renderObject(VAO, vCount, trans, textureID);
}