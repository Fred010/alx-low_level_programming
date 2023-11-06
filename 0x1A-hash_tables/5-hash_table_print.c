#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *             they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int id;
	unsigned char c_tag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (id = 0; id < ht->size; id++)
	{
		if (ht->array[id] != NULL)
		{
			if (c_tag == 1)
				printf(", ");

			node = ht->array[id];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}

			c_tag = 1;
		}
	}

	printf("}\n");
}
