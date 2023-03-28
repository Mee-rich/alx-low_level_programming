#include "main.h"
/**
*_puts - prints string to the screen and append new line
*@str: stored the address of string variable
*
*/
void _puts(char *str)
{

int word_count;

for (word_count = 0; str[word_count] != '\0'; word_count++)
{
_putchar(str[word_count]);
}
_putchar('\n');
}
