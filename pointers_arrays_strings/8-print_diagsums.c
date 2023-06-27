#include "./main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals of the square
 *
 * @a: the square to sum
 * @size: the size of the square
 */

void print_diagsums(int *a, int size)
{
	int c, i;
	int result1 = 0;
	int result2 = 0;

	for (c = 0; c < size; c++)
	{
		i = (c * size) + c;
		result1 += a[i];
	}

	for (c = 1; c <= size; c++)
	{
		i = (c * size) - c;
		result2 += a[i];
	}
	printf("%d, %d", result1, result2);
}
