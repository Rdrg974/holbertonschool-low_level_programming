#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *str;

	if (size)
	{
		str = malloc(sizeof(hash_table_t) * size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	return (NULL);
}
