#include "main.h"

/**
 * read_textfile - Function reads file print to stdout
 * @filename: pointer to text file to be read
 * @letters: number of letters it could read and print
 *
 * Return: the actual number of letters it could read and print
 * 	return 0, if file cannot be read or opened
 * 	if filename is NULL, return 0
 * 	if write faiuls or does not write 
 * 	the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

        char *buffer;
        ssize_t file_dir;
        ssize_t rec;
        ssize_t wr;


	buffer = malloc (sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file_dir = open(filename, O_RDONLY);
	
	if (file_dir == -1)
	{
		free(buffer);
		return (0);
	}

	rec = read(file_dir, buffer, letters);

	wr = write(STDOUT_FILENO, buffer, rec);

	free(buffer);
	close(file_dir);

	return (wr);
}


