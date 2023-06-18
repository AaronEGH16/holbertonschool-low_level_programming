#include "./main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char O = 'a';

	for (; x <= 10; x++)
	{
		for (; O <= 'z'; O++)
		{
			_putchar(O);
		}
		_putchar('\n');
	}
}
