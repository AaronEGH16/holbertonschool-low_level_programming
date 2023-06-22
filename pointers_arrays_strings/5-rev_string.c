#include "./main.h"

/**
 * rev_string - revert the text in string
 *
 * @s: string to invert
 */

void rev_string(char *s)
{
	int count1 = 0;
	int count2 = 0;

	while (s[count1] != '\0')
	{
		count1++;
	}

	char z[count1];

	while (count1 > 0)
	{
		count1--;
		z[count2] = s[count1];
		count2++;

	}

	s = z;
}
