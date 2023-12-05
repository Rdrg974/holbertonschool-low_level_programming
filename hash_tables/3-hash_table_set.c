#include "hash_tables.h"
#include <string.h>

/**
 * create_node - function to create a new node
 * @key: is the key
 * @value: the value associated with the key
 * Return: the new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: is the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	hash_node_t *new_node;

	if (ht || key[0] != '\0')
	{
		idx = hash_djb2((const unsigned char *)key);
		new_node = create_node(key, value);
		if (!new_node)
			return (0);
		if (ht->array[idx])
			new_node->next = ht->array[idx];

		ht->array[idx] = new_node;
		return (1);
	}
	return (0);
}
