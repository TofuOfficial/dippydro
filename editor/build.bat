@ECHO OFF
SetLocal EnableDelayedExpansion

set sources=
for /R %%f in (*.c) do (
    set sources=!sources! %%f
)

set name=editor
set cflags=-g
set includes=-Isrc -I../dippydro/src/
set lflags=../bin/dippydro.lib

ECHO Compiling editor...
clang %sources% %cflags% -o ../bin/%name%.exe %includes% %lflags% 