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
 * get_size - calculate the total length of strings
 * @ac: number of arguments
 * @av: argument vector
 *
 * Return: total length
 */

unsigned int get_size(int ac, char **av)
{
	unsigned int len = 0;
	int i;

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	return (len);
}

/**
 * argstostr - concatenates all arguments passed
 * @ac: number of arguments
 * @av: arguments array
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int j, k = 0;
	int total;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = get_size(ac, av);
	str = malloc(sizeof(char) * (total + ac + ac));
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		int len, i;

		len = _strlen(av[j]);
		for (i = 0; i < len; i++)
		{
			str[k] = av[j][i];
		}
		str[k++] = '\n';
		str[k] = '\0';
	}
	return (str);
}
