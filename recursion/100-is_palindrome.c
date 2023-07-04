#include "./main.h"

/**
 * aux_lenght - get the lenght of string
 *
 * @s: string to get the lenght
 *
 * Return: 1 + recursion
 */

int aux_lenght(char *s)
{
	if (*s != '\0')
	{
		return (1 + aux_lenght(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * aux_palindrome - ingresa el string a leer y compara las letras first y last
 *
 * @first: primera letra
 * @last: ultima letra
 *
 * Return: retorna 1 * el valor obtenido de la recursion
 */

int aux_palindrome(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first != *last)
	{
		return (0);
	}
	else
	{
		return (aux_palindrome(first + 1, last - 1));
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
	int last = 0;

	last = aux_lenght(s);

	if (last == 0)
	{
		return (1);
	}

	return (aux_palindrome(s, (s + (last - 1))));
}
