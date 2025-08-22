CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = decode

all: $(TARGET)

$(TARGET): decode.o
	$(CC) $(CFLAGS) $^ -o $@

decode.o: decode.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean