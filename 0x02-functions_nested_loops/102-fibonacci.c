#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c, d;

	b = 1;
	c = 2;
	for (a = 0; a < 50; a++)
	{
		printf("%d", b);
		if (a < 49)
		{
			putchar(',');
			putchar(' ');
		}
		d = b + c;
		b = c;
		c = d;
	}
	putchar('\n');
	return (0);
}
