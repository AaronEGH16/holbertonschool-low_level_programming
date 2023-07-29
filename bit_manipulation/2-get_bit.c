#include "main.h"

/**
 * get_bit - get a number and a location of the bit
 *
 * @n: number
 * @index: location of the bit
 *
 * Return:
 *		- 0 or 1 if a bit location
 *		- -1 if an error has ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n & (1 << index)) == 0 ? 0 : 1);
}
