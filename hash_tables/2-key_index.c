#include "hash_tables.h"

/**
 * key_index - that gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);
	return (idx % size);
}
