#include <stdio.h>
#include "main.h"

/**
 * main - copies content of a file to another file
 * @ac: number of arguments
 * @av: arguments vector
 *
 * Return: 97 or 98  or 99 or 100
 */

int main(int ac, char **av)
{
	int fd_in, fd_out, n, m, size;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_in = open(av[1], O_RDONLY);
	if (fd_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_out = open(av[2], O_CREAT | O_WRONLY, 0664);

	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	size = read(fd_in, buffer, 1024);
	write(fd_out, buffer, size);
	n = close(fd_in);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_in);
		exit(100);
	}
	m = close(fd_out);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_out);
		exit(100);
	}
	return (0);
}
