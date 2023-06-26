#include "./main.h"

/**
 * _memset - set b in n fields of memory
 *
 * @s: memory to set
 * @b: value to set in memory
 * @n: fields of memory to set
 *
 * Return: return a point to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*s = b;
	}
	return (*s);
}
