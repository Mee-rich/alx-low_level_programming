#include "lists.h"

/**
 * _nu - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @list: old list to append.
 * @siz: size of the new list ( always one node more than old list)
 * 
 * Return: points to new list
 */
listint_t **_nu(listint_t **list, size_t siz, listint_t *nod)
{
	listint_t **temp;
	size_t i;

		temp = malloc(siz * sizeof(listint_t *));
	if (temp == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < siz - 1; i++)
		temp[i] = list[i];

	temp[i] = nod;
	free(list);
	return (temp);
}
/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @head: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t **list = NULL;
	listint_t *temp_n;
	size_t i, count = 0;

	if (head == NULL || *head == NULL)
		return (count);
	while (*head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _nu(list, count, *head);
		temp_n = (*head)->next;
		free(*head);
		*head = temp_n;
	}
	free(list);
	return (count);
}
