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
    const listint_t sum_node;
    listint_t temp = *head;

    for ( temp; temp != NULL; temp = temp->next) /*testing head for iteration*/
    {
        sum_node += head->n;
    }
    return (sum_node);
}