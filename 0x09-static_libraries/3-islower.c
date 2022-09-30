/**
 * _islower - checks for lowercase character
 *@c: character to be checked
 *
 * Return: 1 if true or 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
