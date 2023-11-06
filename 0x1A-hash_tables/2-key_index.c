#include "hash_tables.h"

/*
 * key_index - Get the index at which a key/value
 *      pair should be stored in array of a hash table
 * @key: key to get index for
 * @size: size of hash table
 *
 * Return: index for the key
 * Description: Uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
