#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node in the header of the list
 *
 * @head: the first node of the list
 * @str: the string to insert in new node
 *
 * Return: return addres of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *aux;
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
	aux->next = *head;

	*head = aux;

	return (*head);
}
