#pragma once
#include <glad/glad.h>
#include "GLFW/glfw3.h"
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

// settings
const unsigned int SCR_WIDTH = 3840;
const unsigned int SCR_HEIGHT = 2160;

const char* vertexShaderSource = "#version 330 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\0";
const char* fragmentShaderSource = "#version 330 core\n"
"out vec4 FragColor;\n"
"void main()\n"
"{\n"
"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
"}\n\0";
//mouse stuff
GLFWwindow *window;//THE WINDOW
double xpos;
double ypos;
int mousePressCounter = 0;
float verticesGlobal[9];
//Below are fragment shaders for circles
const char* vertexShaderSource2 = 
"#version 330 core\n"
"\n"
"layout(location = 0) in vec4 position;"//specify the attribute
"out vec3 "
"void main()\n"
"{\n"
"gl_Position = position;\n"//this is the shit
"}\n";

const char* fragmentShaderSource2 =
"#version 330 core\n"
"\n"
"layout(location = 0) in vec4 color;"//specify the attribute
"layout(location = 1) in vec3 position"
"layout(location = 2) in vec3 speed"
"void main()\n"
"{\n"
"	color = vec4(1.0, 0.0, 0.0, 1.0);\n"//this goes R G B A      should be red
"}\n";