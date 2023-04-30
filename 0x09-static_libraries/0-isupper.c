/**
 * _isupper - A function that changes if a character is uppercase
 * @c: a single char to check
 * Return: 0 for success and  1 uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
