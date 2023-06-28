#include "./main.h"

/**
 * is_prime_number - check if n is prime or not
 *
 * @n: number to check
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n > 1 && n % n == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
