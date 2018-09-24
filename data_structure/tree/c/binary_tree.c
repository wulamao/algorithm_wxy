#include <stdio.h>
#include <stdlib.h>

#include "binary_tree.h" //may recode by oop

binary_tree_t *binary_tree_new(void)
{
    binary_tree_t *root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    root->rchild = NULL;
    root->lchild = NULL;
    return root;
}
