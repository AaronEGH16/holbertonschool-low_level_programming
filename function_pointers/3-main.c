#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - get a calc passed by arguments
 *
 * @argc: argument counter
 * @argv: argument values
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1;
	num1 = atoi(argv[1]);
	int num2;
	num2 = atoi(argv[3]);
	char *op;
	*op = argv[2];

	if (op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
		(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
