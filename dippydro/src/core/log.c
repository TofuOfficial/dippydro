#include <stdio.h>
#include <Windows.h>

#include "log.h"

void logger(const char* msg, int color)
{
    if(color) {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    }
    printf("%s\n", msg);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_WHITE);
}

void trace(const char* msg)
{
    printf("%s\n", msg);
}

void info(const char* msg)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
    printf("%s\n", msg);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_WHITE);
}

void warn(const char* msg)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_DARKYELLOW);
    printf("%s\n", msg);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_WHITE);
}

void error(const char* msg)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_RED);
    printf("%s\n", msg);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), F_WHITE);
}