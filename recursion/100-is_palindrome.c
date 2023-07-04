#include "./main.h"

/**
 * aux_palindrome - ingresa el string a leer y compara las letras first y last
 *
 * @s: string a leer
 * @first: primera letra
 * @last: ultima letra
 *
 * Return: retorna 1 * el valor obtenido de la recursion
 */

int aux_palindrome(char *s, int first, int last)
{
	if (first < last)
	{
		if (s[first] == s[last])
		{
			return (aux_palindrome(s, first++, last--));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - indica si la palabra ingresada es palíndromo
 *
 * @s: string para leer
 *
 * Return: 1 si es pali... y 0 si no lo es
 */

int is_palindrome(char *s)
{
	int first = 0;
	int last = 0;

	while (*s)
	{
		last++;
	}

	last--;

	return (aux_palindrome(s, first, last));
}
