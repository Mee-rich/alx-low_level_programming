#include "lists.h"

/**
 * listint_len - returns number of elemebts in a linked list
 * @h: pointer to the list
 * 
 * Return: Always 0 on success
*/

size_t listint_len(const listint_t *h)
{
    listint_t *temp = *h;
    size_t node_count = 0;

    while (head)
    {
        head = head->next;
        count++;
    }
    return (count);
}

