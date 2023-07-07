#include <stdlib.h>
#include "main.h"

/**
 * _calloc - create a initialized array on memory (initialized with 0)
 *
 * @nmemb: number of array slots
 * @size: size of array slots
 *
 * Return:
 *	- Null if an error has ocurred
 *	- pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *a;
	char *b;

	if (nmemb <= 0 || size <= 0)
	{
		return ('\0');
	}

	a = malloc(size * nmemb);

	if (!a)
	{
		return ('\0');
	}

	b = a;

	for (x = 0; x < (nmemb * size); x++)
	{
		b[x] = '\0';
	}

	return (a);
}
