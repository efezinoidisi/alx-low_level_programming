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
	unsigned int i = 0, j = 0;
	char *str;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i + 1] != '\0' && i == j && i != 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				j++;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				j++;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				j++;
				break;
			case 's':
				str = va_arg(args, char *);

				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				j++;
				break;
		}

		i++;
	}
	va_end(args);
	printf("\n");
}
