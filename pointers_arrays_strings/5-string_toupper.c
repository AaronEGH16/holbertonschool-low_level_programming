#include "./main.h"

/**
 * string_toupper - change the lower casse to upper case
 *
 * @str: string to change
 *
 * Return: return changed string
 */

char *string_toupper(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l++;
	}

	return (str);
}
