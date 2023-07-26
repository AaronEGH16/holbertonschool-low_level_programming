#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node in the index location
 *
 * @h: list
 * @idx: location to insert
 * @n: content of the node
 *
 * Return:
 *		- NULL if an error has ocurred
 *		- addres of the new content
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h;
	dlistint_t *new;
	unsigned int num;

	num = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; num < idx; num++)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = aux;
	new->next = aux->next;
	aux->next = new;

	return (new);
}
