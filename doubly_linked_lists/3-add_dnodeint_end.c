#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a list
 * @n: a constante integer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (1)
		{
			if (tail->next == NULL)
			{
				tail->next = new;
				new->prev = tail;
				break;
			}
			tail = tail->next;
		}
	}
	return (new);
}
