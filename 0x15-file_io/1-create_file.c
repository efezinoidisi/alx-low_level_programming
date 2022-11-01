#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = str_len(text_content);
	write(fd, text_content, len);
	close(fd);
	return (1);
}

/**
 * str_len - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

int str_len(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
