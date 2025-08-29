#include <stdio.h>
#include "list.h"
#include <stdlib.h>

list_t *listNew()
{
    list_t *l = malloc(sizeof(list_t));
    l->size = 0;
    l->first = NULL;
    return l;
}
void listAddFirst(list_t *l, int data)
{
    node_t *n = malloc(sizeof(node_t));
    n->data = data;
    n->next = l->first;
    l->first = n;
    l->size++;
}
// se asume: i < l->size
int listGet(list_t *l, uint8_t i)
{
    node_t *n = l->first;
    for (uint8_t j = 0; j < i; j++)
        n = n->next;
    return n->data;
}
// se asume: i < l->size
int listRemove(list_t *l, uint8_t i)
{
    node_t *tmp = NULL;
    int data = 0;
    if (i == 0)
    {
        data = l->first->data;
        tmp = l->first;
        l->first = l->first->next;
    }
    else
    {
        node_t *n = l->first;
        for (uint8_t j = 0; j < i - 1; j++)
            n = n->next;
        data = n->next->data;
        tmp = n->next;
        n->next = n->next->next;
    }
    free(tmp);
    l->size--;
    return data;
}
void listDelete(list_t *l)
{
    node_t *n = l->first;
    while (n)
    {
        node_t *tmp = n;
        n = n->next;
        free(tmp);
    }
    free(l);
}

void listSwap(list_t *l, uint8_t i, uint8_t j) {
    if(l->first == NULL || l->first->next == NULL) return;
    node_t *antPrimero = l->first;
    for (uint8_t q = 0; q < i-1; q++)
        antPrimero = antPrimero->next;

    node_t *antSegundo = l->first;
    for (uint8_t q = 0; q < j-1; q++)
        antSegundo = antSegundo->next;

    node_t* primero = antPrimero->next;
    node_t* segundo = antSegundo->next;

    node_t* primeroNext = primero->next;
    node_t* segundoNext = segundo->next;

    primero->next = segundoNext;
    segundo->next = primeroNext;

    antPrimero->next = segundo;
    antSegundo->next = primero;
}
