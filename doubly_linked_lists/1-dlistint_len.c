#include "lists.h"

/**
 * dlistint_len - print the number of elements
 * @h: a list
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	for (count = 0; h->next != NULL; count++)
		h = h->next;
	count++;
	return (count);
}
