#include <stdio.h>

#define tipo(x) _Generic((x), \
    int: "int", \
    float: "float", \
    double: "double", \
    char: "char", \
    char *: "char*", \
    default: "otro")


int main() {
    printf("Print como float %f\n", 0.1F);
    printf("Print como double %g, el tipo es: %s\n", 0.1, tipo(0.1));
    return 0;
}