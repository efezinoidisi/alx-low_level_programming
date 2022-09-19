#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int a;
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	for (a = len - 1; a >= 0; a--)
		_putchar(*(s + a));
	_putchar('\n');
}
