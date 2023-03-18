#include<stdio.h>
#include<ctype.h>

/**
 * main - this function prints out lower case and upper case
 *
 * Return:0
 */

int main(void)
{
	char lw;
	char up;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	
	putchar("\n");
	return(0);
}
