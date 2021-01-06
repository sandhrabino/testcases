CC = gcc
AFL = afl-gcc
CLANG = clang
CFLAGS = -Wall

# Should be equivalent to your list of C files, if you don't build selectively
SRC=$(wildcard src/*.c)
C_EXECUTABLE :=$(SRC:.c=)
all: $(C_EXECUTABLE)

$(C_EXECUTABLE):$(SRC)
	$(CC) $< $(CFLAGS) -o $@

