/**
 * _strcat - a function that concatenates two strings
 * @dest: a pointer variable to the first string
 * @src: a pointer variable to concatenate
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	int j;

	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[counter] = src[j];
		counter++;
		j++;
	}

	dest[counter] = '\0';
	return (dest);
}
