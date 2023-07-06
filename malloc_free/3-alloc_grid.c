#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - create a grid with a memory allocation
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return:
 *	- pointer to grid
 *	- NULL if an error has ocurred
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	a = malloc(sizeof(int) * ((width + 1) * (height + 1)));

	if (!a)
	{
		return ('\0');
	}

	x = 0;

	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			a[height][width] = 0;
			y++;
		}
		x++;
	}
	return (a);
}
