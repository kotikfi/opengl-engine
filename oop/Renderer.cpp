#include "Renderer.h"
#include "Application.h"

void Renderer::mainLoop(GLFWwindow* window)
{
	Application* app = &Application::getInstance();

	while (!glfwWindowShouldClose(window))
	{
		// clear color and depth buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		float currentFrame = glfwGetTime();
		app->deltaTime = currentFrame - app->lastFrame;
		app->lastFrame = currentFrame;

		camera->inputKeys();

		//Zombie AI
		//zombieAI();

		// Render objects
		renderObjects();

		// update other events like input handling
		glfwPollEvents();
		// put the stuff we’ve been drawing onto the display
		glfwSwapBuffers(window);
	}
	glfwDestroyWindow(window);
	glfwTerminate();
}

void Renderer::renderObjects()
{
	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_PLAIN); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_PLAIN)->render();
	}

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_SUZI_FLAT); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_SUZI_FLAT)->render();
	}

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_SPHERE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_SPHERE)->render();
	}

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_SKYBOX); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_SKYBOX)->render();
	}

	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_HOUSE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_HOUSE)->render();
	}
	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_TERRAIN); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_TERRAIN)->render();
	}
	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_TREE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_TREE)->render();
	}
	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_ZOMBIE); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_ZOMBIE)->render();
	}
	for (unsigned int i = 0; i < objectManager->getObjectCount(Types::ObjType::OBJ_CONCRETE_GROUND); i++)
	{
		objectManager->getObject(i, Types::ObjType::OBJ_CONCRETE_GROUND)->render();
	}
}

void Renderer::zombieAI()
{
	Zombie* z1 = (Zombie*)objectManager->getObject(0, Types::ObjType::OBJ_ZOMBIE);

		z1->translate(glm::vec3(0.0f, 0.0f, 0.2f));
		if (zombieCounter == 600)
		{
			z1->rotate(180.0f, glm::vec3(0.0f, 1.0f, 0.0f));
			zombieCounter = 0;
		}
		zombieCounter++;
	printf("x: %f y: %f z: %f\n", z1->pos.x, z1->pos.y, z1->pos.z);
}

Renderer::Renderer(Camera* camera)
{
	this->camera = camera;
	objectManager = &ObjectManager::getInstance();
}
