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
    const listint_t *insert_node;
    listint_t *temp = head;
    insert_node = malloc(sizeof(listint_t));
    insert_node->n = n;
    insert_node->next = NULL;

    int i;

    if (head == NULL)
        return (NULL);
    
    if (idx < 0 || idx > listint_len(head))
        return (NULL);

    else if (idx == 0)
    {   
        insert_node->next = temp;
        temp = insert_node;
    }

    else
    {   
        /*the position where the new node is to be inserted*/
        temp = get_nodeint_at_index(idx);
        /*reassign insert_node->next to point to where temp->next is pointing */
        insert_node->next = temp->next;
         /* node is placed between temp and temp->next*/
        temp->next = insert_node;
    }

    return (insert_node);
}