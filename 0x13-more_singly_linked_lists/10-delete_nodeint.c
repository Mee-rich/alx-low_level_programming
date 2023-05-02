#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 *	the node index of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node to be deleted, it starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *del_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		del_node = (*head)->next;
		free(*head);
		*head = del_node;
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del_node = temp->next;
	temp->next = del_node->next;
	free(del_node);
	return (1);
}
