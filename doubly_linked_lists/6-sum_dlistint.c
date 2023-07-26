#include "lists.h"

/**
 * sum_dlistint - sum all list elements
 *
 * @head: the first element of the list
 *
 * Return: sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *aux = head;

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
