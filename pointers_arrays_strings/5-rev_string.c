#include "./main.h"
/**
 * lenght_aux - get a string lenght
 *
 * @s: string
 * Return: string lenght
 */

int lenght_aux(char *s)
{
	int leng = 0;

	while (s[leng] != '\0')
	{
		len++;
	}
	return (leng);
}

/**
 * rev_string - revert the text in string
 *
 * @s: string to invert
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (lenght_aux(s) - 1);
	char z;

	while (i < j)
	{
		z = s[i];
		s[i] = s[j];
		s[j] = z;
		i++, j--;
	}
}
