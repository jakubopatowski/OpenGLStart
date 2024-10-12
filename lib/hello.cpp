#include "hello.hpp"
#include "config.hpp"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

void hello() {
  std::cout << "Project name: " << CMakeVars::project_name << '\n';
  std::cout << "Project version: " << CMakeVars::project_version << '\n';
}

int initOpenGl() {
  constexpr GLint WIDTH = 800;
  constexpr GLint HEIGHT = 600;

  if (!glfwInit()) {
    std::cout << "glfwInit() -> error\n";
    glfwTerminate();
    return 1;
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "test", NULL, NULL);
  if (!mainWindow) {
    // error
    glfwTerminate();
    return 1;
  }

  int bufferWidth, bufferHeight;
  glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

  glfwMakeContextCurrent(mainWindow);

  glewExperimental = GL_TRUE;

  if (glewInit() != GLEW_OK) {
    std::cout << "glewInit() -> error\n";
    glfwDestroyWindow(mainWindow);
    glfwTerminate();
    return 1;
  }

  glViewport(0, 0, bufferWidth, bufferHeight);

  while (!glfwWindowShouldClose(mainWindow)) {
    glfwPollEvents();
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(mainWindow);
  }

  return 0;
}