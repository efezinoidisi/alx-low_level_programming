#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		b = size - 1;
		while (b > a)
		{
			_putchar(' ');
			b--;
		}
		b = 0;
		while (b <= a)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
	}
}
