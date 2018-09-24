


typedef struct _binary_tree_node
{
    void *data;
    struct _binary_tree_node *rchild;
    struct _binary_tree_node *lchild;
}binary_tree_t;

binary_tree_t *binary_tree_new(void);