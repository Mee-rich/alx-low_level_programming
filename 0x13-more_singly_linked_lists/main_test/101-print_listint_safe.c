#include "lists.h"

size_t listint_t_count_node (const listint_t *head)
size_t print_listint_safe(const listint_t *head)
/**
 * listint_t_count_node - counts the number of none repeated nodes
 *@head: pointer to the linked list listint_t
 *@node_n: returns unique nodes in the looped listint_t list
 *
 * Returns: unique nodes, 0 on success 
*/
size_t listint_t_count_node (const listint_t *head)
{
	const listint_t *temp1, *temp2;
	size_t count = 0;
	if (head == NULL || head->next == NULL)
                return (98);

	temp1 = head->next;
        temp2 = head->next->next;
        while (temp2)
        {
               
    		if (temp1 == temp2)
                        {
                                temp1 = head;
                                while(temp1 != temp2)
                                {
                                        count++;
					temp1 = temp1->next;
					temp2 = temp2->next;
                                }
                                temp1 = temp1->next;
                                while (temp1 != temp2)
                                {
                                        temp1 = temp1->next;
                                        count++;
   				}
                                return(count);
                        }
		temp1 = temp1->next;
                temp2 = temp2->next->next;

        }
	count++;
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t listin safe mode.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t index = 0, node_count;

	node_count = listint_t_count_node(head);
	temp = head;
	if (node_count == 0)
	{
		for (;head != NULL; node_count++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}
	}
	else
	{
		for (index = 0; index < node_count ; index++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
	}
	return (0);
}

