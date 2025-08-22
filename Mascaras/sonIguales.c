#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t a = 0x12FF;
    uint32_t b = 0xFF11;

    uint32_t maska = 0xFF00;
    uint32_t maskb = 0x00FF;

    uint32_t aHigh = (a & maska) >> 8;
    uint32_t bLow = b & maskb;
    printf("aHigh == bLow?: %d\n", aHigh==bLow);
    return 0;
 }