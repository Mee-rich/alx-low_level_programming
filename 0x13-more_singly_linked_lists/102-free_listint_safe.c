#include "lists.h"

/**
 * loop_count_listint - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t loop_count_listint(listint_t *head)
{
	listint_t *temp1, *temp2;
	size_t nodes_count = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	temp1 = head->next;
	temp2 = (head->next)->next;

	while (temp1)
	{
		if (temp1 == temp2)
		{
			temp1 = temp2;
			while (temp1 != temp2)
			{
				nodes_count++;
				temp1 = temp1->next;
				temp2 = temp2->next;
			}

			temp1 = temp1->next;
			while (temp1 != temp2)
			{
				nodes_count++;
				temp1 = temp1->next;
			}

			return (nodes_count);
		}

		temp1 = temp2->next;
		temp2 = (temp2->next)->next;
	}
	nodes_count++;

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t node_n, index;

	node_n = loop_count_listint(*h);

	if (node_n == 0)
	{
		for (; h != NULL && *h != NULL; node_n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < node_n; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (0);
}
