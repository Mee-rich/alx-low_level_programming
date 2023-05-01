#include "lists.h"

/**
 * listint_len - returns number of elemebts in a linked list
 * @h: pointer to the list
 *
 * Return: Always 0 on success
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
