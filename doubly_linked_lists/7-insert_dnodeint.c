#include "lists.h"

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
	if (idx == 0)
		add_dnodeint((&(*h)), n);
	else
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		while (idx != 1)
		{
			temp1 = temp1->next;
			idx--;
		}
		if (temp1 == NULL)
			return (NULL);
		if (temp1->next == NULL)
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
