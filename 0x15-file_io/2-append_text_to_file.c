#include "main.h"
#include <stddef.h>
/**
 * @str_len - string length counter
 * @str - pointer to string of file
 *
 * Return: string length 
 */
int str_len(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to _file - Function that appends 
 * 	text at the end of a file.
 * @filename: name of the file
 * @text_content:NULL terminated string to 
 * 	add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * 	Do not create file if it does not exist,
 * 	If filename is NULL return -1,
 * 	If text_content is NULL do not add to file,
 * 	Return 1 if the file existes and
 * 	-1 if the file does not exist  or not 
 * 	permitted to write to file.
 */
int append_text_to _text_file(const char *filename, char *text_content)
{
	int o_file, w_file;

	if (filename == NULL)
		return (-1);
	
	o_file = open(filename, O_WRONLY | O_APPEND);
	if (o_file != NULL)
	{
		w_file = write(o_file, text_content, str_len(text_content));
		if (w_file == -1)
		{
			close(file);
			return(-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
