#include "main.h"

/**
 * set_bit - change bit value on index location
 *
 * @n: number to change bit value
 * @index: location of bit to change
 *
 * Return:
 *		- -1 if an error ocurred
 *		- 1 all its OK
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
