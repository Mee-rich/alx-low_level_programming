#include<stdio.h>

/**
 * main - lowercase alphabets in reverse
 *
 * Return: 0
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw--)
		putchar(lw);

	putchar("\n");

	return(0);
}
