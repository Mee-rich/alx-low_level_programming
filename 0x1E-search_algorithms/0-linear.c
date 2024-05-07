#include "search_algos.h"

/**
 * linear_search - Search for a value in array using loinear search
 * @array: Pointer to the first element of the arrayto search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* Print the vslue being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* If founf */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
