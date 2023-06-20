#include "./main.h"

/**
 * print_diagonal - print diagonal wiht long = N
 *
 * @n: number of long
 */

void print_diagonal(int n)
{
	int x, y;

	y = 0;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			y++;
		}
	}
	_putchar('\n');
}
