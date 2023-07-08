#include <stdlib.h>
#include "main.h"

/**
 * array_range - create arry of numbers from min to max using malloc
 *
 * @min: min number of array
 * @max: max number of array
 *
 * Return:
 *	- Null if an error has ocurred
 *	- pointer to range array
 */

int *array_range(int min, int max)
{
	int *a, x;

	if (min > max)
	{
		return ('\0');
	}

	a = malloc(sizeof(int) * ((max - min) + 1));

	if (!a)
	{
		return ('\0');
	}

	for (x = 0; x < ((max - min) + 1); x++)
	{
		a[x] = min + x;
	}

	return (a);
}
