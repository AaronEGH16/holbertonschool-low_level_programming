#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print a multiplication of the arguments numbers
 *
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return:
 *		- 0 if always is okey
 *		- 1 if an error is ocurred
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1])) * atoi(argv[2]);
	return (0);
}
