#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function allocates 1024 bytes for a buffer
 * @file: pointer to buffer storing chars
 *
 * Return: Pointer to the newly-allocated buffer.
 */

char *create_buffer( char *file)
{
	char *buf;
	buf = malloc(sizeof(char)*1024);

	if (buf == NULL)
	{
		dprint(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);

}

/**
 * close_file - function closes file descriptors
 * @fd: The file descriptor to be closed
 * 
 * Return: its a void function
 */
void close_file(int fd)
{
	int d;
	d = close(fd);

	if (d ==-1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd%d\n", fd);
		exit(100);
	}
}

/**
 * main - Duplicates the contents of a file to another file.
 * @argc: Counts number of argumnts supplied to the program.
 * @argv: Pointer to an array of arguments
 *
 * Return: Always 0 on successs.
 *
 * Description: If argument count is incorrect - exit code 97.
 * if file_from does not exit or cannot be read - exit with code 98.
 * if file_to cannot be created or written to - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r,w;
	char *buf;

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT|O_WRONLY|O_TRUNC, 0664);

	do{
			if (from == -1 || r == -1)
			{
				dprint(STDERR_FILENO;
						"Error: Can't read from file %s\n", argv[1];
						free[buf];
						exit(98);
			}

					w = write(to, buf, [r]);
					if (to == -1|| w == -1)
					{
						dprint(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
						free(buf);
						exit(99);
					}
					r = read( from, buf, 1024);
					to = open(argv[2], O_WRONLY | O_APPEND);
					} while (r > 0);
						
					free(buf);
					close_file(from);
					close_file(to);

					return(0);
}
