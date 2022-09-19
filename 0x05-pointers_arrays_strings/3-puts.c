#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int a;
	int len;

	len = _strlen(str);
	for (a = 0; a < len; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
