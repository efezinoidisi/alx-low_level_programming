#include <stddef.h>

/**
 * array_iterator - executes a function
 * @array: given array of integers
 * @size: size of the array
 * @action: pointer to function to be executed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	for (count = 0; count < size; count++)
		action(array[count]);
}
