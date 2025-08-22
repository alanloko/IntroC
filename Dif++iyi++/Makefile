CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = diferencia

all: $(TARGET)

$(TARGET): diferencia.o
	$(CC) $(CFLAGS) $^ -o $@

diferencia.o: diferencia.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean