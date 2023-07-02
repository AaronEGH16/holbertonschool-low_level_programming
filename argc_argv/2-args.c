#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments (one per line)
 *
 * @argc: argument counter
 * @argv: string of arguments
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
