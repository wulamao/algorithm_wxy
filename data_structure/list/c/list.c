#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list_t * list_create(void)
{
    list_t *header = (list_t *)malloc(sizeof(list_t));
    header->next = NULL;
    return header;
}


int list_append_node(list_t *header , void *data)
{
    list_t *p = header;
    if (header == NULL) return 0;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = (list_t *)malloc(sizeof(list_t));
    p->next->data = data;
    p->next->next = NULL;

    return 1;
}

int list_insert_node(list_t *header , int index, void *data)
{

}

int list_get_index(list_t *header, unsigned int index)
{

}

int list_delete_node(list_t *header, int order)
{

}

void list_traversal(list_t *header, cb_func_t func)// TODO: recode by iterator
{
    if (header == NULL) return;

    list_t *p = header->next;
    do
    {
        func(p->data);
        p = p->next;
    }
    while (p != NULL);
}

list_t * list_destroy(void)
{

}
