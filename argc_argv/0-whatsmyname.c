#include <stdio.h>
#include "main.h"

/**
 * name - prints the name of program executable
 *
 * argv: array of argc values
 *
 * Return: always return 0
 */

int name(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
