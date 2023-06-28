#include "./main.h"

/**
 * _puts_recursion - recursive puts function
 *
 * @s: string to print using puts recursive
 */

void _puts_recursion(char *s != '\0')
{
	if (s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
