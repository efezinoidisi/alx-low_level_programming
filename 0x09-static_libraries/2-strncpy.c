/**
 * _strncpy - copies a string
 * @dest: destination where string is copied
 * @src: source string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
