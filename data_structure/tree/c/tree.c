#include <stdio.h>
#include <stdlib.h>

#include "list.h" //may recode by oop

list_t * list_new(void)
{
    list_t *header = (list_t *)malloc(sizeof(list_t));
    header->next = NULL;
    return header;
}

int list_insert_node(list_t *header , int index, void *data)
{
    list_t *p = header;
   
    if (header == NULL) return 0;
    if (index <= 0) return 0;
    
    int i=1;
    while(i < index)
    {
        i++;
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


int list_prepend_node(list_t *header , void *data)
{
    return list_insert_node(header, 1, data);
}

void list_append_node(list_t *header , void *data)
{
    list_t *p = header;
    while(p->next != NULL)
    {
        p = p->next;
    }

    list_t *new_p = (list_t *)malloc(sizeof(list_t));
    new_p->data = data;
    new_p->next = NULL;
    p->next = new_p;

}

void *list_get_index(list_t *header, unsigned int index)
{
    if (header == NULL) goto exit;
    if (index <= 0) goto exit;

    list_t *p = header->next;

    int i=1;
    while(i < index)
    {
        i++;
        if (p->next == NULL) goto exit; // index > max
        p=p->next;
    }

    if (i == index)
        return p->data;
    
exit:
    return 0;
}

int list_delete_node(list_t *header, int index)
{
    list_t *p = header;
    if (header == NULL) goto exit;
    if (index <= 0) goto exit;

    int i;
    index -= 1;
    for (i=0;i<index;i++)
    {
        if (p->next == NULL) goto exit; // index > max
        p=p->next;
    }

    if (i == index)
    {
        list_t *p_temp = p->next;
        p->next = p->next->next;
        free(p_temp);
        p_temp = NULL;
    }

exit:
    return 0;
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


void list_free(list_t **p)
{
    if (*p != NULL)
    {
        list_free(&((*p)->next));
        free(*p);
        *p = NULL;
    }  
}
