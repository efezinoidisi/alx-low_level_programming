/**
 * _pow_recursion - find value of x raised to y
 * @x: integer number
 * @y: number of times
 *
 * Return: x raised to y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
