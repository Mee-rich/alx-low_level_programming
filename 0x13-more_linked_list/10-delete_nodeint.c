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
    listint_t *temp = head;
    listint_t *del_node;

    int i;

    if (temp == NULL)
        return (-1);
    else
    {   
        temp = get_nodeint_at_index();/*temp = returned head->next position */
        del_node = temp;
        temp = temp->next;
        del_node = NULL;
    }

    return (1);
}