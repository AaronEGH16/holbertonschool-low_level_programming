#include <stdlib.h>
#include "./main.h"

/**
 * create_array - create array with MALLOC
 *
 * @size: size of the array
 * @c: char to print
 *
 * Return:
 *	- NULL if size = 0 or pointar not have memory
 *	- pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc(sizeof(char) * size);

	if (!s)
	{
		return ('\0');
	}

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i += 1;
	}

	return (s);
}
