#pragma once

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "dippydro.h"

extern application_t* create_app();

int main() {
    application_t* app = create_app();
    info("created app");
    info("running ...");
    run_app(app);
    delete_app(app);
}