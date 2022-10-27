/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * _pow - raise a number to a given power
 * @num: number
 * @times: power to raise number
 *
 * Return: number raised by power
 */

unsigned int _pow(unsigned int num, unsigned int times)
{
	unsigned int result = num, i;

	if (times == 0)
	{
		result = 1;
	}
	else if (times == 1)
	{
		result = num;
	}
	else
	{
		for (i = 1; i < times; i++)
			result *= num;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: number to convert stored as string
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i, len, power, num;

	if (!b)
		return (0);
	len = _strlen(b);
	power = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			power--;
			continue;
		}
		else if (b[i] == '1')
		{
			num = _pow(2, power);
			result += num;
			power--;
		}
		else
		{
			result = 0;
			break;
		}
	}
	return (result);
}
