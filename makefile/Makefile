# variaveis de configuracao
CC := g++
CFLAGS :=-c -W -Wall -Wextra -ansi -std=c++11
EXEC := vpl_execution #executavel

MAIN_DIR = ./src/main.cpp 
ENTIDADES_DIR = ./src/entidades/*.cpp
HPP_SRC = $(wildcard ./include/*.hpp)
BUILD_FILES = $(subst .cpp,.o,$(subst src,build,./src/entidades))

RM = rm -f

all: buildFolder $(EXEC)

$(EXEC): $(BUILD_FILES)
	@ echo "building object files"
	$(CC) $^ -o $@
	@echo "build finished"

./build/entidades/%.o: ./build/%.o

./build/%.o: ./src/%.cpp ./src/entidades/%.cpp ./include/%.hpp
	$(CC) $< $(FLAGS) -o $@

./build/main.o: main.cpp $(H_SRC)
	$(CC) -o $@ $< $(FLAGS)

buildFolder:
	@ mkdir -p build

clean:
	$(RM) ./build/*.o $(EXEC) *~