#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list
 * @head: pointer to listint_t list
 *
 * Returns: a pointer to the first code of the reversed list
 *      not allowed to use more than one loop
 *      not allowed to use malloc, free or arrays
 *      only allowed to declare a maximum of two
 *      variables in your function
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1;
	listint_t *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	temp1 = NULL;
	while ((*head)->next != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
