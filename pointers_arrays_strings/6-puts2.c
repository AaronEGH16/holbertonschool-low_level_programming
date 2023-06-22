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
		if ((i % 2)==0 || i == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

