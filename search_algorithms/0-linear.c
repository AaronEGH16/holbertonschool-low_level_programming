#include "search_algos.h"

/**
 *	linear_search - linear search style function
 *
 *	@array: pointer to first array element
 *	@size: size of array (amount of elements)
 *	@value: element to search
 *
 *	Return: -1 or the first index of array where value are located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t search = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (search < size && array[search] != value)
	{
		printf("Value checked array[%ld] = [%d]\n", search, array[search]);
		search++;
	}

	if (array[search] != value)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", search, array[search]);
	return (search);
}
