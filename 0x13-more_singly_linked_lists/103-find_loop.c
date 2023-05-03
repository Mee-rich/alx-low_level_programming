#include "lists.h"

/**
 * find_listint_loop - finds the loop present
 *			in a listint_t list
 * @head: pointer to the listint_t list
 *
 * Return: if there is no loop - NULL
 *	otherwisw - address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp_1;

	temp = temp_1 = head;
	while (temp && temp_1 && temp_1->next)
	{
		temp = temp->next;
		temp_1 = temp_1->next->next;
		if (temp == temp_1)
		{
			temp = head;
			break;
		}
	}
	if (!temp || !temp_1 || !temp_1->next)
		return (NULL);
	while (temp != temp_1)
	{
		temp = temp->next;
		temp_1 = temp_1->next;
	}
	return (temp_1);
}
