#include "./main.h"

/**
 * cap_string - capitalize all words of the string
 *
 * @str: string to capitalize
 *
 * Return: return a capitalized string
 */

char *cap_string(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			if (count == 0 ||
					str[count - 1] == ' ' || str[count - 1] == '\t' ||
					str[count - 1] == '\n' || str[count - 1] == ',' ||
					str[count - 1] == ';' || str[count - 1] == '.' ||
					str[count - 1] == '!' || str[count - 1] == '?' ||
					str[count - 1] == '"' || str[count - 1] == '(' ||
					str[count - 1] == ')' || str[count - 1] == '{' ||
					str[count - 1] == '}' ||)
			{
				str[count] -= 32;
			}
		}
		count++;
	}
	/* - 32 to uppercasse*/
	return (str);
}
