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
	int long1, long2;

	long1 = 0;
	long2 = 0;

	while (dest[long1] != '\0')
	{
		long1++;
	}
	while (src[long2] != '\0')
	{
		dest[long1] = src[long2];
		long1++;
		long2++;
	}

	dest[long1] = '\0';
	return (dest);
}
