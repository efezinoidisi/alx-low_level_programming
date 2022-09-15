#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times
 *
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a, b, c;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
