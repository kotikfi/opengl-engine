#include "Shader.h"
#include "Application.h"



void Shader::compileShaders()
{
	shaderLoader = new ShaderLoader(vertex_shader, fragment_shader, &shaderProgram);

	glEnable(GL_DEPTH_TEST);
	glEnable(GL_TEXTURE_CUBE_MAP_SEAMLESS);
}


void Shader::renderObject(GLuint VAO, int vCount, glm::mat4 trans)
{
	glUseProgram(shaderProgram);

	GLint modelLoc = glGetUniformLocation(shaderProgram, "modelMatrix");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, &trans[0][0]);

	glBindVertexArray(VAO);
	glDrawArrays(GL_TRIANGLES, 0, vCount);
}


void Shader::renderObject(GLuint VAO, int vCount, glm::mat4 trans, GLuint textureID)
{
	glBindTexture(GL_TEXTURE_2D, textureID);
	glUseProgram(shaderProgram);

	GLint modelLoc = glGetUniformLocation(shaderProgram, "modelMatrix");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, &trans[0][0]);

	glBindVertexArray(VAO);
	glDrawArrays(GL_TRIANGLES, 0, vCount);
}

void Shader::renderSkybox(GLuint VAO, int vCount, glm::mat4 trans)
{
	glDepthMask(GL_FALSE);

	glUseProgram(shaderProgram);

	GLint modelLoc = glGetUniformLocation(shaderProgram, "modelMatrix");
	glUniformMatrix4fv(modelLoc, 1, GL_FALSE, &trans[0][0]);

	glBindVertexArray(VAO);
	glBindTexture(GL_TEXTURE_CUBE_MAP, skyboxTex);

	glDrawArrays(GL_TRIANGLES, 0, vCount);

	glDepthMask(GL_TRUE);
}

void Shader::renderCamera()
{
	glUseProgram(shaderProgram);
	//GLint modelLoc = glGetUniformLocation(shaderProgram, "modelMatrix");

	GLint viewLoc = glGetUniformLocation(shaderProgram, "viewMatrix");
	glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(camera->view));

	GLint projectionLoc = glGetUniformLocation(shaderProgram, "projectionMatrix");
	glUniformMatrix4fv(projectionLoc, 1, GL_FALSE, glm::value_ptr(camera->projection));

	GLint viewPosLoc = glGetUniformLocation(shaderProgram, "viewPos");
	glUniform3fv(viewPosLoc, 1, glm::value_ptr(camera->cameraPos));
}

Shader::Shader(const char* vertex_shader, const char* fragment_shader)
{
	this->vertex_shader = vertex_shader;
	this->fragment_shader = fragment_shader;

	vertexShader = 0;
	fragmentShader = 0;
	shaderProgram = 0;
	camera = nullptr;
	skyboxTex = 0;

	compileShaders();
}

Shader::~Shader()
{
	delete shaderLoader;
}

void Shader::setCamera(Camera* camera)
{
	this->camera = camera;
	shaderLoader = nullptr;
}

GLuint Shader::setTexture(const char* tex)
{
	glActiveTexture(GL_TEXTURE0);

	GLuint textureID = SOIL_load_OGL_texture(tex, SOIL_LOAD_RGBA, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	//GLuint textureID = SOIL_load_OGL_cubemap("textures/posx.jpg", "textures/negx.jpg", "textures/posy.jpg", "textures/negy.jpg", "textures/posz.jpg", "textures/negz.jpg", SOIL_LOAD_RGB, SOIL_CREATE_NEW_ID, SOIL_FLAG_MIPMAPS);

	if (textureID == NULL) {
		printf("An error occurred while loading image.\n");
		exit(EXIT_FAILURE);
	}

	glBindTexture(GL_TEXTURE_2D, textureID);
	

	GLint uniformID = glGetUniformLocation(shaderProgram, "textureUnitID");
	glUniform1i(uniformID, 0);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT); // opakovani textury
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	/*glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);*/
	return textureID;
}

void Shader::setCubemap(std::vector<const char*> faces)
{
	glGenTextures(1, &skyboxTex);
	glBindTexture(GL_TEXTURE_CUBE_MAP, skyboxTex);

	int width, height;

	for (unsigned int i = 0; i < faces.size(); i++)
	{
		unsigned char* data = SOIL_load_image(faces[i], &width, &height, NULL, NULL);
		if (data)
		{
			glTexImage2D(GL_TEXTURE_CUBE_MAP_POSITIVE_X + i, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		}
		else
		{
			printf("Cubemap texture failed to load: %s\n", faces[i]);
			SOIL_free_image_data(data);
		}
	}
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_CUBE_MAP, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);
}