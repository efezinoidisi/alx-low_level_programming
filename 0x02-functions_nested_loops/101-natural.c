#include <stdio.h>

/**
 * natural_numbers - sum multiples
 *
 * Description: sum all of the multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int natural_numbers(void)
{
	int a, sum;

	sum = 0;
	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
