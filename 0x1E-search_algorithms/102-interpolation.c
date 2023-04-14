#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * description: using the interpolation search algorithm
 * Return: first index where value is found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, pos, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) /
		      (array[high] - array[low])) * (value - array[low]));

	if (pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Valued checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	return (-1);
}

/**
 * print_array - print an array
 * @array: array to be printed
 * @start: index to start printing
 * @end: index to stop printing
 *
 * Return: Nothimg
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}
