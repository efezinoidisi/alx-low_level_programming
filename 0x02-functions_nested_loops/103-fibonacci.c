#include <stdio.h>

/**
 * main - sum even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned long b, c, d, sum;

	b = 1;
	c = 2;
	sum = 0;
	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum = sum + b;
		d = b + c;
		b = c;
		c = d;
	}
	printf("%lu\n", sum);
	return (0);
}
