#include <stdlib.h>
#include "./main.h"

/**
 *
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

	i = 0;

	while (i < size)
	{
		s[i] = c;
		i += 1;
	}

	return (s);
}
