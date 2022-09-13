#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * @a loop counter
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
