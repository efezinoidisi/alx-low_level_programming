/**
 * _strcpy - duplicates a string
 * @dest: copy of original string
 * @src: original string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, len;

	len = 0;
	while (*(src + len) != '\0')
		len++;
	for (a = 0; a < len; a++)
	{
		dest[a] = *(src + a);
	}
	return (dest);
}
