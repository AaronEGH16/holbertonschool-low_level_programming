#include "./main.h"

/**
 * _pow_recursion - x raised to the power of y
 *
 * @x: number
 * @y: exponent of x
 *
 * Return: if y is lower than 0 returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
