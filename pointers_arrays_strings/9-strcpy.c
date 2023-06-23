#include "./main.h"

/**
 * _strcpy - copy the string content to dest
 *
 * @dest: destiny of the copy
 * @src: string to copy
 *
 * Return: returns a copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (*dest);
}
