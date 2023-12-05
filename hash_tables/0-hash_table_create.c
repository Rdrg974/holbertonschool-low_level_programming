#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	unsigned long int i;
	hash_table_t *str;

	if (size > 0)
	{
		str = malloc(sizeof(hash_table_t));
		if (str == NULL)
			return (NULL);
		str->size = size;
		str->array = malloc(sizeof(hash_node_t *) * size);
		if (str->array == NULL)
		{
			free(str);
			return (NULL);
		}
		for (i = 0; i < size; i++)
			str->array[i] = NULL;
		return (str);
	}
	return (NULL);
}
