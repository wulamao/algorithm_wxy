

typedef struct _node
{
    void *data;
    struct _node *next;
} list_t;

typedef void (* cb_func_t)(void *);

list_t * list_create(void);
int list_append_node(list_t *header, void *data);
void list_traversal(list_t *header, cb_func_t func);
