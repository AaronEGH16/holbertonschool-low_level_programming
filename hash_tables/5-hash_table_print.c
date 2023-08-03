#include "hash_tables.h"

/**
 * hash_table_print - print all elements of the hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list;
	char comma = '\0';

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			list = (ht->array)[i];
			while (list != NULL)
			{
				printf("%s\'%s\': \'%s\'", comma, list->key, list->value);
				comma = ',';
				list = list->next;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
