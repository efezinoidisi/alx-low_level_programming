#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minumum value
 * @max: maximum value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max + 1));
	if (arr == NULL)
		return (NULL);
	for (; min <= max; min++)
		arr[min] = min;
	return (arr);
}
