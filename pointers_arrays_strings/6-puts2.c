#include "./main.h"

/**
 * puts2 - prints only the numbers divisible for 2
 *
 * @str: string to print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] + '0') % 2)
			_putchar(str[i]);
		i++;
	}
}

