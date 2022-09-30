#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
		return (0);
	}
	printf("Error\n");
	return (1);
}
