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

	aux = malloc(sizeof(list_t));
	if (!aux)
		return (NULL);

	aux->str = strdup(str);
	aux->len = strlen(aux->str);
	aux->next = *head;

	*head = aux;

	aux = NULL;
	free(aux);

	return (*head);
}
