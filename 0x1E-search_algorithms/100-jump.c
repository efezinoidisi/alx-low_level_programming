#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: using the jump search algorithm
 * Return: first index where value is found or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		if (value <= array[i])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			break;
		}
		if (array[i] > value)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;

		if (i + 1 == size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + step);
		prev = i;
		break;
		}
	}

	while (prev <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		if (prev > size)
			break;

		prev++;
	}

	return (-1);
}
