#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth 
 *  node of a listint_t linked list
 * @head: pointer to th listint_t list
 * @index: the index of the node, starting at 0
 * 
 * Return: NULL is node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    int i;
    listint_t *temp = *head;
    if (temp == NULL)
        return (NULL);

    for (i = 0; i != index; i++ )
    {
        while (temp != NULL)
            temp = temp->next;
    }
    return (head);
}