#include "lists.h"

/**
 * pop_listint - function deletes the head of a listint_t linked list
 *  and returns the head node's data(n)
 * @head: pointer to listint_t
 * 
 * Return: 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
    const listint_t *head_del;
    listint_t *temp = **head;

    if (temp == NULL)
        return (0);

    head_del = temp;
    temp = temp->next;
    free(head_del);
    
    return (head);
}