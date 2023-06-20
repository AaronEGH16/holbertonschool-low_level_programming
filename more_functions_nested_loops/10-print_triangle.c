#include "./main.h"

/**
 * print_triangle - print a triangle of size = size
 *
 * @size: size of the triangle
 */


void print_triangle(int size)
{
	int x, y, z;

	for (y = 0; y < size; y++)
	{
		for (x = (size - y); x > 0; x--)
		{
			_putchar(' ');
		}
		for (z = X; z > 0; z--)
		{
			_putchar('#');
		}
	}
}
