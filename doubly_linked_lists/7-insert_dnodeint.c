#include "lists.h"

/**
 * node_empty - creation a node empty
 * @n: a integer
 * Return: the node
 */

dlistint_t *node_empty(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: an array of dlistint_t
 * @idx: a given position
 * @n: an integer
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = *h;
	dlistint_t *newNode = node_empty(n);

	if (newNode)
	{
		if (idx == 0)
		{
			newNode->next = *h;
			if (*h)
				(*h)->prev = newNode;
			*h = newNode;
			return (newNode);
		}
		while (idx != 1 && temp1 != NULL)
		{
			temp1 = temp1->next;
			idx--;
		}
		if (temp1)
		{
			if (temp1->next)
				temp1->next->prev = newNode;
			newNode->next = temp1->next;
			newNode->prev = temp1;
			temp1->next = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
