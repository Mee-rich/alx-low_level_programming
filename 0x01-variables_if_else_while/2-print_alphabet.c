#include<stdio.h>
#include<ctype.c>

/**
 * main - this programs prints alphabets in lower case
 *
 * You can only use the putchar
 *
 * Return: 0
 */

int main(void)
{
	int l ='a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	
	putchar("\n");

	return (0);
}
