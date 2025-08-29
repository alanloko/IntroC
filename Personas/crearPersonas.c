#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct persona
{
    char nombre[30];
    u_int8_t edad;

} persona_t;

persona_t *crearPersona(char *nombre, u_int8_t edad)
{
    persona_t *p = malloc(sizeof(persona_t));
    strcpy(p->nombre, nombre);
    p->edad = edad;
    return p;
}

void eliminarPersona(persona_t* p) {
    free(p);
}

int main(void)
{
    u_int8_t edad = 19;
    char nombre[30] = "alan";
    persona_t *p1 = crearPersona(nombre, edad);
    printf("nombre: %s, edad: %i\n", p1->nombre, p1->edad);
    eliminarPersona(p1);

}
