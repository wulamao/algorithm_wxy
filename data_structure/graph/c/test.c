#include <stdio.h>
#include <stdlib.h>

#include "tree.h"
#include "binary_tree.h"

 
int main(int argc, char const *argv[])
{
    tree_t *firmiana = tree_new();
    tree_t *node = (tree_t *)malloc(sizeof(tree_t));
    int arg = 3;

    firmiana->child = node;
    node->data = &arg;

    printf("%p %d\n", firmiana, *(int *)firmiana->child->data);

    binary_tree_t *willow = binary_tree_new();

    printf("%p\n", willow);




    return 0;
}


// gcc test.c tree.c binary_tree.c -o test
