#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = (n * -1) % 10;
	else
		a = n % 10;
	_putchar(a + '0');
	return (0);
}
