/**
 * _memset - a function taht fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int counter;

	for (counter = 0; n > 0; counter++)
	{
		s[counter] = b;
		n--;
	}
	return (s);
}
