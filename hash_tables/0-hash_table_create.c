#include "hash_tables.h"

/**
 * array_of_node - create an array of node
 * Return: an array
 */
hash_node_t *array_of_node()
{
	hash_node_t *array;

	array = malloc(sizeof(hash_node_t));
	return (array);
}

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
		for (i = 0; i < str->size; i++)
		{
			str->array[i] = array_of_node();
		}
		return (str);
	}
	return (NULL);
}
