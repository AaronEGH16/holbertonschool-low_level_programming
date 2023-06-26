#include "./main.h"

/**
 * _strchr -
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	while (s[count] != '\0' && s[count] != c)
	{
		count++;
	}
	if (s[count] == c)
	{
		return (&s[count]);
	}
	return ('\0');
}
