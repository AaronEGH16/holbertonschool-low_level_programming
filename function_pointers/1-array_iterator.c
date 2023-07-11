#include "function_pointers.h"

/**
 * array_iterator - print array content calling a function
 *
 * @array: array content
 * @size: size of the array
 * @action: function to print array content
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;
	if (action)
		if (array)
			for (a = 0; a < size; a++)
				action(array[a]);
}
