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

	a = n % 10;
	_putchar(a + '0');
	return (0);
}
