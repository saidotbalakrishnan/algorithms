CXX := g++
CXX_FLAGS := -Wall -std=c++17

BIN := bin
SRC := src
INC := inc
LIB := lib
TEST := test
EXECUTABLE := ValidPalindrome

all: $(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp $(TEST)/*.cpp
	$(CXX) $(CXX_FLAGS) -I$(INC) -L$(LIB) $^ -o $@

clean:
	-rm $(BIN)/*
