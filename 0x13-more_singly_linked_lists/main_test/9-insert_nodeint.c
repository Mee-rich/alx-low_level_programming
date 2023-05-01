#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to the listint_t list
 * @idx: index where the new node should be added
 *      index starts at 0
 * @n: data of the node 
 * 
 * Return:0
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *insert_node;
    listint_t *temp = *head;
    unsigned int i;

    insert_node = malloc(sizeof(listint_t));
    insert_node->n = n;
    insert_node->next = NULL;
    

    if (temp == NULL)
        return (NULL);
    
    if (insert_node == NULL)
	    return (insert_node);

    else if (idx == 0)
    {   
        insert_node->next = temp;
        temp = insert_node;
	return (insert_node);
    }

    else
    {   
	 for (i = 0; i < --idx; i++)
	 {
		temp = temp->next;
	 }
	 insert_node->next = temp->next;
	 temp->next = insert_node;
    }

    return (insert_node);
}
