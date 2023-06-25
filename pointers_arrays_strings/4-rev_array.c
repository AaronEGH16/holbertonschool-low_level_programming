#include "./main.h"

/**
 * reverse_array - Write a function that reverses the content of an array
 *
 * @a: array of integers to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int count, storage;

	count = 0;

	while (count < n)
	{
		storage = a[count];
		a[count] = a[n];
		a[n] = storage;
		count++, n--;
	}
}
