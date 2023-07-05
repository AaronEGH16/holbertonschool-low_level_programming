#include <stdlib.h>
#include "./main.h"

/**
 * _strlen - get the lenght of string
 *
 * @st: string to get lenght
 *
 * Return: return the lenght
 */

int _strlen(char *st)
{
	int i = 0;

	if (!st)
	{
		return ('\0');
	}

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - duplicates the string in a new memory allocation
 *
 * @str: string to duplicate
 *
 * Return:
 *  - return a duplicated string
 *  - null if lenght is 0 or string is null
 */

char *_strdup(char *str)
{
	int lenght = _strlen(str) + 1;
	char *s;
	int i = 0;

	if (lenght == '\0' || lenght == 0)
	{
		return ('\0');
	}

	s = malloc(sizeof(char) * lenght);

	if (!s)
	{
		return ('\0');
	}

	while (i < lenght)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
