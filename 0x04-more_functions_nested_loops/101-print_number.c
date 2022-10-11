#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer number
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value *= -1;
	}
	if (value / 10 == 0)
	{
		_putchar(value + '0');
		return;
	}
	print_number(value / 10);
	_putchar((value % 10) + '0');
}
