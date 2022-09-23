/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int a, b;
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enc[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(str + a) != '\0'; a++)
	{
		for (b = 0; b < 53; b++)
		{
			if (*(str + a) == let[b])
			{
				*(str + a) = enc[b];
				break;
			}
		}
	}
	return (str);
}
