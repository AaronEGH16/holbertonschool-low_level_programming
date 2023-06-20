#include "./main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 but dont print 2 and 4
 */

void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		_putchar(x);
	}
	_putchar('\n');
}
