#include "lists.h"

/**
 * free_listint - fuction that frees a listint_t list
 * @head: pointer to listint_t list
 *
 * Return: Free the listint_t list on success
*/

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *traverse;

	while (temp != NULL) /*check if the head is not null*/
	{
		/*traverse the list and save head to temp*/
		traverse = temp;
		temp = temp->next;
		free(traverse); /*free each non empty node*/
	}
}
