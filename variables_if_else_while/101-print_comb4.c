#include <stdio.h>

/**
 * main - prints a combination of 3 digits (012=120=102=...) followed for ,
 *
 * Return: always return 0
 */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		num2 = num1 + 1;

		for (; num2 <= 8; num2++)
		{
			num3 = num2 + 1;

			for (; num3 <= 9; num3++)
			{
				putchar(48 + num1);
				putchar(48 + num2);
				putchar(48 + num3);
				if (num1 == 7 && num2 == 8 && num3 == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
