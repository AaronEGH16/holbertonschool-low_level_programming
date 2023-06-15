#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - select a random number and says if the last number is 0, less than 6 and not 0, and is greater than 5
 *
 * Return: always return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastN = n % 10;
	printf("Last digit of %d is %d ", n, lastN);
	if (lastN == 6)
		puts("is 6");
	if (lastN > 5)
		puts(" and is greater than 5");
	if (lastN < 6)
		puts(" and is less than 6");
	if (lastN == 0)
	{
		puts(" and is 0");
	}
	else
	{
		puts(" and not 0");
	}
	puts("\n");
	return (0);
}
