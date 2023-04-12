#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - xcreates an array of chars
* @size: size of the array
* @c: contant to initialize
*
* Return: pointer to array
*/
char *create_array( int size, char c)
{
	char *s;
	int i;

	if (size == NULL)
		{return (NULL);}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL )
		{return (NULL);}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
return (s);
}
