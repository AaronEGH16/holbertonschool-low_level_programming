#include "./main.h"

/**
 * _strncat - concatenate a two strings but limit a second string
 *
 * @dest: first string
 * @src: string to continue first
 * @n: limit of chars of second string
 *
 * Return: return a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int long1, long2;

	long1 = 0;
	long2 = 0;

	while (dest[long1] != '\0')
	{
		long1++;
	}
	while (long2 <= n && src[long2] != '\0')
	{
		dest[long1] = src[long2];
		long1++;
		long2++;
	}

	dest[long1] = '\0';
	return (dest);
}
