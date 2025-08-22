CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = sizeOf

all: $(TARGET)

$(TARGET): sizeOf.o
	$(CC) $(CFLAGS) $^ -o $@

sizeOF.o: sizeOf.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean