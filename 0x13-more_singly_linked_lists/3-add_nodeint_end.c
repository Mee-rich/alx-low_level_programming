#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the listint_t list
 * @n: the integer added to the list
 * 
 * Return: the address of the elemrnt
 *  or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{   
    listint_t *node;
    listint_t *temp = *head;
    node = malloc(sizeof(listint_t)); /*assign memory to struct*/
    
   if (!node)
	   return (NULL);
	
   node->n = n;
   node->next = NULL;

   if (*head == NULL)
   {  
	   *head = node;
	return(node);  
   }
	else
	{
	       	while (temp->next != NULL)
	   {
	   	   temp = temp->next;
	   }
   		temp->next = node;
 
	}
   return (node);
}
