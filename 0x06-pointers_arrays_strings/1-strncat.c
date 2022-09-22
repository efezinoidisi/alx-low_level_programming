/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Description: concatenate two strings using at most n bytes from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, a;

	len = 0;
	while (*(dest + len) != '\0')
		len++;
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[len + a] = src[a];
	dest[len + a] = '\0';
	return (dest);
}
