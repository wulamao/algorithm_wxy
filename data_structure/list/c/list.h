

typedef struct _node
{
    void *data;
    struct _node *next;
} list_t;

list_t * list_create(void);
int list_insert_node(list_t *header , void *data);
