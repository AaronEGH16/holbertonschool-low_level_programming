#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - print a sum of arguments
 *
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return:
 *		- 0 if allways is okay
 *		- 1 if an error has ocurred
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) <= INT_MAX && atoi(argv[i]) >= INT_MIN)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
