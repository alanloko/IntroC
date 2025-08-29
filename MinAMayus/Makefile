CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: $(TARGET)

$(TARGET): nombregenerico.o
	$(CC) $(CFLAGS) $^ -o $@

nombregenerico.o: nombregenerico.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: rm *.o $(TARGET)

.PHONY: all clean