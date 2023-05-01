#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: pointer to head of list list_t
 * @str: string to be added
 *
 * Return: string length on success
 */

list_t *add_node(list_t **head, const char *str)
{
	char *add;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	add = strdup(str);
	if (add == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = add;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
