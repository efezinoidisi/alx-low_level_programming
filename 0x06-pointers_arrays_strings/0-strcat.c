/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: destination string to be appended
 * @src: source string to be added to dest
 *
 * Return: pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (dest[a] != '\0')
		a++;
	while ((dest[a++] = src[b++]) != '\0')
		;
	return (dest);
}
