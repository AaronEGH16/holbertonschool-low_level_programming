#include "./main.h"

/**
 * _islower - says if c is lower or not
 *
 * @c: char to check
 *
 * Return: returns != 0 if is lower and == 0 if is´n lower
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
