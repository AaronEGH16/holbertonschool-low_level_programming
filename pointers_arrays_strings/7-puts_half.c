#include "./main.h"

/**
 * puts_half - prints the half of the string
 *
 * @str: strinng to print
 */

void puts_half(char *str)
{
	int l = 0;
	int r;

	while (str[l] != '\n')
	{
		l++;
	}

	r = (l - 1) / 2;

	for (r; r < (l - 1); r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
