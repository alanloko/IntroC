#include <stdio.h>
#include <stdlib.h>


int main() {
    int dados[6] = {0};
    int dado;
    for(int i = 0; i < 60000000; i++) {
        dado = rand() % 6;
        dados[dado] += 1;
    }
    for(int i = 0; i < 6; i++) {
        printf("Dado %d, tiradas: %d\n",i + 1, dados[i]);
    }
    return 0;
}