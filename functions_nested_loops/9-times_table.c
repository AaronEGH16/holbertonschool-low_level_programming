#include "./main.h"

/**
 * times_table - print multiplication table
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar('0' + ((y * x) / 10));
			_putchar('0' + ((y * x) % 10));
			if (y == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
