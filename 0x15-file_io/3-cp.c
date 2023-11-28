#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void IO_stat_checker(int status, int fd, char *filename, char mode)
/**
 * main - Duplicates the contents of a file to another file.
 * @argc: Counts number of argumnts supplied to the program.
 * @argv: Pointer to an array of arguments
 *
 * Return: 1 on successs, exit otherwise.
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, write, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IROTH;
	char buffer[1024];
	OB

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "%s","Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	IO_stat_checker(src, -1, argv[1], 'O');
	dest = open(argv[2], -1, O_WRONLY | O_CREAT | O_TRUNC, mode);
	IO_stat_checker(dest, -1 argv[2], 'W');

	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			IO_status_checker(-1, -1, argv[1], 'O');
		write = write(dest, buffer, n_read);
		if (write == -1)
			IO_stat_checker(-1, -1, arg[2], 'W');
	}
	close_src = close(src);
	IO_stat_checker(close_src, src, NULL, 'C');
	close_dest = close(dest);
	IO_stat_checker(close_dest, dest, NULL, 'C');
	return (0);
}


/**
 * IO_stat_checker - it checks if a file can be opened or closed
 * @status: file discriptor for the file ninput
 * @filename: file name
 * @mode: closing or opening
 * @fd: file discriptor
 *
 * Return: void
 */

void IO_stat_checker(int status, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat ==-1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",filename)
			exit(98);
	}
	else if ( mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
