/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character
 *
 * Return: pointer to first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
