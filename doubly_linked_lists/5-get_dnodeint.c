#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at located in index
 *
 * @head: the first element of the list
 * @index: location of element
 *
 * Return: element index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int num;

	if (!head)
		return (NULL);

	num = 0;
	aux = head;

	while (aux && num < index)
	{
		aux = aux->next;
		num++;
	}

	return (aux);
}
