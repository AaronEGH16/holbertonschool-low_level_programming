#include "./main.h"

/**
 * print_diagonal - print diagonal wiht long = N
 *
 * @n: number of long
 */

void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
