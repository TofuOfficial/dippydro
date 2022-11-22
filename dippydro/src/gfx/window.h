#pragma once

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "core/core.h"

typedef struct window_attribs_t
{
    GLFWwindow* window;
    int width, height;
    char* title;
}window_attribs_t;

void DRO_API create_window(window_attribs_t* attribs);
