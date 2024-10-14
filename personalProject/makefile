# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Source files
SRC = main.cpp selection.cpp players.cpp

# Header files
HDR = selection.h players.h

# Output executable
OUTPUT = game

# Default target
all: $(OUTPUT)

# Link object files and create the executable
$(OUTPUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUTPUT) $(SRC)

# Clean up object files and the executable
clean:
	rm -f $(OUTPUT)

# Phony targets
.PHONY: all clean
