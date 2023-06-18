#include "./main.h"

/**
 * print_alphabet - prints the alphabet
 */

void print_alphabet(void)
{
	char Origin = 'a';

	for (; Origin <= 'z'; Origin++)
	{
		_putchar(Origin);
	}
	_putchar('\n');
}
