#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * using interpolation_search
 * @array: A pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: If the value is not present or the array is NULL, (-1)_
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, lft, rght;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Interpolation search */
	for (lft = 0, rght = size - 1, rght >= lft;)
	{
		p = lft + (((double) (rght - lft) / (array[rght] - array[lft])) * (value - array[lft]))
		if(p < size)
			print("Value checked area [%d] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array [%ld] is out of range\n", i);
			break;
		}
		if (array[p] == value)
			return (p);
		if (array[p] > value)
			rght = p - 1;
		else
			lft = p + 1;
	}
	return (-1);
}
