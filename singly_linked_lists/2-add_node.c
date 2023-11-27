#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a list
 * @str: a string of character
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	new_str = strdup(str);
	ptr->str = new_str;
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
