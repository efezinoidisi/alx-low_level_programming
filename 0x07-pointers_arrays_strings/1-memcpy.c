/**
 * _memcpy - copies a memory area
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 *
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);
	return (dest);
}
