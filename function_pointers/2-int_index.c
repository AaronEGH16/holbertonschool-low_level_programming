#include "function_pointers.h"

/**
 * int_index - compare array content and return values
 *
 * @array: array to search
 * @size: size of the array
 * @cmp: function to compare
 *
 * Return:
 *	- (-1):
 *		- if size is <= 0
 *		- cmp or array addres is null
 *		- not found any matches
 *	- (x) if found any matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (x = 0; x < size; x++)
		if (cmp(array[x]) != 0)
			return (x);

	return (-1);
}
