#include <stdio.h>
#include <stdlib.h>
/**
 * main - minimum number of coin for change
 *
 * coins: 25, 10, 5, 2, 1
 *
 * @argc: argument counter
 *
 * @argv: array of arguments
 *
 * Return: Always  0 (success)
*/
int main(int argc, char *argv[])
{
	int change = 0, n;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{ printf("0\n");
	return (0); }
	if (n >= 25)
	{ change = n / 25;
	n = n % 25; }
	if (n >= 10)
	{ change += n / 10;
	n = n % 10; }
	if (n >= 5)
	{ change += n / 5;
	n = n % 5; }
	if (n >= 2)
	{ change += n / 2;
	n = n % 2; }
	change += n;
	printf("%d\n", change);
return (0);

}
