#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node at end of the list
 *
 * @head: start of the list
 * @str: string to new node
 *
 * Return: return addres of the last element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *aux;
	list_t *re;
	char *stra;

	aux = malloc(sizeof(list_t));
	if (!aux)
		return (NULL);

	stra = strdup(str);
	if (!stra)
	{
		free(aux);
		return (NULL);
	}

	aux->str = stra;
	aux->len = strlen(stra);
	aux->next = NULL;

	if (!*head)
		*head = aux;
	else
	{
		re = *head;
		while (re->next != NULL)
			re = re->next;
		re->next = aux;
	}

	return (*head);
}
