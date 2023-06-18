#include "./main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char O;

	for (; x <= 9; x++)
	{
		for (O = 'a'; O <= 'z'; O++)
		{
			_putchar(O);
		}
		_putchar('\n');
	}
}
