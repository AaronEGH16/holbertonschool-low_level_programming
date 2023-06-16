#include <stdio.h>

/**
 * main - print all numbers by 0 to 9 with ", "
 *
 * Return: always return 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar (48 + num);
		if ((48 + num) < 9)
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
