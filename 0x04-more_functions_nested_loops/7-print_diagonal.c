#include "main.h"

/**
 * print_diagonal - draws a straight line
 * @n: number of times to draw \
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		b = 0;
		while (b < n)
		{
			for (a = 0; a < b; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			b++;
		}
	} else
	{
		_putchar('\n');
	}
}
