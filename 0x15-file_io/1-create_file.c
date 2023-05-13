#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: A pointer to name of the file to create
 * @text_content: A pointer to the string to wite to file
 *
 * Return: 1 on success, -1 on failure
 * 	if the file is NULL return -1
 * 	if text_content is NULL create empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, cnt = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		for(len = 0; text_content[cnt];)
			len++;
	}

	fd = open(filename, O_CREAT|O_RDWR|O_TRUNC, 0600);
	w = write (fd, text_content, cnt);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return(1);
}
