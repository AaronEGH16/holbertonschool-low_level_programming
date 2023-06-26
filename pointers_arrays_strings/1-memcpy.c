#include "./main.h"

/**
 * _memcpy - copy n bytes of memory of src to dest
 *
 * @dest: destiny of the copy
 * @src: origin of the copy
 * @n: fields to copy
 *
 * Return: return a copy of n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
