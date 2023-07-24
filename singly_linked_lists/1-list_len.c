#include "lists.h"

/**
 * list_len - count all list elements
 *
 * @h: list
 *
 * Return: return a count of elements
 */

size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (1 + list_len(h->next));
}
