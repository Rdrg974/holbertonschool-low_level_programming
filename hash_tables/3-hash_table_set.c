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
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
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
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);

			free(current->value);
			current->value = strdup(value);

			if (current->value == NULL)
			{
				free(current->key);
				free(current);
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
