#include "hash_tables.h"

/**
 * hash_table_create - create and initialize a new hash table
 *
 * @size: size of the new hash table
 *
 * Return:
 *		- NULL: failure
 *		- address of new hash table initialized in NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;
	unsigned long int count = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	arr = malloc(sizeof(*arr) * size)
	if (!arr)
	{
		free(ht);
		return (NULL);
	}

	while (count < size)
	{
		arr[count] = NULL;
		count++;
	}

	ht->size = size;
	ht->array = arr;
}
