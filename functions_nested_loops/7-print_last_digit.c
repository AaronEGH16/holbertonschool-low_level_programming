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
	_putchar(n);
	return (n);
}
