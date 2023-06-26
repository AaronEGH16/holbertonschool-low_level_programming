#include "./main.h"

/**
 * _strpbrk - find the address of the first of any ocurrence and return it
 *
 * @s: string where the programs look
 * @accept: any character to find
 *
 * Return: return address to the firs ocurrence of any accept
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int count2;

	while (s[count] != '\0')
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
			{
				return (&s[count]);
			}
		}
		count++;
	}
	return ('\0');
}
