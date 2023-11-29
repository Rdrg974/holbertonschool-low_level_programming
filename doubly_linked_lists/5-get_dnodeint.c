#include "lists.h"

/**
 * get_dnodeint_at_index - get the node
 * @head: a linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	newNode->n = head->n;
	newNode->prev = head->prev;
	newNode->next = head->next;
	return (newNode);
}
