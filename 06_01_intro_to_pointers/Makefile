# Made by Serhij Čepil
# FIT VUT Student
# https://github.com/sipxi
# 09/10/2024

# The code is based on VUT FIT C Practicals


# Compiler and flags
CC 			= gcc #! CHANGE BASED ON YOUR COMPLIER
CFLAGS 		= -std=c11 -Wall -Wextra -pedantic

# Executable names
EXEC        = main

# Source files
MAIN_SRC    = src/main.c

# Targets
.PHONY: all run test clean

# Default target to build both the main and test executables
all: $(EXEC) 
	
# Build the main executable
$(EXEC): $(MAIN_SRC) $(TYPES_SRC)
	$(CC) $(CFLAGS) -o $@ $^


# Run the main program
run: $(EXEC)
	@echo "Running main..."

	./$(EXEC)


# Clean up compiled files
clean:
	@echo "Cleaning up .exe"
	@if exist $(EXEC).exe del $(EXEC).exe
	@if exist *.o del *.o

# End of Makefile