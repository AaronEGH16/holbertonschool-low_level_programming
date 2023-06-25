#include "./main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return 0 if two strings are equal or the diference between
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	while (s1[count] == s2[count])
	{
		count++;
	}

	if (s1[count] == s2[count])
	{
		return (0);
	}
	else
	{
		return (s1[count] - s2[count]);
	}
}
