#include "./main.h"

/**
 * _isalpha - check if c is letter
 *
 * @c: char to check
 *
 * Return: returns 0 if not is letter (lower or uper case)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
