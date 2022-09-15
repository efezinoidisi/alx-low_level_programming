#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 *
 * Description: print fizz for multiples of 3,
 * print Buzz for multiples of 5 and print FizzBuzz for multiples
 * of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
