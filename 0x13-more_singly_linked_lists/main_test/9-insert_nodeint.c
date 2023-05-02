#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node at a given position
 * @head: pointer to the listint_t list
 * @idx: index where the new node should be added
 *      index starts at 0
 * @n: data of the node
 *
 * Return:0
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insert_node;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	insert_node = malloc(sizeof(listint_t));
	if (insert_node == NULL)
		return (NULL);
	insert_node->n = n;
	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}
	insert_node->next = temp->next;
	temp->next = insert_node;

	return (insert_node);
}
