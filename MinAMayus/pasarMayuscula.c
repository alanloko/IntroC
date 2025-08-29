#include <stdio.h>

#define Diff 'A' - 'a'

void pasarMayus(char *frase)
{

    while (*frase != '\0')
    {
        if (*frase >= 'a' && *frase <= 'z')
        {
            *frase = *frase + Diff;
        }
        frase++;
    }
}

int main(void)
{
    char c[30];
    printf("inputea un string de menos de 30 caracteres: ");
    scanf("%s", c);
    pasarMayus(c);
    printf("%s\n", c);
    return 0;
}
