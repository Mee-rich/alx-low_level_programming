#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly inked list
 * @n: Integer
 * @index: Pointer to the next node
 * @next: Pointer to the next node
 * Description: Singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/**
 * struct skiplist_s - A sigly list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: A pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;


/* Mandatory Task */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* Advanced Task */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /* __SEARCH_ALGOS_H__ */
