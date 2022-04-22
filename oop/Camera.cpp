#include "Camera.h"
#include "Application.h"

Camera::Camera(Window* window, std::vector<Shader*>& shaders)
{
	this->window = window;
	this->shaders = shaders;
	cameraPos = glm::vec3(0.0f, 2.0f, 15.0f);
	cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
	cameraUp = glm::vec3(0.0f, 1.0f, 0.0f);

	view = glm::mat4(1.0f);

	projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 10000.0f);
}

glm::mat4 Camera::getView()
{
	return view;
}

glm::mat4 Camera::getProjection()
{
	return projection;
}

void Camera::setCameraPos(CamDirection cd, float cameraSpeed)
{
	switch (cd)
	{
	case CamDirection::UP:
		cameraPos += cameraSpeed * cameraFront;
		break;
	case CamDirection::DOWN:
		cameraPos -= cameraSpeed * cameraFront;
		break;
	case CamDirection::LEFT:
		cameraPos -= glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
		break;
	case CamDirection::RIGHT:
		cameraPos += glm::normalize(glm::cross(cameraFront, cameraUp)) * cameraSpeed;
		break;
	}
}

void Camera::setCameraPos(glm::vec3 pos)
{
	cameraPos = pos;
}

void Camera::setCameraFront(glm::vec3 cameraFront)
{
	this->cameraFront = cameraFront;
}

void Camera::inputKeys()
{
	float cameraSpeed = 100.0f * (&Application::getInstance())->deltaTime;
	float runSpeed = cameraSpeed * 2;

	if (glfwGetKey(window->getWindow(), GLFW_KEY_W) == GLFW_PRESS)
		setCameraPos(CamDirection::UP, cameraSpeed);
	if ((glfwGetKey(window->getWindow(), GLFW_KEY_W) == GLFW_PRESS) && (glfwGetKey(window->getWindow(), GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS)) // SHIFT + W
		setCameraPos(CamDirection::UP, cameraSpeed * runSpeed);

	if (glfwGetKey(window->getWindow(), GLFW_KEY_S) == GLFW_PRESS)
		setCameraPos(CamDirection::DOWN, cameraSpeed);
	if ((glfwGetKey(window->getWindow(), GLFW_KEY_S) == GLFW_PRESS) && (glfwGetKey(window->getWindow(), GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS))
		setCameraPos(CamDirection::DOWN, cameraSpeed * runSpeed);

	if (glfwGetKey(window->getWindow(), GLFW_KEY_A) == GLFW_PRESS)
		setCameraPos(CamDirection::LEFT, cameraSpeed);
	if ((glfwGetKey(window->getWindow(), GLFW_KEY_A) == GLFW_PRESS) && (glfwGetKey(window->getWindow(), GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS))
		setCameraPos(CamDirection::LEFT, cameraSpeed * runSpeed);

	if (glfwGetKey(window->getWindow(), GLFW_KEY_D) == GLFW_PRESS)
		setCameraPos(CamDirection::RIGHT, cameraSpeed);
	if ((glfwGetKey(window->getWindow(), GLFW_KEY_D) == GLFW_PRESS) && (glfwGetKey(window->getWindow(), GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS))
		setCameraPos(CamDirection::RIGHT, cameraSpeed * runSpeed);

	view = glm::lookAt(cameraPos, cameraPos + cameraFront, cameraUp);
	//printf("cameraFront: %f, %f, %f\n", cameraFront.x, cameraFront.y, cameraFront.z);
	for (auto i : shaders)
	{
		i->renderCamera();
	}
}
