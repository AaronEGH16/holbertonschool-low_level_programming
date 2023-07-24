#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all list elements in this format:
 *				[len of string] word
 *
 * @h: list to print
 *
 * Return: count of elements printed;
 */

size_t print_list(const list_t *h)
{
	if (!h)
		return (0);

	printf("[%d] %s\n", (h->str == NULL ? 0 : h->len),
			(h->str == NULL ? "(nil)" : h->str));

	return (1 + print_list(h->next));
}
