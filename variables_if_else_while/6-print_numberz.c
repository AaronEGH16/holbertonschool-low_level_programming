#include <stdio.h>

/**
 * main - prints abecedary wiht char variable
 *
 * Return: always return 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(48 + num);
	}
	putchar('\n');
	return (0);
}
