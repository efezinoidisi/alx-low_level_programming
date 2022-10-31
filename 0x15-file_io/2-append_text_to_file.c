#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: string to append
 *
 * Return: 1 on success or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || filename == NULL)
		return (-1);

	if (text_content)
	{
		len = str_len(text_content);
		write(fd, text_content, len);
	}
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
