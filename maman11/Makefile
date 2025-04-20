# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -ansi -pedantic

# Targets and sources
TARGETS = palindrome count_zero_bits
SRCS_palindrome = palindrome.c
SRCS_count_zero_bits = count_zero_bits.c

# Default rule: build all
all: $(TARGETS)

# Build rule for palindrome
palindrome: $(SRCS_palindrome)
	$(CC) $(CFLAGS) -o $@ $^

# Build rule for count_zero_bits
count_zero_bits: $(SRCS_count_zero_bits)
	$(CC) $(CFLAGS) -o $@ $^

# Clean rule
clean:
	rm -f $(TARGETS)
