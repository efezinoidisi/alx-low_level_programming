#include <stdio.h>
/**
 * reverse_array - reverses the an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int b, c, tmp;

	c = n - 1;
	for (b = 0; b < c; b++)
	{
		tmp = a[b];
		a[b] = a[c];
		a[c] = tmp;
		c--;
	}
}
