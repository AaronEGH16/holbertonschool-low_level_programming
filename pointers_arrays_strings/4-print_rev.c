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
		++count;
	}
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	/*_putchar('\n');*/
}
