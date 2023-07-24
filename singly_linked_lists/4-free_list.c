#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all list and set it NULL
 *
 * @head: first element of the list
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
