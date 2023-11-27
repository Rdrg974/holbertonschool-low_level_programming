#include "lists.h"

/**
 * list_len - print the number of elements in a linked list_t list
 * @h: a list
 * Return:  the number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = malloc(sizeof(list_t));
	memcpy(ptr, h, sizeof(list_t));
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	free(ptr);
	return (count);
}
