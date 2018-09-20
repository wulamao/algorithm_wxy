#include <stdio.h>
#include <stdlib.h>

#include "list.h"

typedef struct student
{
    int id;
    int age;
} student_t;

int main(int argc, char const *argv[])
{
    student_t Tom;
    Tom.id = 0x07;
    Tom.age = 18;

    list_t *stu_queue = list_create();
    list_insert_node(stu_queue, &Tom);
    printf("%d\n", ((student_t *)(stu_queue->next->data))->id);
    list_traversal(stu_queue);

    return 0;
}


// gcc test.c list.c -o test
