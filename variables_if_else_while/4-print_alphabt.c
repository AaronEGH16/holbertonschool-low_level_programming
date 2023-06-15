#include <stdio.h>

/**
 *main - prints the alphabet except q and e
 *
 *Return: always return 0
 */

int main(void)
{
	char lo, ld;

	ld = 'z';
	for (lo = a; lo < ld ; lo++)
	{
		if (lo != q || lo != e)
		{
			putchar(lo);
		}
	}
	return (0);
}
