#include <stdio.h>

/**
 * main - prints  abecedary
 *
 * Return: always return 0
 */

int main(void)
{
	char ol;
	char dl = 'z';

	for (ol = 'a'; ol <= dl; ol++)
	{
		putchar(ol);
	}
	putchar('\n');
	return (0);
}
