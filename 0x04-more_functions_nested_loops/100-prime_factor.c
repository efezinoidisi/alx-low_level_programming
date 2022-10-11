#include <stdio.h>

/**
 * main - print largest prime factor
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned int prime = 2;

	while (num >= (prime * prime))
	{
		if (num % prime == 0)
			num /= prime;
		else
			prime++;
	}
	printf("%lu\n", num);
	return (0);
}
