#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function pointer to print name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
