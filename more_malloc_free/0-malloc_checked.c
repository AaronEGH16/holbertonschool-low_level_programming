#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check the new pointer to memory allocation
 *
 * @b: memory to pointer
 *
 * Return:
 *	- a pointer
 *
 * Exit:
 *	- normal process terminated in normal status 98
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (!a)
	{
		exit(98);
	}

	return (a);
}
