#include "./main.h"

/**
 * print_last_digit - get and print the last digit
 *
 * @n: number to check
 *
 * Return: returns the value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
