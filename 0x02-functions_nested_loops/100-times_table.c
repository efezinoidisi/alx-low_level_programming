#include "main.h"
/**
 * print2 - print two digit numbers
 * @c: number
 *
 * Return: Nothing
 */

void print2(int c)
{
	if (c < 100)
		_putchar(' ');
	_putchar(c / 10 + '0');
	_putchar(c % 10 + '0');
}

/**
 * print3 - prints three digit numbers
 * @c: number
 *
 * Return: Nothing
 */

void print3(int c)
{
	int x;

	x = c % 10;
	_putchar(c / 100 + '0');
	c /= 10;
	_putchar(c % 10 + '0');
	_putchar(x + '0');
}

/**
 * print_times_table - prints the n times table
 * @n: the times table to be printed
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c >= 0 && c <= 9)
			{
				if (b != 0 && b != (n + 1))
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			else if (c > 9 && c < 100)
			{
				print2(c);
			}
			else
			{
				print3(c);
			}
			if (a != (n + 1) && b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
