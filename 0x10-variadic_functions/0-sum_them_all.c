#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list para_list;

	if (n == 0)
		return (0);
	va_start(para_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(para_list, int);
	va_end(para_list);
	return (sum);
}
