REM Build script for engine
@ECHO OFF
SetLocal EnableDelayedExpansion

REM Get a list of all the .c files.
set sources=
for /R %%f in (*.c) do (
    set sources=!sources! %%f
)

REM echo "Files:" %sources%

set name=dippydro
set cflags=-g -DBUILD_DLL -shared -Wall
REM -Wall -Werror
set includes=-Isrc -I../ext/glfw/include -I../ext/glad/include
set lflags=../ext/glfw/lib/glfw3.lib ../bin/glad.o -luser32
set defines=

echo Compiling dippydro ...
clang %sources% %cflags% -o ../bin/%name%.dll %includes% %lflags%