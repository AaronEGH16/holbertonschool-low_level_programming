#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - select a random number and says if the last number is =0, <6, >5
 *
 * Return: always return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	printf("Last digit of %d is %d", n, n % 10);
	if ((n % 10) > 5)
		printf(" and is greater than 5");
	if ((n % 10) < 6 && (n % 10) != 0)
		printf(" and is less than 6");
	if ((n % 10) == 0)
	{
		printf(" and is 0");
	}
	else if ((n % 10) < 0)
	{
		printf(" and not 0");
	}

	return (0);
}
