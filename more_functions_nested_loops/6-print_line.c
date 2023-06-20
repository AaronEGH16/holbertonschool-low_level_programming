#include "./main.h"

/**
 * print_line - print lines if "n" > 0 x"n"
 *
 * @n: number of lines
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
