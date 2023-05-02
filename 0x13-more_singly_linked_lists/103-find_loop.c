#include "lists.h"

/**
 * find_listint_t_loop - finds the loop present 
 * 			in a listint_t list
 * @head: pointer to the listint_t list
 *
 * Return: if there is no loop - NULL
 * 		otherwisw - address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, temp_1;
	
	if (head == NULL || head->next == NULL)
		return (NULL);
	temp = head->next;
	temp_1 = head->next->next;

	while (temp_n)
	{
		if (temp = temp_1)
		{
			temp = head;
			while (temp != temp_n)
			{
				temp = temp->next;
				temp_1 = temp_1->next;
			}
			return (temp);
		}
		temp = temp =temp->next;
		temp_1 = temp_n->next->next;
	}
	return (NULL);
}
