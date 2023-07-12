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
	if (argc > 1 && argc < 5)
	{
		if (atoi(argv[1]) != '\0')
			if (atoi(argv[3]) != '\0')
				printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
