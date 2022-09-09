#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check sign of a random number
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%u\n", n);
	else
		printf("%d\n", n);
	return (0);
}
