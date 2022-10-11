#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer number
 *
 * Return: Nothing
 */

void print_number(int n)
{
	if (n / 10 == 0)
	{
		_putchar(n + '0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
