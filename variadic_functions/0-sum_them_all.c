#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - is a variadic function with sum all arguments
 *
 * @n: first argument
 *
 * Return: return a sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int res = 0;

	va_list	num;

	va_start(num, n);

	while (va_arg(num, unsigned int) != 0 && n)
	{
		res += va_arg(num, unsigned int);
	}
	va_end(num);
	return (res);
}
