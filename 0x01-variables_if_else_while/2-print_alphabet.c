#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char x;
	char y;

	x = 'a';
	y = '\n';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar(y);
	return (0);
}
