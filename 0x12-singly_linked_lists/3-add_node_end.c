#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails;  NULL.
 *         Otherwise;  the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *add;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	add = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_node->str = add;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
last_node->next = new_node;
	}

	return (*head);
}
