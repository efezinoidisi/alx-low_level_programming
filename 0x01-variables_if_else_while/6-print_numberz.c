#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = '0'; x < ':'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
