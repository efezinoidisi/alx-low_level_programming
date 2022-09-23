/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: capitaized string
 */

char *cap_string(char *str)
{
	int a, b;
	int sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*str >= 97 && *str <= 122)
		*str = *str - 32;
	for (a = 1; *(str + a) != '\0'; a++)
	{
		for (b = 0; b < 13; b++)
		{
			if (*(str + a) == sep[b])
			{
				if (*(str + (a + 1)) >= 97 && *(str + (a + 1)) <= 122)
					*(str + (a + 1)) = *(str + (a + 1)) - 32;
			}
		}
	}
	return (str);
}
