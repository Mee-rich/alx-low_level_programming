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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);
	buf = malloc(sizeof(char) *letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return(w);
}
