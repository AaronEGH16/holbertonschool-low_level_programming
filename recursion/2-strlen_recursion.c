#include "./main.h"

/**
 * _strlen_recursion - gets the lenght of the tring with recursion
 *
 * @s: string to find the lenght
 *
 * Return: returns the sum of chars to get the lenght
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
