#include <stdio.h>

/**
 * main - prints number of arguments passed to main
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
