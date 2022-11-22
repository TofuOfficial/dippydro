#pragma once

#include "gfx/window.h"

typedef struct application_ts {
    window_attribs_t attribs;
}application_t;

// define in editor
application_t* create_app();

void DRO_API run_app(application_t* app);

void DRO_API delete_app(application_t* app);
