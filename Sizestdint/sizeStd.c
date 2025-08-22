#include <stdio.h>
#include <stdint.h>

int main () {
    int8_t i8 = 1;
    int16_t i16 = 2;
    int32_t i32 = 3;
    int64_t i64 = 4;
    uint8_t ui8 = 5;
    uint16_t ui16 = 6;
    uint32_t ui32 = 7;
    uint64_t ui64 = 8;

    printf("El tamaño de i8: %d es %lu\n", i8, sizeof(i8));
    printf("El tamaño de i16: %d es %lu\n", i16, sizeof(i16));
    printf("El tamaño de i32: %d es %lu\n", i32, sizeof(i32));
    printf("El tamaño de i64: %ld es %lu\n", i64, sizeof(i64));
    printf("El tamaño de ui8: %d es %lu\n", ui8, sizeof(ui8));
    printf("El tamaño de i16: %d es %lu\n", ui16, sizeof(ui16));
    printf("El tamaño de ui32: %d es %lu\n", ui32, sizeof(ui32));
    printf("El tamaño de i64: %ld es %lu\n", ui64, sizeof(ui64));
    return 0;
    
}