#include <unistd.h>

/**
 * _putchar - function that prints a content single character to the screen
 *
 * Return: return a result of the function
 *
 * @a_char: a char variable that serves as a parameter to the function
 */
int _putchar(char *a_char)
{
	return (write(1, &a_char, 1));
}
