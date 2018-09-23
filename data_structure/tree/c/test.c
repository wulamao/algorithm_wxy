#include <stdio.h>
#include <stdlib.h>

#include "list.h"

typedef struct student
{
    int id;
    int age;
} student_t;


void print_data(student_t *data)
{
    printf("%d\n", data->id);
    printf("%d\n", data->age);
}

void print_data_int(void *data)
{
    printf("%p %d\n", data,*(int *)data);
}


void recursion(int* n)
{
    if( *n > 0 )
    {
        *n -= 1;
        recursion(n);
    }
}

int main(int argc, char const *argv[])
{
    // student_t Tom;
    // Tom.id = 0x07;
    // Tom.age = 18;

    // student_t Jerry;
    // Jerry.id = 0x08;
    // Jerry.age = 15;

    // list_t *stu_queue = list_new();

    // list_append_node(stu_queue, &Tom);
    // list_append_node(stu_queue, &Jerry);
    // list_append_node(stu_queue, &Tom);
    // list_traversal(stu_queue, print_data);
    // list_free(stu_queue);

    int a0 = 0;
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int b0 = -1;
    int b1 = -2;

    list_t *int_queue = list_new();
    list_append_node(int_queue, &a0);
    list_append_node(int_queue, &a1);
    list_append_node(int_queue, &a2);
    list_append_node(int_queue, &a3);

    list_prepend_node(int_queue, &b0);
    list_prepend_node(int_queue, &b1);

    list_traversal(int_queue, print_data_int);

    printf("====\n");
    
    // unsigned int* temp;
    // temp = (int*)list_get_index(int_queue,1);
    // printf("%d\n", *temp);
    // temp = (unsigned int*)list_get_index(int_queue,2);
    // printf("%d\n", *temp);
    // temp = (unsigned int*)list_get_index(int_queue,3);
    // printf("%d\n", *temp);
    // temp = (unsigned int*)list_get_index(int_queue,4);
    // printf("%d\n", *temp);

    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");
    // list_delete_node(int_queue, 1);
    // list_traversal(int_queue, print_data_int);printf("====\n");

    list_free(&int_queue);
    // free(int_queue);int_queue = NULL;

    //list_traversal(int_queue, print_data_int);

    printf("%p\n", int_queue);

    // int aa = 5;
    // recursion(&aa);
    // printf("%d \n", aa);
    return 0;
}


// gcc test.c list.c -o test
