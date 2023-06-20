#include "./main.h"

/**
 * print_times_table - print multiplication table of n
 * aux - aux function
 *
 * @n: value of the multiplication table
 */

void print_times_table(int n)
{
	int x, y;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				aux(y);
				_putchar('0' + ((y * x) % 10));
				if (y == n)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

void aux(int y)
{
	if (y != 0)
	{
		if (((y * x) / 100) == 0)
		{
			_putchar(' ');
		}
		else if (((y * x) / 100) != 0)
		{
			_putchar('0' + (((y * x) / 100)));
		}

		if (((y * x) / 10) == 0)
		{
			_putchar(' ');
		}
		else if (((y * x) / 10) != 0)
		{
			_putchar('0' + (((y * x) % 100) / 10));
		}
	}
}
