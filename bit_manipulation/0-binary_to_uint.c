#include "main.h"
#include <math.h>

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

	if (!b)
		return (0);

	while (b[rec] != '\0')
	{
		if (b[rec] < '0' || b[rec] > '1')
			return (0);
		res += (pow(2, exp)) * b[rec];
		rec++, exp--;
	}

	return (res);
}
