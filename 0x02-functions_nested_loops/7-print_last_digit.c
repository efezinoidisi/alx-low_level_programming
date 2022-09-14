#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: number to be checked
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = (n * -1) % 10;

	a = n % 10;
	_putchar(a + '0');
	return (a);
}
