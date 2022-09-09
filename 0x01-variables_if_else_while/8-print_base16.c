#include <stdio.h>

/**
 * main - prints all base 16 numbers
 *
 * Return: 0
 */

int main(void)
{
	int x;
	char z;

	x = '0';
	z = 'a';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
