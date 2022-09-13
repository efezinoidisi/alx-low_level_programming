#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * @a loop counter
 * @b first loop counter
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	a = 'a';
	b = 0;
	while (b < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
		a = 'a';
	}
}
