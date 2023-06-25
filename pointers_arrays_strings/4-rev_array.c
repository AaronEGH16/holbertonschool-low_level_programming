#include "./main.h"

/**
 * reverse_array - Write a function that reverses the content of an array
 *
 * @a: array of integers to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int count, storage, lenght;

	count = 0;
	lenght = n - 1;

	while (count < lenght)
	{
		storage = a[count];
		a[count] = a[lenght];
		a[lenght] = storage;
		count++, n--;
	}
}
