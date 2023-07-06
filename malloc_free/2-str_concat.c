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
 * str_concat - concatenates a 2 strings in a new memory allocation
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return:
 *	- Null if two strings are null or not have a memory free
 *	- pointer to a concatenated string memory
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int lenL = _strlen(s1);
	int lenR = _strlen(s2);
	int lenght = 1;
	int x, y;

	if ((lenL != '\0' || lenL != 0) || (lenR != '\0' || lenR != 0))
	{
		lenght += lenL + lenR;
	}

	s = malloc(sizeof(char) * lenght);
	x = 0;
	y = 0;

	if (!s)
	{
		return ('\0');
	}

	if (lenL != '\0' || lenL != 0)
	{
		while (x < lenL)
		{
			s[x] = s1[x];
			x++;
		}
	}
	if (lenR != '\0' || lenR != 0)
	{
		while (y < lenR)
		{
			s[x] = s2[y];
			x++, y++;
		}
	}
	s[x] = '\0';
	return (s);
}
