#include "main.h"
/**
 * _abs - compute absolute value of an integer
 * @n: integer value to be checked
 *
 * Return: n
 */

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * -1;
		return (a);
	}
	return (n);
}
