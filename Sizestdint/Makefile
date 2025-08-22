CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = sizeStd

all: $(TARGET)

$(TARGET): sizeStd.o
	$(CC) $(CFLAGS) $^ -o $@

sizeStd.o: sizeStd.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean