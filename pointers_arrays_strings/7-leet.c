#include "./main.h"

/**
 * leet - changes a/A to 4, e/E to 3, o/O to 0, t/T to 7, l/L to 1
 *
 * @str: string to modify
 *
 * Return: return a modify string
 */

char *leet(char *str)
{
	int count1 = 0;
	int count2;
	char let[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	while (str[count1] != '\0')
	{
		for (count2 = 0; count2 < 5; count2++)
		{
			if (str[count1] == let[count2] || str[count1] == let[count2] - 32)
			{
				str[count1] = num[count2];
			}
		}
		count1++;
	}
	return (str);
}
