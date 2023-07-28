#include "main.h"
#include <string.h>

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
	unsigned int res = 0, exp = 1;
	int rec = 0;

	if (!b)
		return (0);

	rec = strlen(b);
	rec -= 1;

	while (rec >= 0)
	{
		if (b[rec] < '0' || b[rec] > '1')
			return (0);
		res += (b[rec] - '0') * exp;
		rec--, exp *= 2;
	}

	return (res);
}
