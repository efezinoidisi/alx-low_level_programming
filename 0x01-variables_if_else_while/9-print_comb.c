#include <stdio.h>

/**
 * main - print possible combination of single digits
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	b = '9';
	for (a = '0'; a <= b ; a++)
	{
		putchar(a);
		if (a < b)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
