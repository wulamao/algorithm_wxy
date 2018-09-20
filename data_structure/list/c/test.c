#include <stdio.h>
#include <stdlib.h>

#include "list.h"

typedef struct student
{
    int id;
    int age;
} student_t;


void print_data(void *data)
{
    student_t *stu = (student_t *)data;
    printf("%d\n", stu->id);
    printf("%d\n", stu->age);
}

int main(int argc, char const *argv[])
{
    student_t Tom;
    Tom.id = 0x07;
    Tom.age = 18;

    student_t Jerry;
    Jerry.id = 0x08;
    Jerry.age = 15;

    list_t *stu_queue = list_create();

    list_append_node(stu_queue, &Tom);
    list_append_node(stu_queue, &Jerry);
    list_append_node(stu_queue, &Tom);


    list_traversal(stu_queue, print_data);

    // list_t *p = stu_queue->next;
    // student_t *stu;
    // do
    // {
    //     stu = (student_t *)p->data;
    //     printf("%d\n", stu->id);
    //     printf("%d\n", stu->age);
    //     p = p->next;
    // }
    // while (p != NULL);


    return 0;
}


// gcc test.c list.c -o test
