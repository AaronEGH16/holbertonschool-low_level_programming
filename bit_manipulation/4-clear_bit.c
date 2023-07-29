#include "main.h"

/**
 * clear_bit - get a number and index to change bit value from 1 to 0
 *
 * @n: number to change
 * @index: location of the bit to clear
 *
 * Return:
 *		- 1 all its OK
 *		- -1 an error has ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
