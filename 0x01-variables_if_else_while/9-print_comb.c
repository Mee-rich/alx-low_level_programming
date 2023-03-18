#include<stdio.h>

/**
 * main - Numbers followed by comma and space
 *
 * Return: 0
 */

int main (void)
{
	int num = 0;

	while (num < 10)
		putchar("%d, ", num++);
	
	putchar("\n");
	
	return (0);
}
