#include "./main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != 0)
	{
		count++;
	}
	/*for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}*/
	while (count > 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
