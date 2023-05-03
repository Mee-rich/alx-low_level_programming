#include "lists.h"

/**
 * _n - reallocates memory for an array of pointers
 * @list: pointer to the linked list listint_t
 * @nod: returns unique nodes in the looped listint_t list
 * @siz: size of new list
 *
 * Return: new list pointer
*/
const listint_t **_n(const listint_t **list, size_t siz, const listint_t *nod)
{
	const listint_t **temp;
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
 * print_listint_safe - Prints a listint_t listin safe mode.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	size_t index = 0, i;

	while (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (index);
			}
		}
		index++;
		list = _n(list, index, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (0);
}

