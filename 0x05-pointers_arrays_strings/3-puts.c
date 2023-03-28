#include "holberton.h"



/**
 *
 * _puts - main function.
 *
 *  @str: Pointer with the address value.
 *
 *  Description: function that print a string on the stdout
 *
 * 
 *
 *  Return: none.
 *
 */

void _puts(char *str)

{

		while (*str != '\0')

				{

				_putchar(*str++);

					}
			_putchar('\n');

}


