#include <stdio.h>

/**
 * main - print all combinations of 2 digits (01 = 10)
 *
 * Return: always return 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		putchar(48 + num1);
		num2 = num1;
		for (; num2 <= 9; num2++)
		{
			putchar(48 + num2);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
