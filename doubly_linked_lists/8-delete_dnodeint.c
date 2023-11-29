#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: an array of dlistint_t
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = *head;

	if (*head)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			if (*head != NULL)
				(*head)->prev = NULL;
			current = NULL;
		}
		else
		{
			while (index != 0)
			{
				prev = current;
				current = current->next;
				index--;
			}
			prev->next = current->next;
			free(current);
			current = NULL;
		}
		return (1);
	}
	return (-1);
}
