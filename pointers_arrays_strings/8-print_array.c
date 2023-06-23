#include "./main.h"
#include <stdio.h>
/**
 * print_array - print all values from array
 *
 * @a: elements to print
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
