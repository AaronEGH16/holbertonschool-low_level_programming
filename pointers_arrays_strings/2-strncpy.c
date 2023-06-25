#include "./main.h"

/**
 * _strncpy - copy the string content to dest but limit string chars
 *
 * @dest: destiny of the copy
 * @src: string to copy
 * @n: limit chars of the string
 *
 * Return: returns a copy of src but only n chars
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\n';
	return (dest);
}
