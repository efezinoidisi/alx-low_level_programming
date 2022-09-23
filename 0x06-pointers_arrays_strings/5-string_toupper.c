/**
 * string_toupper - changes lowercase letters to uppercase
 * @src: string to be converted
 * Return: converted string
 */

char *string_toupper(char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		if ((*(src + a) >= 97) && (*(src + a) <= 122))
			*(src + a) = *(src + a) - 32;
	}
	return (src);
}
