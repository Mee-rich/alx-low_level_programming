#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t to print
 *
 * Return: On success; number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

	return (n);
}
