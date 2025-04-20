# Compiler
CC = gcc

# Compiler flags (strict warning level)
CFLAGS = -Wall -ansi -pedantic

# Output binary name
TARGET = magic

# Source files
SRCS = main.c magic.c

# Default rule
all: $(TARGET)

# Compile target
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Clean up binary and object files
clean:
	rm -f $(TARGET)
