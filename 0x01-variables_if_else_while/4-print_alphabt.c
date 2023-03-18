#include<stdio.h>
#include<ctype.h>

/**
 * main - this function skips e and q
 *
 * Return:0
 */

int main(void)
{
	int lw = 'a';
	
	for (lw = 'a'; lw <= 'z'; lw++)
		if (lw = 'e' || lw = 'q')
			continue;
		putchar(lw);
	putchar("\n");
}
