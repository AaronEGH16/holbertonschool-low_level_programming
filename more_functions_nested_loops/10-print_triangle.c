#include "./main.h"

/**
 * print_triangle - print a triangle of size = size
 *
 * @size: size of the triangle
 */


void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = x; y < (size - 1); y++)
				_putchar(' ');
			for (z = y; size > z; z--)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
