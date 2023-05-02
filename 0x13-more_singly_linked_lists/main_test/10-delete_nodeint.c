#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node index of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node to be deleted, it starts at 0
 * 
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp = *head;
    listint_t *del_node;
   unsigned int i = 0; 

    if (temp == NULL)
	    
        return (-1);

     if (index == 0)
    {
	    *head = (*head)->next;
	    free (temp);
	    return (1);
    }
       while ( i < (--index) && temp->next != NULL)
       {	temp = temp->next;
		i++;
       }

	del_node = temp->next;
        temp = del_node->next;

	free(del_node);
	return (1);
    
}
