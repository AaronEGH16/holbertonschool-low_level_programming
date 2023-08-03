#include "hash_tables.h"

/**
 * hash_table_set - set a new node in hash table
 *
 * @ht: address of the hash table
 * @key: key asociated to a value
 * @value: new value inserted in a hash
 *
 * Return:
 *		- 1 success
 *		- 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *valcp;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	valcp = strdup(value);
	if (valcp == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valcp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valcp;
	new->next = ht->array[indx];
	ht->array[indx] = new;

	return (1);
}
