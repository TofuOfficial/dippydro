#include <stdlib.h>

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "application.h"

void run_app(application_t* app) {
    while(!glfwWindowShouldClose(app->attribs.window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(app->attribs.window);

        glfwPollEvents();
    }
}

void delete_app(application_t* app) {
    free((void*) app);
    glfwTerminate();
}