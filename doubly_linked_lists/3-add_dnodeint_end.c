#include "lists.h"

/**
 * add_dnodeint_end - add a new node in the end of the list
 *
 * @head: addres of the first argument
 * @n: node content to add at list
 *
 * Return: return the first element of the list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux;
	dlistint_t *re;

	aux = malloc(sizeof(dlistint_t));
	if (!aux)
		return (NULL);

	aux->n = n;
	aux->next = NULL;
	if (*head)
	{
		re = *head;
		while (re->next != NULL)
		{
			re = re->next;
		}
		re->next = aux;
		aux->prev = re;
	}
	else
	{
		aux->prev = NULL;
		*head = aux;
	}
	return (*head);
}
