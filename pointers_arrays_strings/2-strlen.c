#include "./main.h"

/**
 * _strlen - says the length of the string variable
 *
 * @s: string variable
 *
 * Return: the leng of the string variable
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	return count;
}
