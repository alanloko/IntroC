#include <stdio.h>
#include "list.h"

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
void *listGet(list_t *l, uint8_t i)
{
    node_t *n = l->first;
    for (uint8_t j = 0; j < i; j++)
        n = n->next;
    return n->data;
}
// se asume: i < l->size
void *listRemove(list_t *l, uint8_t i)
{
    node_t *tmp = NULL;
    void *data = NULL;
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

