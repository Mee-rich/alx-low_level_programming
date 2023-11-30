#include "main.h"
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
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, len = 0;

	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}
	
	o_file = open(filename, O_WRONLY | O_APPEND);
	w_file = write(o_file, text_content, len);

	if (o_file == -1 || w_file == -1)
		return (-1);
	
	close (o_file);
	return (1);
}
