#include "./main.h"

/**
 * factorial - factorize the number n
 *
 * @n: int to factorize
 *
 * Return: -1 to indicate error, else returns greater than 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
