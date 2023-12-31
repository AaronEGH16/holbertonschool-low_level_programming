#include "lists.h"

/**
 * print_dlistint - print all elements in the list
 *
 * @h: address of the first element
 *
 * Return: count of list elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);

	return (1 + print_dlistint(h->next));
}
