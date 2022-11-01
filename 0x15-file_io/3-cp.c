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
	int fd_in, fd_out, n, m, size, count = 0;
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
	fd_out = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	if (fd_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	size = -1;
	while (size != 0)
	{
		size = read(fd_in, buffer, 1024);
		buffer[size] = '\0';
		count += write(fd_out, buffer, size);
		if (count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	n = close(fd_in);
	check_close_error(n, fd_in);
	m = close(fd_out);
	check_close_error(m, fd_out);
	return (0);
}


/**
 * check_close_error - check if a file descriptor can not close
 * @err: return value of close call
 * @fd: file descriptor value
 *
 * Return: Nothing
 */

void check_close_error(int err, int fd)
{
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
