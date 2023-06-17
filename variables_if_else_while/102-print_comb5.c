#include <stdio.h>

/**
 * main - prints a combination of 3 digits (012=120=102=...) followed for ,
 *
 * Return: always return 0
 */

int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				num4 = num2 + 1;

				for (; num4 <= 9; num4++)
				{
					putchar(48 + num1);
					putchar(48 + num2);
					putchar(' ');
					putchar(48 + num3);
					putchar(48 + num4);
					if (num1 == 9 && num2 == 8 && num3 == 9 && num4 == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
