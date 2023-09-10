#include "search_algos.h"

/**
 *	print_list - aux function to print array
 *
 *	@array: array to print
 *	@low: low element of array to print
 *	@high: high element of array to print
*/

void print_list(int *array, size_t low, size_t high)
{
	size_t search;

	printf("Searching in array: ");
	for (search = low; search <= high; search++)
	{
		printf("%d", array[search]);
		if (search != high)
			printf(", ");
	}
	printf("\n");
}

/**
 *	binary_search - binary search style function
 *
 *	@array: pointer to first array element
 *	@size: size of array (amount of array elements)
 *	@value: value to search
 *
 *	Return: -1 or the first index of array where value are located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t attemp;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		print_list(array, low, high);

		attemp = (low + high) / 2;

		if (array[attemp] == value)
			return (attemp);
		else if (array[attemp] > value)
			high = attemp - 1;
		else
			low = attemp + 1;
	}
	return (-1);
}
