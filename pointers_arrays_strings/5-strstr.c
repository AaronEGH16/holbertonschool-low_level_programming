#include "./main.h"

/**
 * _strstr - find the str2 text in str1
 *
 * @haystack: string 1
 * @needle: string 2
 *
 * Return: return the address of the firs letter of the coincidence
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int count2;
	char *store = '\0';

	while (haystack[count] != '\0')
	{
		for (count2 = 0; needle[count2] != '\0'; count2++)
		{
			if (haystack[count] == needle[count2])
			{
				if (needle[count2 + 1] == '\0')
				{
					return (store);
				}
				else if (count2 == 0)
				{
					store = &haystack[count];
				}
				break;
			}
		}
		count++;
	}
	return (store);
}
