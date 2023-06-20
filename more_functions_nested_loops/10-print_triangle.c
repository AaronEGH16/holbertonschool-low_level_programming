#include "./main.h"

/**
 * print_triangle - print a triangle of size = size
 *
 * @size: size of the triangle
 */


void print_triangle(int size)
{
	int x, y;
	
	for (y = 0; y < size; y++)
	{
		for (x = (size - y); x > 0; x--)
		{
			_putchar(' ');
		}
		_putchar('#');
	}
}
