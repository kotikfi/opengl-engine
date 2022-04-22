#include "Window.h"
#include "Application.h"


GLFWwindow* Window::create(int width, int height, const char* title)
{
	GLFWwindow* window;
	glfwSetErrorCallback([](int error, const char* description)-> void {(&Application::getInstance())->error_callback(error, description); });
	if (!glfwInit()) {
		fprintf(stderr, "ERROR: could not start GLFW3\n");
		exit(EXIT_FAILURE);
	}

	window = glfwCreateWindow(width, height, title, NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	// start GLEW extension handler
	glewExperimental = GL_TRUE;
	glewInit();
	// get version info
	printf("OpenGL Version: %s\n", glGetString(GL_VERSION));
	printf("Using GLEW %s\n", glewGetString(GLEW_VERSION));
	printf("Vendor %s\n", glGetString(GL_VENDOR));
	printf("Renderer %s\n", glGetString(GL_RENDERER));
	printf("GLSL %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));
	int major, minor, revision;
	glfwGetVersion(&major, &minor, &revision);
	printf("Using GLFW %i.%i.%i\n", major, minor, revision);
	int w, h;
	glfwGetFramebufferSize(window, &w, &h);
	float ratio = w / (float)h;
	glViewport(0, 0, w, h);

	// Register callbacks
	(&Application::getInstance())->registerCallbacks(window);

	//Disable cursor
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	return window;
}

Window::Window(int width, int height, const char* title)
{
	window = create(width, height, title);
}

GLFWwindow* Window::getWindow()
{
	return window;
}

