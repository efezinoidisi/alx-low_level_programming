#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character
 *
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		arr[a] = c;
	arr[a + 1] = '\0';
	return (arr);
}
