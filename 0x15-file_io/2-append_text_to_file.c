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
int append_text_to _text_file(const char *filename, char *text_content)
{
	int of, wf, cnt = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[cnt];)
			len ++;
	}

	of = open(filename, O_WRONLY|O_APPEND);
	wf = write(of, text_content, len);

	if ( of == -1|| wf == -1 )
		return (-1);
	
	close(of);

	return(1);
}
