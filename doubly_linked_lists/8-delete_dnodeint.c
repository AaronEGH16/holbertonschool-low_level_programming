#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a index location of the list
 *
 * @head: first element of the list
 * @index: location of the element to delete
 *
 * Return:
 *		- 1 succeeded
 *		- -1 failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = *head;

	if (!(del))
		return (-1);

	while (index != 0)
	{
		if (!del)
			return (-1);
		del = del->next;
		index--;
	}

	if (del == *head)
	{
		*head = del->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		del->prev->next = del->next;
		if (del->next)
			del->next->prev = del->prev;
	}

	free(del);

	return (1);
}
