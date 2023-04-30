#include "lists.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head, *new;
    listint_t hello = {8, NULL};
    size_t n;
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);


}