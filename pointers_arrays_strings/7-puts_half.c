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

	while (str[l] != '\0')
	{
		l++;
	}

	r = (l - 1) / 2;

	while (r < (l - 1))
	{
		r++;
		_putchar(str[r]);
	}
	_putchar('\n');
}
