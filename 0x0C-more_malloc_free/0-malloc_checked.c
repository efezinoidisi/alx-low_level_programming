#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of elements
 *
 * Return: pointer to allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(mem) * b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
