#include <stdio.h>

/**
 * main - prints hexadecimal (0-F)
 *
 * Return: 0
 */

int main(void)
{
	char num;
	char des;

	des = '9';

	for (num = '0'; num <= des; num++)
	{
		putchar(num);
	}

	des = 'f';

	for (num = 'a'; num <= des; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
