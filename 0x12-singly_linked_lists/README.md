gist.h -> Header file

	/**Prototypes**/
* typedef struct list_s
	/*Description: singly linked list node structure*/
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

* size_t print_list(const list_t *h);

* size_t list_len(const list_t *h);

* list_t *add_node(list_t **head, const char *str);

* list_t *add_node_end(list_t **head, const char *str);

* void free_list(list_t *head);


 ****TASKS****
0. Print list 
1. List length 
2. Add node 
3. Add node at the end 
4. Free list 
5. The Hare and the Tortoise 
6. Real programmers can write assembly code in any language  

