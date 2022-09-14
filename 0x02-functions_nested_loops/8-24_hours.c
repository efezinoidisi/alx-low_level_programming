#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	for (int a = 0; a <= 2; a++)
	{
		for (int b = 0; b <= 3; b++)
		{
			for (int c = 0; c <= 5; c++)
			{
				for (int d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}
