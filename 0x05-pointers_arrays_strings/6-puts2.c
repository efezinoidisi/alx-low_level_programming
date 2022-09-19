#include "main.h"

/**
 * puts2 - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int a;
	int len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	for (a = 0; a < len; a++)
	{
		if (a % 2 == 0)
			_putchar(*(str + a));
	}
	_putchar('\n');
}
