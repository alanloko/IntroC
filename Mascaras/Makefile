CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = sonIguales

all: $(TARGET)

$(TARGET): sonIguales.o
	$(CC) $(CFLAGS) $^ -o $@

sonIguales.o: sonIguales.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean