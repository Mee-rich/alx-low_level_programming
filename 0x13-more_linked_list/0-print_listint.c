#include "lists.h"

/**
 * size_t print_listint - prints all the elements of a linked list
 * @h: pointer to the list
 * 
 * Return:  the number of nodes
*/

size_t print_listint(const listint_t *h)
{
    size_t count = 0;
   const listint_t *temp = *h;
    

    while (temp != NULL)
    {
        printf("->%d\n", temp->n);
        temp = temp->next;
        count++;
    }

    return (count);
}

