/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int b, len;
	char p;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	len--;
	for (b = 0; b < len; b++)
	{
		p = *(s + len);
		*(s + len) = *(s + b);
		*(s + b) = p;
		len--;
	}
}
