#include <stdio.h>
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
	int i;
	int mul = 1;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] >= "A" && argv[i] <= "Z" || argv[i] >= "a" && argv[i] <= "z")
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			mul *= atoi(argv[i]);
		}
	}
	printf("%d\n", mul);
	return (0);
}
