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
	dlistint_t *temp1 = *h, *temp2 = NULL;
	dlistint_t *newNode;

	if (*h == NULL)
		return (NULL);
	else if (idx == 0)
		add_dnodeint((&(*h)), n);
	else
	{
		newNode = node_empty(n);
		while (idx != 1 && temp1 != NULL)
		{
			temp1 = temp1->next;
			idx--;
		}
		if (temp1 == NULL)
			return (NULL);
		else if (temp1->next == NULL)
			add_dnodeint_end((&(*h)), n);
		else
		{
			temp2 = temp1->next;
			temp1->next = newNode;
			temp2->prev = newNode;
			newNode->next = temp2;
			newNode->prev = temp1;
		}
	}
	return (*h);
}
