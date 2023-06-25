#include "./main.h"

/**
 * _strcat - concatenate a two strings
 *
 * @dest: first string
 * @src: string to continue first
 *
 * Return: return a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int long1, long2, count1, count2, long1_2;
	char *new;

	long1 = 0;
	long2 = 0;
	count1 = 0;
	count2 = 0;

	while (dest[long1] != '\0')
	{
		long1++;
	}
	while (src[long2] != '\0')
	{
		long2++;
	}

	long1_2 = long1 + long2;

	while (count1 < long1)
	{
		new[count1] = dest[count1];
		count1++;
	}
	while (count1 < long1_2)
	{
		new[count1] = src[count2];
		count1++;
		count2++;
	}
	new[count1] = '\0';
	return (new);
}
