/**
 *  _isdigit - checks for a digit
 * @c: character to be checked
 *
 * Return: 1 if successful or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
