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

void print_data_int(int *data)
{
    printf("%d\n", data);
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


    int int1 = 0;
    int insert = 3;
    list_t *int_queue = list_new();
    list_append_node(int_queue, 0);

    // int to pointer
    list_insert_node(int_queue, 2, 1);
    list_insert_node(int_queue, 3, 2);
    list_insert_node(int_queue, 4, 3);
    list_insert_node(int_queue, 5, 4);

    list_traversal(int_queue, print_data_int);
 
    int temp;
    temp = (int)list_get_index(int_queue,1);
    printf("====\n%d\n", temp);
    temp = (int)list_get_index(int_queue,2);
    printf("%d\n", temp);
    temp = (int)list_get_index(int_queue,3);
    printf("%d\n", temp);
    temp = (int)list_get_index(int_queue,4);
    printf("%d\n", temp);

    
    list_free(int_queue);

    return 0;
}


// gcc test.c list.c -o test
