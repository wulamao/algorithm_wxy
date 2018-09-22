

typedef struct _node
{
    void *data; 
    unsigned int length;
    struct _node *next;
} list_t;

typedef void (* cb_func_t)(void *);

/*
    return new list pointer
*/
list_t * list_new(void);

/*
    arg header:
    arg data:
    return none
*/
void list_append_node(list_t *header, 
                        void *data);

/*
    arg header:
    arg data:
    return 
*/
int list_prepend_node(list_t *header, 
                        void *data);


/*
    arg header:
    arg func:
    no return 
*/
void list_traversal(list_t *header, 
                 cb_func_t func);

/*
    arg header:
    arg index:
    arg data:
    no return 
*/
int list_insert_node(list_t *header, 
                        int index, 
                       void *data);

/*
    arg header:
    arg index:
    no data 
*/
void *list_get_index(list_t *header, 
               unsigned int index);


int list_delete_node(list_t *header, int index);


void list_free(list_t **p);