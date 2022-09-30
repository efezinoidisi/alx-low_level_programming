#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int a, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		int num = atoi(argv[a]);
		int check_num = isdigit(num);

		if (check_num != 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
