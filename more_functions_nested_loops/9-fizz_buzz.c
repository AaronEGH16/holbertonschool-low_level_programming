#include <stdio.h>

/**
 * main - print numbers from 0 to 100, but for multiply of 3 print Fizz,
 *		multiply of 5 print Buzz and for multiply of both print FizzBuzz
 *
 * Return: always return 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if (x % 5 != 0 && x % 3 != 0)
		{
			printf("%d", x);
		}
	}
	printf("\n");
	return (0);
}
