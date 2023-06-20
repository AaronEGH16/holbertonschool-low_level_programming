#include "./main.h"

/**
 * _isupper - says if C is upper
 *
 * @c: char
 *
 * Return: 1 if C is UPPER and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
