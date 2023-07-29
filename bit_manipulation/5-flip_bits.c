#include "main.h"

/**
 * flip_bits - count a lot of bits you need move in n to convert it to m
 *
 * @n: original number
 * @m: destiny number
 *
 * Return:
 *		- count of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flip = 0;

	while (xor > 0)
	{
		flip += (xor & 1);
		xor >>= 1;
	}

	return (flip);
}
