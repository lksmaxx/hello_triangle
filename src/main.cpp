#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(){
	GLFWwindow* window;

	if(!glfwInit())
	{
		std::cerr << "Failed to initialize glfw\n";
		return -1;
	}

	window = glfwCreateWindow(1280, 720, "Hello Triangle", NULL,NULL);
	if(!window){
		std::cerr << "Failed to create a glfw window\n";
		return -1;
	}

	glfwMakeContextCurrent(window);

	int version = gladLoadGL(glfwGetProcAddress);
	if(version == 0){
		std::cerr << "Faield to link with GLAD\n";
		return -1;
	}

	while(!glfwWindowShouldClose(window)){
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}
