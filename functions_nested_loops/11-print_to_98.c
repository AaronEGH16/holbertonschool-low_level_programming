#include "./main.h"

/**
 * print_to_98 - print from N to 98
 *
 * @n: number to start count
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n / 10 != 0)
		{
			_putchar('0' + (n / 10));
		}
		_putchar('0' + (n % 10));
		if (n == 98)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
	for (; n >= 98; n--)
	{
		if (n / 10 != 0)
		{
			_putchar('0' + (n / 10));
		}
		_putchar('0' + (n % 10));
		if (n == 98)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
}
