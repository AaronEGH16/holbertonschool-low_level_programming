#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - get the operation when do you want
 *
 * @s: the calc operator
 * @a: num1
 * @b: num2
 *
 * Return: the result of calc
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = strlen(s);

	if (i == 1 || ops[s] != 4)
		return (ops[s](a, b));

	printf("Error\n");
	exit(99);
}
