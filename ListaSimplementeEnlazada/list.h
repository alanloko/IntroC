#include <stdio.h>
#include <stdint.h>


typedef struct nodo {
    struct nodo* next;
    int data;

} node_t;

typedef struct list {
    uint8_t size;
    node_t* first;
} list_t;


list_t* listNew();
void listAddFirst(list_t* l, int data);
void* listGet(list_t* l, uint8_t i); //se asume: i < l->size
void* listRemove(list_t* l, uint8_t i); //se asume: i < l->size
void listDelete(list_t* l);