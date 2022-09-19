#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int a, len, half;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	if (len % 2 != 0)
		half = ((len - 1) / 2) - 1;
	else
		half = len / 2;
	for (a = half; a < len; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
