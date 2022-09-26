/**
 * _memset - fils memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Description: This function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*s = b;
		s++;
	}
	return (s);
}
