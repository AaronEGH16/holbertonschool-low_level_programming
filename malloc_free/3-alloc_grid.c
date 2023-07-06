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

	a = malloc(sizeof(int *) * height);

	if (!a)
	{
		return ('\0');
	}

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (!a[x])
		{
			for (x = 0; x <= x; x++)
			{
				free(a[x]);
			}
			free(a);
			return ('\0');
		}
		for (y = 0; y < width; y++)
		{
			a[x][y] = 0;
		}
	}
	return (a);
}
