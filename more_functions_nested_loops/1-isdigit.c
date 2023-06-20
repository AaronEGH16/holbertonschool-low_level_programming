#include "./main.h"

/**
 * _isdigit - says if c is a digit
 *
 * @c: char ASCII value
 *
 * Return: 1 if c is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
