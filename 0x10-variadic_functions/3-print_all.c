#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format string
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
