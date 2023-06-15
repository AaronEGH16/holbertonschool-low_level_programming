#include <stdio.h>

/**
 *main - print size of type variables
 *
 *Return: always return 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu byte(s)", sizeof(c));
	printf("Size of an int: %zu byte(s)", sizeof(i));
	printf("Size of a long int: %zu byte(s)", sizeof(li));
	printf("Size of a long long int: %zu byte(s)", sizeof(lli));
	printf("Size of a float: %zu byte(s)", sizeof(f));
	return (0);
}
