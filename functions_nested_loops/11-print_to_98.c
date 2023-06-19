#include <stdio.h>
#include "./main.h"
/**
 * print_to_98 - print from N to 98
 *
 * @n: number to start count
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	putchar('\n');
}
