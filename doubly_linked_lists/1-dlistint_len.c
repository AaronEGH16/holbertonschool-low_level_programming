#include "lists.h"

/**
 * dlistint_len - go to end of doubly linked list
 *
 * @h: address of the first element
 *
 * Return: count of list elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	if (!h)
		return (0);

	return (1 + dlistint_len(h->next));
}
