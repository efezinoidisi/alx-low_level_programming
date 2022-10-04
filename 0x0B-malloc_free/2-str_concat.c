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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str_cat;
	unsigned int len1, len2, a, len, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;
	str_cat = malloc((len + 1) * sizeof(char));
	if (str_cat == NULL)
		return (NULL);
	for (a = 0; a < len1; a++)
		str_cat[a] = s1[a];

	for (b = 0; b < len; b++)
	{
		str_cat[a] = s2[b];
		a++;
	}
	str_cat[a + 1] = '\0';
	return (str_cat);
}
