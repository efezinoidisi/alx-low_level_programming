#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char x;
	char y;

	x = 'z';
	y = '\n';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar(y);
	return (0);
}
