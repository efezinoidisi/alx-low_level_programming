#include <stdio.h>

/**
 * main - print comination of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if ((a + 1) != 8)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
	}
	putchar('\n');
	return (0);
}
