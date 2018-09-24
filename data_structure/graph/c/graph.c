#include <stdio.h>
#include <stdlib.h>

#include "tree.h" //may recode by oop

tree_t *tree_new(void)
{
    tree_t *root = (tree_t *)malloc(sizeof(tree_t));
    root->child = NULL;
    root->next_brother = NULL;
    return root;
}

