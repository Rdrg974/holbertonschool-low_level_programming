#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a list
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *nxt;

	current = head;
	while (current != NULL)
	{
		nxt = current->next;
		free(current->str);
		free(current);
		current = nxt;
	}
}
