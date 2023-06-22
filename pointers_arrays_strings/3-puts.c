#include "./main.h"

/**
 * _puts - print string and print a end line
 *
 * @str: string to print
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] != 0)
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
