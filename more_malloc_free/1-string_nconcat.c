#include <stdlib.h>
#include "main.h"

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
 * string_nconcat - concatenate two strings (n amount of second) with malloc
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of spaces of second string
 *
 * Return:
 *	- NULL if an error has ocurred
 *	- pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int lenL = _strlen(s1);
	unsigned int lenR = _strlen(s2);
	unsigned int secure, x, y;

	if (lenR < n)
	{
		secure = lenR;
	}
	else
	{
		secure = n;
	}
	a = malloc(sizeof(char) * (lenL + secure + 1));
	if (!a)
	{
		return ('\0');
	}
	x = 0;
	y = 0;

	if (lenL != '\0')
	{
		for (; x < lenL; x++)
		{
			a[x] = s1[x];
		}
	}

	if (lenR != '\0')
	{
		for (; y < lenR; x++, y++)
		{
			a[x] = s2[y];
		}
	}
	a[x + 1] = '\0';
	return (a);
}
