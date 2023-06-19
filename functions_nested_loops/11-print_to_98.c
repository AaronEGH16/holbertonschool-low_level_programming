#include "./main.h"
#include <stdio.h>
/**
 * print_to_98 - print from N to 98
 *
 * @n: number to start count
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n == 98)
		{
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
}
