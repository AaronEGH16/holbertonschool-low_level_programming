#include "./main.h"

/**
 * _strspn - return the number of first coincidences with accept in s
 *
 * @s: string to find
 * @accept: letters to search
 *
 * Return: the number of coincideces
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int count2;
	unsigned int total = 0;

	while (s[count] != '\0')
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
			{
				total++;
				break;
			}
			else if (accept[count2 + 1] == '\0')
			{
				return (total);
			}
		}
		count++;
	}
	return (total);
}
