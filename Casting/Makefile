CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = CastingFloats

all: $(TARGET)

$(TARGET): CastingFloats.o
	$(CC) $(CFLAGS) $^ -o $@

CastingFloats.o: CastingFloats.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean