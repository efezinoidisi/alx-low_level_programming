#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * description: using the binary search algorithm
 * Return: first index where value is found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;
	mid = (start + end) / 2;

	while (start < end)
	{
		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;

		mid = (start + end) / 2;
	}

	print_array(array, start, end);

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
