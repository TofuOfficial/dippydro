#include <stdio.h>

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "window.h"

void create_window(window_attribs_t* attribs)
{
    if(!glfwInit())
        printf("something went wrong with glfw");
    attribs->window = glfwCreateWindow(attribs->width, attribs->height, attribs->title, NULL, NULL);
    glfwMakeContextCurrent(attribs->window);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        printf("uh oh");
}