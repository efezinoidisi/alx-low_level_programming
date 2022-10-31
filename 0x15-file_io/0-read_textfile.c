#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the text file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, count, countp;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	count = read(fd, buffer, letters);
	buffer[letters] = '\0';
	countp = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	if (countp != count)
		return (0);
	close(fd);
	return (count);
}
