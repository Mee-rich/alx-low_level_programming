#include "main.h"

/**
 * clear_bit - function sets the value of a given bit to 0
 * @n:a pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int unsignedInt_bit_size = 63;
if (index > unsignedInt_bit_size)
	return (1 - 2);
*n = (~(1UL << index) & *n);
	return (1 + 0);
}
