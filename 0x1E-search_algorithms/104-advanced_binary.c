#include <stdio.h>
#include "search_algos.h"

/**
 * binary - searches for a value in an array of integers
 * @array: pointer to first element of the array
 * @low: starting index
 * @high: ending index
 * @value: value to search for
 *
 * description: using the binary search algorithm(recursion)
 * Return: first index where value is found or -1
 */

int binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	if (low > high)
		return (-1);

	print_array(array, low, high);
	if (array[mid] > value)
		return (binary(array, low, mid - 1, value));
	else if (array[mid] < value)
		return (binary(array, mid + 1, high, value));
	else
		return (mid);

}

/**
 * advanced_binary - searches for a value in an array of integers
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * description: using the binary search algorithm(recursion)
 * Return: first index where value is found or -1
 */



int advanced_binary(int *array, size_t size, int value)
{
	int result;

	if (!array)
		return (-1);

	result = binary(array, 0, size - 1, value);
	return (result);
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
