#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, sum = 0, num;
	unsigned long i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{

		for (i = 0; i < strlen(argv[a]); i++)
		{
			if (isdigit(argv[a][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[a]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
