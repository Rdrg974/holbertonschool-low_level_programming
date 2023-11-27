#include "lists.h"

/**
 * list_len - print the number of elements in a linked list_t list
 * @h: a list
 * Return:  the number of elements in a linked
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
