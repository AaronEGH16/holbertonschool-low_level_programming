#include "./main.h"

/**
 * _atoi - read teh number in string
 *
 * @s: strinng to read
 *
 * Return: returns the number in the text
 */

int _atoi(char *s)
{
	int c = 0;
	int num = 0;
	int a = 1;

	while (s[c] != '\0')
	{
		if (s[c] == '-')
		{
			a = a * -1;
		}
		if (s[c] >= '0' && s[c] <= '9')
		{
			num = num + (s[c] - '0');
			if (s[c + 1] >= '0' && s[c + 1] <= 57)
			{
				num = a * (num * 10);
			}
		}
		if (((s[c] >= '0' && s[c] <= '9') && (s[c + 1] < '0' || s[c + 1] > '9'))
				|| s[c + 1] == '\0')
		{
			return (num * a);
		}
		c++;
	}
	return (num * a);
}
