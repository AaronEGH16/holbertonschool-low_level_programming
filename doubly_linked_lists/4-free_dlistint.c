#include "lists.h"

/**
 * free_dlistint - delete all list elements
 *
 * @head: first list element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head->next;

	free(head);

	if (aux)
		free_dlistint(aux);
}
