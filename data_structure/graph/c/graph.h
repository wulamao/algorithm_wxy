

typedef struct _tree_node
{
    void *data; 
    struct _tree_node *child;
    struct _tree_node *next_brother;
} tree_t; // children-brother expression


tree_t *tree_new(void);