#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of program executable
 *
 * @argc: argument counter
 * @argv: array of argc values
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
