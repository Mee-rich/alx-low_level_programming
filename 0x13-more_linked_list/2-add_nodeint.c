#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t
 * @head: pointer to the address of the first element in the list
 * @n: the element added to the listint_t list
 * 
 * Return: the address of a new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
    const listint_t node;
    listint_t *temp = **head;
    node = malloc(sizeof(listint_t));

    if (temp->next == NULL)
        return (NULL);

    node->n = n;
    node->next = temp;
    temp = node;

    return (node);
}