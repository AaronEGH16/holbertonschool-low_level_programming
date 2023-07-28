#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - get a binary string and convert in to unsigned int
 *
 * @b: string with contains a binary num
 *
 * Return:
 *		- unsigned int
 *		- NULL with failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int exp = strlen(b);
	int rec = 0;

	if (b == NULL)
		return (0);

	while (b[rec] != '\0')
	{
		if (b[rec] < '0' || b[rec] > '1')
			return (0);
		res += (2 ^ exp) * atoi(&b[rec]);
		rec++, exp--;
	}

	return (res);
}
