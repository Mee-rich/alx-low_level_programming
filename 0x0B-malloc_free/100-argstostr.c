//#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * 
 * Return: Always 0.
*/
    char *argstostr(int ac, char **av)
{
	int i = 0, k = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (0);
	while (i < ac)
	{
	k = 0;
	while (av[i][k] != '\0')
	{
		count++;
		k++;
	}
	i++;
	}
	s = malloc((count + ac + 1) * sizeof(char));
	if (s == '\0')
	return (0);
	i = 0;
	count = 0;
	while (i < ac)
	{
		k = 0;
		while (av[i][k] != '\0')
		{
			s[count] = av[i][k];
			k++;
			count++;
		}
		s[count] = 10;
		count++;
		k++;
		i++;
	}
return (s);
}


/**
 * main - checks the code for ALX School students.
 * 
 * Return: Always 0
*/
// int main(int ac, char *av[])
// {
//     char *s;

//     s = argstostr(ac, av);
//     if (s == NULL)
//     {
//         return (1);
//     }
//     printf("%s", s);
//     free(s);
//     return (0);
// }