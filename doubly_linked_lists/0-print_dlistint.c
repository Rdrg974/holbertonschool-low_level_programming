#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: a list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
		return (-1);
	for (count = 0; h->next != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
