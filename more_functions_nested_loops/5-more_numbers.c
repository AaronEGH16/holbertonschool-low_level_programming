#include "./main.h"

/**
 * more_numbers - print numbers from 0 to 14 x10
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if ((y / 10) != 0)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
