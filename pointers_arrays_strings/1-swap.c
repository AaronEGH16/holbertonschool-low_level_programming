#include "./main.h"

/**
 * swap_int - swap two pointers values are pointing
 *
 * @a: pointer to value a
 * @b: pointer to value b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
