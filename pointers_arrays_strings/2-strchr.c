#include "./main.h"

/**
 * _strchr - find the address of the firs ocurrence and return it
 *
 * @s: string where the programs look
 * @c: character to find
 *
 * Return: return address to the firs ocurrence of c
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
