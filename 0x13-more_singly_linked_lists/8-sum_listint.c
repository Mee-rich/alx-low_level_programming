#include "lists.h"

/**
 *sum_listint - function that returns the sum of all the data (n) 
 *  of a listint_t linked list
 * @head: pointer to the listint_t list
 * 
 * Return: 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
    int sum_node = 0;
    listint_t *temp = head;

    while (temp)
    {
        sum_node += temp->n;
	temp = temp->next;
    }
    return (sum_node);
}
