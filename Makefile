CC=clang

ENGINE=dippydro
EDITOR=editor

all: engine_make editor_make

engine_make: $(ENGINE)
	$(MAKE) -C $^

editor_make: $(EDITOR)
	$(MAKE) -C $^
	
deps:
	cd ext/glad && $(CC) -o ../../bin/glad.o -Iinclude -c src/glad.c
	cp ext/glfw/lib/glfw3.dll bin/