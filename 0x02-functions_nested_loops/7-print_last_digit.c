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

	a = n % 10;
	if (n < 0)
		a = a * -1;

	_putchar(a + '0');
	return (a);
}
