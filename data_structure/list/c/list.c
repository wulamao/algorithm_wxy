#include <stdio.h>
#include <stdlib.h>

#include "list.h" //may recode by oop

list_t * list_new(void)
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
    list_t *p = header;
   
    if (header == NULL) return 0;
    if (index <= 0) return 0;
    
    int i;
    for (i=1;i<index;i++)
    {
        if (p->next == NULL) break; // index > max
        p=p->next;
    }

    if (i == index)
    {
        list_t *new_p = (list_t *)malloc(sizeof(list_t));

        new_p->data = data;
        new_p->next = p->next;
        p->next = new_p;
    } 
    else
        return 0;
}

void *list_get_index(list_t *header, unsigned int index)
{
    list_t *p = header;
    if (header == NULL) return 0;
    if (index <= 0) return 0;

    int i;
    for (i=1;i<index;i++)
    {
        if (p->next == NULL) break; // index > max
        p=p->next;
    }

    if (i == index)
        return p->data;
    else
        return 0;
}

int list_delete_node(list_t *header, int index)
{
    list_t *p = header;
    if (header == NULL) return 0;
    if (index <= 0) return 0;

    int i;
    for (i=1;i<index;i++)
    {
        if (p->next == NULL) return 0; // index > max
        p=p->next;
    }

    p->next = p->next->next;
    free(p->next);
}

void list_traversal(list_t *header, cb_func_t func)// TODO: recode by iterator
{
    if (header == NULL || header->next == NULL) return;

    list_t *p = header->next;
    do
    {
        func(p->data);
        p = p->next;
    }
    while (p != NULL);
}

list_t *list_free(list_t *header)
{
    list_t *p = header;
    if (p->next != NULL)
        list_free(p->next);
    else
        free(p);
}
