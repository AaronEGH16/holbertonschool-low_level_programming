#include <stdio.h>

/**
 * main - print all numbers in base 10 from 0 to 10
 *
 * Return: always return 0
 */

int main(void)
{
	int d = 10;
	int o = 0;
	
	for (; o < d ; o++)
	{
		putchar(o);
	}
	putchar('\n');
	return (0);
}
