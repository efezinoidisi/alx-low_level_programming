#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int c;

			c = a * b;
			if (c >= 0 && c <= 9)
			{
				if (b != 0 && b != 10)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (a != 10 && b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
