/**
 * get_bit - get value of a bit at given index
 * @n: number
 * @index: given index
 *
 * Return: value of bit at the given index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	num = n >> index;
	if (num)
		return (num & 1);
	return (-1);
}
