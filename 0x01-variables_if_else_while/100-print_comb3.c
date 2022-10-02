#include <stdio.h>

/**
 * main - print possible combination of double digits
 *
 * Return: 0
 */

int main(void)
{
	int a, c;

	for (a = 0; a < 10; a++)
	{
		c = a + 1;
		while (c <= 9)
		{
			putchar(a + '0');
			putchar(c + '0');
			if ((a + 1) != 9)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
	}
	putchar('\n');
	return (0);
}
