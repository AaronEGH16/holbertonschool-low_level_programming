#include "lists.h"

/**
 * add_dnodeint - add a new node in beginning of the list
 *
 * @head: addres of the first argument
 * @n: node content to add at list
 *
 * Return: return the first element of the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux;

	aux = malloc(sizeof(dlistint_t));
	if (!aux)
		return (NULL);

	aux->n = n;
	aux->prev = NULL;
	if (*head)
	{
		(*head)->prev = aux;
		aux->next = *head;
	}
	else
		aux->next = NULL;

	*head = aux;

	return (aux);
}
