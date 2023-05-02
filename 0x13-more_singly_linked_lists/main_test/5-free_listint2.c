#include "lists.h"

/**
 * free_listint2 - fuction that frees a listint_t list
 * @head: pointer to listint_t list
 *
 * Return: Free the listint_t list on success
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head) /*check if the head is not null*/
	{
		/*traverse the list and save head to temp*/
		temp = (*head)->next;
		free(*head); /*free each non empty node*/
		*head = temp;
	}
	head = NULL;
}
