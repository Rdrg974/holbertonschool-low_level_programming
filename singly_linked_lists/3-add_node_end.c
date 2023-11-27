#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a list
 * @str: a string of character
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *ptr = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp->str = new_str;
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
