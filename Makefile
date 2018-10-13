CC = g++
SRC := src
OBJ := obj
INC := inc
OUT := out

SOURCES := $(wildcard $(SRC)/*.cpp)
OBJECTS := $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SOURCES))

default: $(OUT)/cppyt
CC_FLAGS = -Wall -Wextra -Werror
$(OUT)/cppyt: $(OBJECTS)
	$(CC) $^ -o $@ -Bdynamic 

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CC_FLAGS) -std=c++11 -lstdc++ -I$(INC) -c $< -o $@



clean:
	rm -f $(OBJECTS)
	rm -f $(OUT)/*