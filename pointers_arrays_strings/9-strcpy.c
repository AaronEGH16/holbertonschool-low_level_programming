#include "./main.h"

/**
 * _strcpy - copy the string content to dest
 *
 * @dest: destiny of the copy
 * @str: string to copy
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
}
