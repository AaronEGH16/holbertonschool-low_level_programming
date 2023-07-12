#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - get the operation when do you want
 *
 * @s: the calc operator
 *
 * Return: the result of calc
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	i = strlen(s);

	if (i == 1)
	{
		i = 0;
		while (i < 5 && ops[i].op != *s)
			i++;
		return (ops[i].f);
	}

	printf("Error\n");
	exit(99);
}
