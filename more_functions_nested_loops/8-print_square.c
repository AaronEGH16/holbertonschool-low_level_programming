#include "./main.h"

/**
 * print_square - print a scuare of SIZE x SIZE
 *
 * @size: size of base x height
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
