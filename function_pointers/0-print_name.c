#include "function_pointers.h"

/**
 * print_name - this function calls function to print the name
 *
 * @name: name to print
 * @f: function to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
