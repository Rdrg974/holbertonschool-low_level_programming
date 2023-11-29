#include "lists.h"

/**
 * get_dnodeint_at_index - get the node
 * @head: a list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	if (i == index)
		return (NULL);
	return (head);
}
