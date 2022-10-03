#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @str: string
 *
 * Return: length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int a;

	for (a = 0; *str != '\0'; a++)
		str++;
	return (a);
}


/**
 * _strdup - copies a string
 * @str: original string
 *
 * Return: pointer to copy of string or NULL
 */

char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int a, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	str_cpy = malloc((len + 1) * sizeof(char));
	if (str_cpy == NULL)
		return (NULL);
	for (a = 0; a < len; a++)
		str_cpy[a] = str[a];
	str_cpy[a + 1] = '\0';
	return (str_cpy);
}
