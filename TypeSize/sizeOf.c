#include <stdio.h>

int main() {
    char c = 127;
    short s = 32767;
    int i = 123456;
    long l = 1234567890;
    printf("El tamaño del char c: %d es %lu\n", c, sizeof(c));
    printf("El tamaño del short s: %d es %lu\n", s, sizeof(s));
    printf("El tamaño del int i: %u es %lu\n", i, sizeof(i));
    printf("El tamaño del long l: %lu es %lu\n", l, sizeof(l));
    return 0;

}