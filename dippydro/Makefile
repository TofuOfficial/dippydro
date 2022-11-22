ifeq ($(OS),Windows_NT)
    CFLAGS += -D DRO_WINDOWS
endif

ifdef DRO_RELEASE
	CFLAGS += -03
endif

TARGET=dippydro.dll

SRC=src
BIN=../bin

SOURCES        := $(wildcard $(SRC)/*.c) $(wildcard $(SRC)/**/*.c)
OBJ            := $(patsubst %.c, %.o,  $(SOURCES:.c:=.o))

INC=-Isrc -I../ext/glad/include -I../ext/glfw/include
LIBRARIES=../ext/glfw/lib/libglfw3dll.a ../bin/glad.o -lopengl32

CC=clang
CFLAGS=-D BUILD_DLL -m64 -std=c99 -Wall $(INC)
LFLAGS=$(LIBRARIES)

all: project configobjects

configobjects: $(OBJ)
	mv $^ $(BIN)/

project: $(OBJ)
	$(CC) $(CFLAGS) -shared -o $(BIN)/$(TARGET) $^ $(LFLAGS)

dirs:
	mkdir -p $(BIN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN) $(OBJ)
