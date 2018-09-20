#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list_t * list_create(void)
{
    list_t *header = (list_t *)malloc(sizeof(list_t));
    header->next = NULL;
    return header;
}


int list_insert_node(list_t *header , void *data)
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

int list_delete_node(list_t *header, int order)
{

}

void list_traversal(list_t *header)
{
    list_t *p = header;
    while (p->next != NULL)
    {
        printf("%x\n", p->data);
        p = p->next;
    }
}

list_t * list_destroy(void)
{

}
