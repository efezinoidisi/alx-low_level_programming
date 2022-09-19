#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
