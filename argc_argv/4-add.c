#include <stdio.h>
#include <stdlib.h>
#include <.h>
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
	int i, f;
	int sum = 0;
	char *flag;

	for (i = 1; i < argc; i++)
	{
		flag = argv[i];

		for (f = 0; flag[f] != '\0'; f++)
		{
			if (flag[f] < '0' || flag[f] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
