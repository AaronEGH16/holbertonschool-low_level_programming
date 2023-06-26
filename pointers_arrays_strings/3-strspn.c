#include "./main.h"

/**
 * _strspn -
 *
 * @s:
 * @accept:
 *
 * Return:
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
			else
			{
				return (total);
			}
		}
		count++;
	}
	return (total);
}
