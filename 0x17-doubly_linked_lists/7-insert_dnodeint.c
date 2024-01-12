#include "lists.h"

/**
 * insert_dnodeint_at_index - functions that inserts a
 * 		node at a given position in a dlistint_t list
 * @h: pointer to the list
 * @idx: position to add the node
 * @n: data for the new node
 *
 * Return: the address of the new node, or (NULL) if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux_node = *h, *new_node;
	unsigned int num = 0;
	unsigned int ind;

	/* creating new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}

	ind = idx - 1;
	while (aux_node && num != ind)
	{
		num++;
		aux_node = aux_node->next;
	}

	if (num == ind && aux_node)
	{
		new_node->prev = aux_node;
		new_node->next = aux_node->next;
		if (aux_node->next)
			aux_node->next->prev = new_node;
		aux_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
