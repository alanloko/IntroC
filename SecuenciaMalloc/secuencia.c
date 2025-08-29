#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
uint16_t *secuencia(uint16_t n)
{
    uint16_t *arr = malloc(n*sizeof(u_int16_t));
    for (uint16_t i = 0; i < n; i++)
        arr[i] = i;
    return arr;
}


void otra_funcion(void) {
    // Reserva memoria en la pila que pisa lo que dejó "secuencia"
    char buffer[100];
    for (int i = 0; i < 100; i++)
        buffer[i] = (char)(i + 65);
}

int main(void) {
    uint16_t *arr = secuencia(10);

    otra_funcion();

    printf("%d\n",arr[2]); // devuelve algo random, otra_funcion() pisa la pila de memoria usada por el array

    return 0;
}
