#include "hash_tables.h"

/**
 * hash_table_set - add and updates the hash table
 * @ht: pointer to the hash table
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: 0 if failure and 1 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_dup;
	hash_node_t *new;
	unsigned long int id, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	id = key_index((const unsigned char *)key, ht->size);
	for (n = id; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = value_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_dup);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_dup;
	new->next = ht->array[id];
	ht->array[id] = new;

	return (1);
}
