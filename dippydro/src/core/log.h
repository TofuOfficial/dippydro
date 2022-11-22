#pragma once

#include "core/core.h"

void DRO_API logger(const char* msg, int color);
void DRO_API trace(const char* msg);
void DRO_API info(const char* msg);
void DRO_API warn(const char* msg);
void DRO_API error(const char* msg);


// Foreground colors
#define F_DARKBLUE     0x0001
#define F_GREEN        0x0002
#define F_LIGHTBLUE    0x0003
#define F_RED          0x0004
#define F_PURPLE       0x0005
#define F_DARKYELLOW   0x0006
#define F_WHITE        0x0007
#define F_INTESIFY     0x0008
#define F_BLUE         0x0009
#define F_LIGHTGREEN   0x000A
#define F_CYAN         0x000B
#define F_LIGHTPURPLE  0x000C
#define F_LIGHTRED     0x000D
#define F_LIGHTYELLOW  0x000E