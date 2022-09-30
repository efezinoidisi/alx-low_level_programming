#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
