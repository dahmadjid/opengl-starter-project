#include <iostream>
#include <fmt/core.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main(void) {

    fmt::println("hello");
    GLFWwindow* window;
    auto err = glfwInit();
    if (!err) {
        fmt::println("GLFW failed to init {}", err);
        return -1;
    }
    
    window = glfwCreateWindow(1280, 720, "Renderer", NULL, NULL);
    if(!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    err = glewInit();
    if (err != GLEW_OK) {
        fmt::println("Glew failed to init {}", err);
        return -1;
    }

    while(!glfwWindowShouldClose(window)) {

        



        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);

    glfwTerminate();
    exit(EXIT_SUCCESS);
}