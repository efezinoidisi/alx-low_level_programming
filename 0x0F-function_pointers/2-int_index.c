#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: index of integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
