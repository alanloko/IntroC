#include <stdio.h>

int main() {
    int i = 0;
    printf("i++: %d\n", i++);
    printf("i++ post operacion: %d\n", i);
    printf("i = 0\n");
    i = 0;
    printf("++i: %d\n", ++i);
    return 0;
}