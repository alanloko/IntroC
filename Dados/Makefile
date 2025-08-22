CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = Tiradas

all: $(TARGET)

$(TARGET): Tiradas.o
	$(CC) $(CFLAGS) $^ -o $@

Tiradas.o: Tiradas.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean