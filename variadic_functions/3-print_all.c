#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all arguments format passed by string const
 *
 * @format: string with contains all arguments format
 */

void print_all(const char * const format, ...)
{
	unsigned int i, n;
	va_list form;

	i = 0;

	va_start(form, format);

	while (format)
		n++;

	while (format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(form, char));
				break;
			case 'f':
				printf("%f", va_arg(form, float));
				break;
			case 's':
				printf("%s",
				((va_arg(form, char *) == NULL) ? "(nil)" : va_arg(form, char *)));
				break;
			case 'i':
				printf("%d", va_arg(form, int));
				break;
		}
		if ((format[i] == 'c' ||
			format[i] == 'i' ||
			format[i] == 'f' ||
			format[i] == 's') && i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(form);
}
