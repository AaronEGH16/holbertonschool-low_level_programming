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
	char *str;

	i = 0, n = 0;

	va_start(form, format);
	while (format[n] != '\0')
		n++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(form, int));
				break;
			case 'i':
				printf("%d", va_arg(form, int));
				break;
			case 'f':
				printf("%f", va_arg(form, double));
				break;
			case 's':
				str = va_arg(form, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
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
