#include "main.h"
#include <stddef.h>
#include <stdio.h>

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
	int file_dir, w, len = 0;

	if (filename == NULL)
		return(-1);
	

	file_dir = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	
	if (file_dir == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}
	
	w = write (file_dir, text_content, len);
	
	if (file_dir ==-1 || w == -1)
		return (-1);
		
	close(file_dir);
	return (1);
	
}
