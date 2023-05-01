#include "lists.h"

/**
 * pop_listint - function deletes the head of a listint_t linked list
 *  and returns the head node's data(n)
 * @head: pointer to listint_t
 *
 * Return: 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *head_del;
	int head_del_data;

	if (*head == NULL)
		return (0);

	head_del = *head;
	head_del_data = (*head)->n;
	*head = (*head)->next;
	free(head_del);
	return (head_del_data);
}
