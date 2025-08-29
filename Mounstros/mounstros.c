#include <stdio.h>

#define NAME_LEN 50

typedef struct
{
    char nombre[NAME_LEN];
    int vida;
    double ataque;
    double defensa;
} mounstros;

mounstros evolucion(mounstros mounstro1)
{
    mounstros mounstro = mounstro1;
    mounstro.ataque += 10;
    mounstro.defensa += 10;
    return mounstro;
}

struct alumno3
{
    char *nombre;
    int dni;
    char comision;
} ;

int main()
{
    mounstros halpe = {"halpe", 10, 0, 0};
    mounstros alanloko = evolucion(halpe);
    printf("ataque %f", alanloko.ataque);
    return 0;
}
