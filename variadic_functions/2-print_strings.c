#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a strings arguments with a separator
 *
 * @separator: separator of the strings arguments
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list psl;
	char *str;
	unsigned int i = 0;

	va_start(psl, n);

	while (i < n)
	{
		str = va_arg(psl, char *);

		printf("%s", ((str == NULL) ? "(nil)" : str));
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}

		i++;
	}
	printf("\n");

	va_end(psl);
}
