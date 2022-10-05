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
 * argstostr - concatenates all arguments passed
 * @ac: number of arguments
 * @av: arguments array
 *
 * Return: pointer to new string or NULL
 */

char *argstostr(int ac, char **av)
{
	char **str;
	unsigned int b;
	int a;

	if (ac == 0 || av == NULL)
		return (NULL);
	str = malloc(ac * sizeof(char *));
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		str[a] = malloc(_strlen(av[a]) * sizeof(char));
		if (str[a] == NULL)
		{
			for (b = 0; b < (unsigned int)a; b++)
				free(str[b]);
			free(str);
			return (NULL);
		}
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; b < _strlen(av[a]); b++)
			str[a][b] = av[a][b];
		str[a][b] = '\n';
		str[a][b +1] = '\0';
	}
	str[a] = '\0';
	return (*str);
}
