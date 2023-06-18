#include "./main.h"

/**
 * print_sign - check if N is greater, less or equal than 0
 *
 * @n: int to check
 *
 * Return: 1 if N is greater than 0, -1 if less than 0 and 0 if its equal
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
