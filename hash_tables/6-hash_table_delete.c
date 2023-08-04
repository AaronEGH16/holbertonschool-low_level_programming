#include "hash_tables.h"

/**
 * hash_table_delete - delete all elements of the hash table
 *
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *listN, *list;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			list = (ht->array)[i];
			while (list != NULL)
			{
				listN = list->next;
				free(list->key);
				free(list->value);
				free(list);
				list = listN;
			}
		}
		free(ht->array);
		free(ht);
	}
}
