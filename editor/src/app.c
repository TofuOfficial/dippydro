#include <glad/glad.h>
#include <glfw/glfw3.h>

#include <stdlib.h>

#include "dippydro.h"

application_t* create_app() {
    application_t* app = (application_t*)malloc(sizeof(application_t));
    app->attribs.width = 1280;
    app->attribs.height = 720;
    app->attribs.title = "the impossible";
    create_window(&app->attribs);
    return app;
}

// void create_app() {
//     glfwInit();
//     window_attribs attributes;
//     attributes.width = 1280;
//     attributes.height = 720;
//     attributes.title = "the impossible";
//     create_window(&attributes);

//     gladLoadGL();

//     while(!glfwWindowShouldClose(attributes.window)) {
//         glClear(GL_COLOR_BUFFER_BIT);

//         glfwSwapBuffers(attributes.window);

//         glfwPollEvents();
//     }

//     glfwTerminate();
// }