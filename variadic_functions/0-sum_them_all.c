#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - is a variadic function with sum all arguments
 *
 * @n: num of argument
 *
 * Return: return a sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int res = 0, i;

	va_list num;

	if (n == 0)
		return (res);

	va_start(num, n);

	while (i < n)
	{
		res += va_arg(num, unsigned int);
		i++;
	}
	va_end(num);
	return (res);
}
