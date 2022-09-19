#include <stdio.h>

/**
 * main - print possible combination of double digits
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	b = '9';
	for (a = '0'; a < b ; ++a)
	{
		for (c = a; c <= b ; c++)
		{
			if (a != c)
			{
				putchar(a);
				putchar(c);
				if (a < c)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
