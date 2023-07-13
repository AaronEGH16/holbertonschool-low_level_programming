#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all numbers passed by arguments with separator
 *
 * @separator: separator of numbers
 * @n: number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pnl;

	unsigned int i = 0;

	va_start(pnl, n);

	while (i < n)
	{
		printf("%d", va_arg(pnl, unsigned int));
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");

	va_end(pnl);
}
